#include "HyperLinkPluginBPLibrary.h"
#include "HyperLinkPlugin.h"
#include "Widgets/Input/SRichTextHyperlink.h"
#include "Styling/SlateTypes.h"
#include "Engine/Engine.h"
#include "Components/RichTextBlock.h"

FRichInlineHyperLinkDecorator::FRichInlineHyperLinkDecorator(URichTextBlock* InOwner, UHyperLinkPluginBPLibrary* InDecorator)
    : FRichTextDecorator(InOwner), Decorator(InDecorator)
{
    if (InDecorator)
    {
        LinkStyle = InDecorator->Style;
    }

    OnClickDelegate.BindLambda([InDecorator]() {
        if (InDecorator)
        {
            InDecorator->ClickFun(TEXT(""), TEXT(""));
        }
        });
}

bool FRichInlineHyperLinkDecorator::Supports(const FTextRunParseResults& RunParseResult, const FString& Text) const
{
    if (RunParseResult.Name == TEXT("a") && RunParseResult.MetaData.Contains(TEXT("id")))
    {
        const FTextRange& IdRange = RunParseResult.MetaData[TEXT("id")];
        IdString = Text.Mid(IdRange.BeginIndex, IdRange.EndIndex - IdRange.BeginIndex);
        return true;
    }
    return false;
}

TSharedPtr<SWidget> FRichInlineHyperLinkDecorator::CreateDecoratorWidget(const FTextRunInfo& RunInfo, const FTextBlockStyle& TextStyle) const
{
    FString RawText = RunInfo.Content.ToString();

    FString LinkID;
    if (RunInfo.MetaData.Contains(TEXT("id")))
    {
        LinkID = RunInfo.MetaData[TEXT("id")];
    }

    FString Content;
    if (RunInfo.MetaData.Contains(TEXT("content")))
    {
        Content = RunInfo.MetaData[TEXT("content")];
    }

    TSharedPtr<FSlateHyperlinkRun::FWidgetViewModel> Model = MakeShareable(new FSlateHyperlinkRun::FWidgetViewModel);

    TSharedPtr<SRichTextHyperlink> Link = SNew(SRichTextHyperlink, Model.ToSharedRef())
        .Text(FText::FromString(RawText))
        .Style(&LinkStyle)
        .OnNavigate(FSimpleDelegate::CreateLambda([this, LinkID, Content]() {
        if (Decorator)
        {
            Decorator->ClickFun(LinkID, Content);
        }
            }));

    return Link;
}

UHyperLinkPluginBPLibrary::UHyperLinkPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

TSharedPtr<ITextDecorator> UHyperLinkPluginBPLibrary::CreateDecorator(URichTextBlock* InOwner)
{
    return MakeShareable(new FRichInlineHyperLinkDecorator(InOwner, this));
}

void UHyperLinkPluginBPLibrary::ClickFun_Implementation(const FString& LinkID, const FString& Content)
{
    if (GEngine)
    {
        FString DebugMessage = FString::Printf(TEXT("Hyperlink clicked! ID: %s, Content: %s"), *LinkID, *Content);
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, DebugMessage);
    }
}

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKWebView.h"

#import "NSDraggingDestination.h"
#import "NSDraggingSource.h"
#import "QLPreviewPanelDataSource.h"
#import "QLPreviewPanelDelegate.h"
#import "QLSeamlessCloserDelegate.h"
#import "QLSeamlessOpenerDelegate.h"

@class MUISelectionAndClickInformation, MUIWKWebViewController, NSArray, NSDraggingSession, NSEvent, NSResponder, NSString;

@interface MUIWKWebView : WKWebView <NSDraggingDestination, NSDraggingSource, QLPreviewPanelDataSource, QLPreviewPanelDelegate, QLSeamlessCloserDelegate, QLSeamlessOpenerDelegate>
{
    BOOL _isDragging;	// 152 = 0x98
    BOOL _isDraggingAttachments;	// 153 = 0x99
    BOOL _hasFlockedDrag;	// 154 = 0x9a
    NSArray *_attachmentControllersToQuicklook;	// 160 = 0xa0
    MUIWKWebViewController *_controller;	// 168 = 0xa8
    NSDraggingSession *_dragSession;	// 176 = 0xb0
    double _draggingRestoreBoundary;	// 184 = 0xb8
    NSEvent *_attachmentMouseDownEvent;	// 192 = 0xc0
    MUISelectionAndClickInformation *_selectionAndClickInformation;	// 200 = 0xc8
    NSResponder *_oldFirstResponder;	// 208 = 0xd0
}

+ (void)initialize;	// IMP=0x0000000000028c33
@property(retain, nonatomic) NSResponder *oldFirstResponder; // @synthesize oldFirstResponder=_oldFirstResponder;
@property(retain, nonatomic) MUISelectionAndClickInformation *selectionAndClickInformation; // @synthesize selectionAndClickInformation=_selectionAndClickInformation;
@property(retain, nonatomic) NSEvent *attachmentMouseDownEvent; // @synthesize attachmentMouseDownEvent=_attachmentMouseDownEvent;
@property(nonatomic) double draggingRestoreBoundary; // @synthesize draggingRestoreBoundary=_draggingRestoreBoundary;
@property(nonatomic) BOOL hasFlockedDrag; // @synthesize hasFlockedDrag=_hasFlockedDrag;
@property(nonatomic) BOOL isDraggingAttachments; // @synthesize isDraggingAttachments=_isDraggingAttachments;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property(retain, nonatomic) NSDraggingSession *dragSession; // @synthesize dragSession=_dragSession;
@property(nonatomic) __weak MUIWKWebViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSArray *attachmentControllersToQuicklook; // @synthesize attachmentControllersToQuicklook=_attachmentControllersToQuicklook;
- (void).cxx_destruct;	// IMP=0x000000000002d2c5
- (id)seamlessCloserTransitionImageForPreviewItem:(id)arg1 contentRect:(struct CGRect *)arg2;	// IMP=0x000000000002d0c3
- (struct CGRect)seamlessCloserSourceFrameOnScreenForPreviewItem:(id)arg1;	// IMP=0x000000000002d09c
- (void)seamlessOpener:(id)arg1 failedToOpenItems:(id)arg2 withError:(id)arg3;	// IMP=0x000000000002ced2
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3 windowLevel:(long long *)arg4;	// IMP=0x000000000002cebe
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;	// IMP=0x000000000002ce9d
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;	// IMP=0x000000000002ce88
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;	// IMP=0x000000000002cd4d
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x000000000002cce9
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;	// IMP=0x000000000002cc96
- (void)endPreviewPanelControl:(id)arg1;	// IMP=0x000000000002cbc2
- (void)beginPreviewPanelControl:(id)arg1;	// IMP=0x000000000002cb61
- (BOOL)acceptsPreviewPanelControl:(id)arg1;	// IMP=0x000000000002cb56
- (void)keyDown:(id)arg1;	// IMP=0x000000000002ca5f
- (void)quickLookWithEvent:(id)arg1;	// IMP=0x000000000002c978
- (BOOL)quickLookAttachmentControllers:(id)arg1;	// IMP=0x000000000002c612
- (void)_displayAlertForUndownloadedAttachments:(id)arg1;	// IMP=0x000000000002c1bb
- (void)mouseDragged:(id)arg1;	// IMP=0x000000000002b952
- (void)mouseExited:(id)arg1;	// IMP=0x000000000002b8f0
- (void)mouseMoved:(id)arg1;	// IMP=0x000000000002b88e
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;	// IMP=0x000000000002b1f2
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;	// IMP=0x000000000002b126
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;	// IMP=0x000000000002b10f
- (void)draggingEnded:(id)arg1;	// IMP=0x000000000002b0fa
- (unsigned long long)draggingUpdated:(id)arg1;	// IMP=0x000000000002afb0
- (unsigned long long)draggingEntered:(id)arg1;	// IMP=0x000000000002ae6a
- (BOOL)performDragOperation:(id)arg1;	// IMP=0x000000000002adca
- (void)mouseUp:(id)arg1;	// IMP=0x000000000002ad0c
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;	// IMP=0x000000000002ac85
- (BOOL)acceptsFirstMouse:(id)arg1;	// IMP=0x000000000002abfe
- (BOOL)_point:(struct CGPoint)arg1 inAttachment:(id)arg2;	// IMP=0x000000000002ab25
- (void)mouseDown:(id)arg1;	// IMP=0x000000000002a69a
- (id)printOperationWithPrintInfo:(id)arg1;	// IMP=0x000000000002a688
- (id)selectionAndClickInformationForClickAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000002a5e8
@property(readonly, copy, nonatomic) NSArray *selectedAttachmentControllers;
- (id)attachmentControllerForAttachmentInfo:(id)arg1;	// IMP=0x000000000002a1e8
- (id)selectionAndClickInformationFromSelectionContextDictionary:(id)arg1;	// IMP=0x000000000002991f
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000029886
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000029770
- (void)viewDidMoveToSuperview;	// IMP=0x000000000002972e
- (BOOL)autoscroll:(id)arg1;	// IMP=0x0000000000029630
- (void)updateLayer;	// IMP=0x0000000000029590
- (BOOL)resignFirstResponder;	// IMP=0x000000000002950c
- (BOOL)canBecomeKeyView;	// IMP=0x0000000000029504
- (id)defaultStringForToolTip:(long long)arg1 view:(id)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;	// IMP=0x0000000000029491
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;	// IMP=0x00000000000293f7
- (void)scrollWheel:(id)arg1;	// IMP=0x0000000000029385
- (id)supplementalTargetForAction:(SEL)arg1 sender:(id)arg2;	// IMP=0x00000000000292c7
- (void)awakeFromNib;	// IMP=0x000000000002921d
- (void)dealloc;	// IMP=0x00000000000291d4
- (void)_saveAttachmentToDownloadsFolder:(id)arg1;	// IMP=0x0000000000029106
- (void)quicklookAttachment:(id)arg1;	// IMP=0x000000000002905e
- (id)_clickedAttachmentControllerForUserData:(id)arg1;	// IMP=0x0000000000028ea3
- (id)_immediateActionAnimationControllerForHitTestResult:(id)arg1 withType:(long long)arg2 userData:(id)arg3;	// IMP=0x0000000000028d57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


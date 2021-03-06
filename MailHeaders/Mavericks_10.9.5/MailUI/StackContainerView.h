/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

@class MailStackViewController;

@interface StackContainerView : NSView
{
    MailStackViewController *_controller;
}

@property(nonatomic) MailStackViewController *controller; // @synthesize controller=_controller;
- (BOOL)transferSelectionToMailbox:(id)arg1 deleteOriginals:(BOOL)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)pasteboardChangedOwner:(id)arg1;
- (void)pasteboard:(id)arg1 provideDataForType:(id)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)mouseDragged:(id)arg1;
- (BOOL)_shouldDoSpecialDragAnimation;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)viewDidEndLiveResize;
- (BOOL)accessibilityIsIgnored;
- (void)mui_prepareToLayoutSynchronously:(id)arg1;
- (void)mui_performAnimation;
- (void)mui_prepareToAnimate:(id)arg1;

@end


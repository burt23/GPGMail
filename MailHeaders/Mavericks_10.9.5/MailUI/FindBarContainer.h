/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSView.h"

#import "NSTextFinderBarContainer.h"

@interface FindBarContainer : NSView <NSTextFinderBarContainer>
{
    NSView *_findBarView;
    BOOL _findBarVisible;
    NSView *_containerView;
}

- (void)updateLayer;
- (void)_layoutSubviews;
@property(getter=isFindBarVisible) BOOL findBarVisible;
@property(retain) NSView *findBarView;
- (id)contentView;
- (void)findBarViewDidChangeHeight;
- (BOOL)isFlipped;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;

@end


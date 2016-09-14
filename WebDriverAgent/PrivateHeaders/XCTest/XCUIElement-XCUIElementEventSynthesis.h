//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCTest/XCUIElement.h>

@interface XCUIElement (XCUIElementEventSynthesis)
- (void)rotate:(double)arg1 withVelocity:(double)arg2;
- (void)pinchWithScale:(double)arg1 velocity:(double)arg2;
- (void)typeText:(id)arg1;
- (void)swipeRight;
- (void)swipeLeft;
- (void)swipeDown;
- (void)swipeUp;
- (void)pressForDuration:(double)arg1 thenDragToElement:(id)arg2;
- (void)pressForDuration:(double)arg1;
- (void)tapWithNumberOfTaps:(unsigned long long)arg1 numberOfTouches:(unsigned long long)arg2;
- (void)twoFingerTap;
- (void)doubleTap;
- (void)tap;
- (struct CGPoint)_hitPointByAttemptingToScrollToVisibleSnapshot:(id)arg1;
- (void)_dispatchEvent:(id)arg1 block:(CDUnknownBlockType)arg2;
@end

//
//  SPTouch_Internal.h
//  Sparrow
//
//  Created by Daniel Sperl on 03.05.09.
//  Copyright 2011-2014 Gamua. All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the Simplified BSD License.
//

#import <Sparrow/SPTouch.h>

@interface SPTouch (Internal)

- (void)setTimestamp:(double)timestamp;
- (void)setGlobalX:(float)x;
- (void)setGlobalY:(float)y;
- (void)setPreviousGlobalX:(float)x;
- (void)setPreviousGlobalY:(float)y;
- (void)setTapCount:(int)tapCount;
- (void)setPhase:(SPTouchPhase)phase;
- (void)setTarget:(SPDisplayObject *)target;

+ (SPTouch *)touch;

@property (nonatomic, assign) size_t touchID;

@end

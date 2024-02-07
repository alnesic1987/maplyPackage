/*  MaplyPanDelegate.h
 *  WhirlyGlobeLib
 *
 *  Created by Steve Gifford on 1/10/12.
 *  Copyright 2011-2022 mousebird consulting
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#import <UIKit/UIKit.h>

// Custom pan gesture recognizer that plays well with scroll views.
@interface MinDelay2DPanGestureRecognizer : UIPanGestureRecognizer

- (void)forceEnd;

@end

@interface MaplyPanDelegate : NSObject <UIGestureRecognizerDelegate>

@property (nonatomic,weak) UIGestureRecognizer *gestureRecognizer;

@end
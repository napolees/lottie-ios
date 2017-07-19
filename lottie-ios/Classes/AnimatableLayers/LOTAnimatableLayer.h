//
//  LOTAnimatableLayer.h
//  LottieAnimator
//
//  Created by brandon_withrow on 7/21/16.
//  Copyright © 2016 Brandon Withrow. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

@interface LOTAnimatableLayer : CALayer

- (instancetype)initWithLayerDuration:(NSTimeInterval)duration startProgress:(NSTimeInterval)startProgress NS_DESIGNATED_INITIALIZER;

@property (nonatomic, readonly) NSTimeInterval layerDuration;
@property (nonatomic, readonly) NSTimeInterval startProgress;

@end

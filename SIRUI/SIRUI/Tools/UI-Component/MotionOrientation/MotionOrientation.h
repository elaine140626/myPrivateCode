//
//  MotionOrientation.h
//  SiRuiIOT
//
//  Created by SIRUI on 2017/8/6.
//
//

#import <CoreMotion/CoreMotion.h>
#import <CoreGraphics/CoreGraphics.h>

extern NSString *const MotionOrientationChangedNotification;
extern NSString *const MotionOrientationInterfaceOrientationChangedNotification;
extern NSString *const MotionOrientationAccelerometerUpdatedNotification; // this notification will be notified when the DEBUG flag is YES

extern NSString *const kMotionOrientationKey;
extern NSString *const kMotionOrientationDebugDataKey;

@interface MotionOrientation : NSObject

@property (readonly) UIInterfaceOrientation interfaceOrientation;
@property (readonly) UIDeviceOrientation deviceOrientation;
@property (readonly) CGAffineTransform affineTransform;

+ (void)initialize;
+ (MotionOrientation *)sharedInstance;

- (void)startAccelerometerUpdates;
- (void)stopAccelerometerUpdates;

@end

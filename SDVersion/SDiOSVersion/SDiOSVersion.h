//
//  SDiOSVersion.h
//  SDVersion
//
//  Copyright (c) 2016 Sebastian Dobrincu. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DeviceVersion){
    UnknownDevice         = 0,
    Simulator             = 1,
    
    iPhone4               = 3,
    iPhone4S              = 4,
    iPhone5               = 5,
    iPhone5C              = 6,
    iPhone5S              = 7,
    iPhone6               = 8,
    iPhone6Plus           = 9,
    iPhone6S              = 10,
    iPhone6SPlus          = 11,
    iPhone7               = 12,
    iPhone7Plus           = 13,
    iPhone8               = 14,
    iPhone8Plus           = 15,
    iPhoneX               = 16,
    iPhoneSE              = 17,
    iPhoneXS              = 18,
    iPhoneXR              = 19,
    iPhoneXSMax           = 20,
    iPhone11              = 21,
    iPhone11Pro           = 22,
    iPhone11ProMax        = 23,
    
    iPad1                 = 24,
    iPad2                 = 25,
    iPadMini              = 26,
    iPad3                 = 27,
    iPad4                 = 28,
    iPadAir               = 29,
    iPadMini2             = 30,
    iPadAir2              = 31,
    iPadMini3             = 32,
    iPadMini4             = 33,
    iPadPro12Dot9Inch     = 34,
    iPadPro9Dot7Inch      = 35,
    iPad5                 = 36,
    iPadPro12Dot9Inch2Gen = 37,
    iPadPro10Dot5Inch     = 38,
    
    iPodTouch1Gen         = 39,
    iPodTouch2Gen         = 40,
    iPodTouch3Gen         = 41,
    iPodTouch4Gen         = 42,
    iPodTouch5Gen         = 43,
    iPodTouch6Gen         = 44
};

typedef NS_ENUM(NSInteger, DeviceSize){
    UnknownSize     = 0,
    Screen3Dot5inch = 1,
    Screen4inch     = 2,
    Screen4Dot7inch = 3,
    Screen5Dot5inch = 4,
    Screen5Dot8inch = 5,
    Screen6Dot1inch = 6,
    Screen6Dot5inch = 7
};

@interface SDiOSVersion : NSObject

+ (DeviceVersion)deviceVersion;
+ (NSString *)deviceNameForVersion:(DeviceVersion)deviceVersion;
+ (DeviceSize)resolutionSize;
+ (DeviceSize)deviceSize;
+ (NSString *)deviceSizeName:(DeviceSize)deviceSize;
+ (NSString *)deviceNameString;
+ (BOOL)isZoomed;

+ (BOOL)versionEqualTo:(NSString *)version;
+ (BOOL)versionGreaterThan:(NSString *)version;
+ (BOOL)versionGreaterThanOrEqualTo:(NSString *)version;
+ (BOOL)versionLessThan:(NSString *)version;
+ (BOOL)versionLessThanOrEqualTo:(NSString *)version;

@end

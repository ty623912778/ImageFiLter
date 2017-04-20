//
//  UIColor+Extend.h
//  ImageFiLter
//
//  Created by mac on 2017/4/20.
//  Copyright © 2017年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extend)
+ (UIColor *)colorFromHexCode:(NSString *)hexString;
//将16进制转为 UIColor
@end

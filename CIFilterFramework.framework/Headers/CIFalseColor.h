//
//  CIFalseColor.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/9.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIFalseColor : NSObject

//Maps luminance to a color ramp of two colors.
//False color is often used to process astronomical and other scientific data, such as ultraviolet and x-ray images.

/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
 
 inputColor0
 A CIColor object whose display name is Color 1.
 
 inputColor1
 A CIColor object whose display name is Color 2.
 */


+ (UIImage *)inputImg:(UIImage *)image inputColor0:(UIColor *)inputColor0 inputColor1:(UIColor *)inputColor1;

@end

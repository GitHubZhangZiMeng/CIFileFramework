//
//  CIColorMonochrome.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/9.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIColorMonochrome : NSObject


//Remaps colors so they fall within shades of a single color.

/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
 
 inputColor
 A CIColor object whose attribute type is CIAttributeTypeOpaqueColor and whose display name is Color.
 
 inputIntensity
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Intensity.
 
 Default value: 1.00
 
*/

+ (UIImage *)inputImage:(UIImage *)inputimg inputColor:(UIColor *)inputColor inputIntensity:(NSNumber *)inputIntensity;

@end

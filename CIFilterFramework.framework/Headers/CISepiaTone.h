//
//  CISepiaTone.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/10.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CISepiaTone : NSObject

//Maps the colors of an image to various shades of brown.
/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
 
 inputIntensity
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Intensity.
 Default value: 1.00
 */

+ (UIImage *)inputImage:(UIImage *)inputimg inputIntensity:(NSNumber *)inputIntensity;

@end

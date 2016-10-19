//
//  CIHighlightShadowAdjust.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/12.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIHighlightShadowAdjust : NSObject

//Adjust the tonal mapping of an image while preserving spatial detail.
/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
 
 inputHighlightAmount
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Highlight Amount.
 Default value: 1.00
 
 inputShadowAmount
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Shadow Amount.
 */


+ (UIImage *)inputImage:(UIImage *)inputImage inputHighlightAmount:(NSNumber *)inputHighlightAmount inputShadowAmount:(NSNumber *)inputShadowAmount;

@end

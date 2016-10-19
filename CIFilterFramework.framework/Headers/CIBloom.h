//
//  CIBloom.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/10.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIBloom : NSObject

//Softens edges and applies a pleasant glow to an image.
/*
Parameters

inputImage
A CIImage object whose display name is Image.

inputRadius
An NSNumber object whose attribute type is CIAttributeTypeDistance and whose display name is Radius.

Default value: 10.00

inputIntensity
An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Intensity.

Default value: 0.5
*/

+ (UIImage *)inputImage:(UIImage *)inputImage inputRadius:(NSNumber *)inputRadius inputIntensity:(NSNumber *)inputIntensity;

@end

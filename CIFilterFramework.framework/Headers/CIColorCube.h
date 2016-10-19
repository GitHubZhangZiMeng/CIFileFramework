//
//  CIColorCube.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/8.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIColorCube : NSObject

//Uses a three-dimensional color table to transform the source image pixels.
/*
 Parameters
 
 inputImage
 The image to be transformed. (A CIImage object whose display name is Image.)
 
 inputCubeDimension
 The length, in texels, of each side of the cube texture. (An NSNumber object whose attribute type is CIAttributeTypeCount and whose display name is Cube Dimension.)
 
 Default value: 2.00
 
 inputCubeData
 The cube texture data to use as a color lookup table. (An NSData object whose display name is Cube Data.)
 
 
 iOS 6.0 and later
 */

// inputimg 传人图片
// red green blue transparency 值范围 0-1 不能为null
+ (UIImage *)inputImage:(UIImage *)inputimg withRed:(float)red withGreen:(float)green withBlue:(float)blue withTransparency:(float)transparency;

@end

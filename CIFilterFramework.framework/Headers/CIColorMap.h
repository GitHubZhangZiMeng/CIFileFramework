//
//  CIColorMap.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/9.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIColorMap : NSObject

//Performs a nonlinear transformation of source color values using mapping values provided in a table.
/*
Parameters
inputImage (notnull)

 A CIImage object whose display name is Image.
 
inputGradientImage (notnull)

 A CIImage object whose attribute type is CIAttributeTypeGradient and whose display name is Gradient Image.
 
*/

+ (UIImage *)inputImage:(UIImage *)inputimg inputGradientImage:(UIImage *)inputGradientImage;
@end

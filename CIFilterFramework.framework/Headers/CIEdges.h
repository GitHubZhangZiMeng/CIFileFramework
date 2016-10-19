//
//  CIEdges.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/11.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIEdges : NSObject

//in iOS 9 and later.
//Finds all edges in an image and displays them in color.
/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
 
 inputIntensity
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Intensity.
 
 Default value: 1.00
 */

+ (UIImage *)inputImage:(UIImage *)inputImage inputIntensity:(NSNumber *)inputIntensity;

@end

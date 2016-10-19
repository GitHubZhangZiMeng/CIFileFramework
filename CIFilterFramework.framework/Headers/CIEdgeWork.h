//
//  CIEdgeWork.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/11.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIEdgeWork : NSObject

// iOS 9 and later.

//Produces a stylized black-and-white rendition of an image that looks similar to a woodblock cutout.
/*
 Parameters
 
 
 inputImage
 A CIImage object whose display name is Image.
 
 
 inputRadius
 An NSNumber object whose attribute type is CIAttributeTypeDistance and whose display name is Radius.
 Default value: 3.00
 */


+ (UIImage *)inputImage:(UIImage *)inputImage inputRadius:(NSNumber *)inputRadius;

@end

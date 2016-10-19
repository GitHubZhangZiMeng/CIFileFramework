//
//  CIComicEffect.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/11.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIComicEffect : NSObject

//Simulates a comic book drawing by outlining edges and applying a color halftone effect.

/*
 inputImage
 A CIImage object whose display name is Image.
*/

+ (UIImage *)inputImage:(UIImage *)inputImage;

@end

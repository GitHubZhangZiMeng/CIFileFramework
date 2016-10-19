//
//  CIPhotoEffectInstant.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/10.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIPhotoEffectInstant : NSObject

//Applies a preconfigured set of effects that imitate vintage photography film with distorted colors.

/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
*/

+ (UIImage *)inputImage:(UIImage *)inputimg;

@end

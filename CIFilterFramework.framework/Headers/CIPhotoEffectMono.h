//
//  CIPhotoEffectMono.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/10.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIPhotoEffectMono : NSObject

//Applies a preconfigured set of effects that imitate black-and-white photography film with low contrast.

/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.
*/

+ (UIImage *)inputImage:(UIImage *)inputimg;

@end

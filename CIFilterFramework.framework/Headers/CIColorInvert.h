//
//  CIColorInvert.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/9.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface CIColorInvert : NSObject

//Inverts the colors in an image.


/*
  Parameters
 
  inputImage
  A CIImage object whose display name is Image.
*/

+ (UIImage *)inputImage:(UIImage *)inputimg;

@end

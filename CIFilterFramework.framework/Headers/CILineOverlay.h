//
//  CILineOverlay.h
//  ImageFilterCIFilter
//
//  Created by zzm on 16/10/19.
//  Copyright © 2016年 zzm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CILineOverlay : NSObject

//Creates a sketch that outlines the edges of an image in black.

/*
 Parameters
 
 inputImage
 A CIImage object whose display name is Image.

 inputNRNoiseLevel
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is NR Noise Level.
 Default value: 0.07
 
 inputNRSharpness
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is NR Sharpness.
 Default value: 0.71

 inputEdgeIntensity
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Edge Intensity.
 Default value: 1.00

 inputThreshold
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Threshold.
 Default value: 0.10 Minimum: 0.00 Maximum: 0.00 Slider minimum: 0.00 Slider maximum: 1.00 Identity: 0.00

 inputContrast
 An NSNumber object whose attribute type is CIAttributeTypeScalar and whose display name is Contrast.
 Default value: 50.00

 iOS 9 and later.
*/

+(UIImage *)inputImage:(UIImage *)inputImage inputNRNoiseLevel:(NSNumber *)inputNRNoiseLevel inputNRSharpness:(NSNumber *)inputNRSharpness inputEdgeIntensity:(NSNumber *)inputEdgeIntensity inputThreshold:(NSNumber *)inputThreshold inputContrast:(NSNumber *)inputContrast;

@end

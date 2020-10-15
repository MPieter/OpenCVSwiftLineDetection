//
//  CVWrapper.h
//  OpenCVSwiftLineDetection
//
//  Created by Pieter Meiresone on 09/10/2020.
//  Copyright © 2020 Pieter Meiresone. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
@interface CVWrapper : NSObject

+ (UIImage*) processImageWithOpenCV: (UIImage*) inputImage;

@end
NS_ASSUME_NONNULL_END

//
//  UIColor+Benihime.h
//  Benihime
//
//  Created by Shiki on 11/30/11.
//

#import <UIKit/UIKit.h>

@interface UIColor (Benihime)

// Convert an RGB value (e.g. 0xFF00FF) to UIColor
// From http://stackoverflow.com/a/1243280/246142
+ (UIColor *) colorFromRGB:(NSInteger)rgbValue;

@end

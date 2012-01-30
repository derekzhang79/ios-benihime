//
//  UIAlertView+Benihime.h
//  Benihime
//
//  Created by Shiki on 12/15/11.
//

#import <UIKit/UIKit.h>

@interface UIAlertView (Benihime)

+ (UIAlertView *) singleButtonAlertView:(NSString *)title message:(NSString *)message 
                            buttonTitle:(NSString *)buttonTitle;

@end

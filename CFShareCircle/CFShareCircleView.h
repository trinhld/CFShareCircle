//
//  CFShareCircleView.h
//  CFShareCircle
//
//  Created by Camden on 12/18/12.
//  Copyright (c) 2012 Camden. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import <CoreImage/CoreImage.h>

extern const NSString *CFSharerFacebook;
extern const NSString *CFSharerTwitter;
extern const NSString *CFSharerDropbox;
extern const NSString *CFSharerGoogleDrive;
extern const NSString *CFSharerPinterest;
extern const NSString *CFSharerEvernote;

@class CFShareCircleView;

@protocol CFShareCircleViewDelegate
- (void)shareCircleView:(CFShareCircleView *)aShareCircleView didSelectIndex:(int)index;
@end

@interface CFShareCircleView : UIView

@property (assign) id <CFShareCircleViewDelegate> delegate;

/** 
 Initialize the share circle with a custom list of image file names. NOTE: These images must be resources that are referenced in your project.
 
 @param array of sharer names that are going to be set for the share circle.
 */
- (id)initWithFrame:(CGRect) frame sharers:(NSArray *)sharers;

/**
 Animates the share circle into view. 
 */
- (void)animateIn;

/**
 Animates the share circle out of view.
 */
- (void)animateOut;

@end

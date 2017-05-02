#import <UIKit/UIKit.h>
#import "DCTransitionView.h"

@implementation DCTransitionView

- (void)setFromView:(UIView *)view {
	_fromView = view;

	[_fromView setOpaque:YES];
	[_fromView setCenter:[self center]];

	[self addSubview:_fromView];
}

- (void)setToView:(UIView *)view {
	_toView = view;

	[_toView setOpaque:YES];
	[_toView setHidden:YES];
	[_toView setCenter:[self center]];

	[self addSubview:_toView];
}

- (void)animateWithDuration:(CFTimeInterval)duration {
	
}

@end

#import "headers.h"

#import "DCTypes.h"
#import "DCTransitionDelegate.h"
#import "DCTransitionView.h"

@interface DCTransitionController : NSObject {
	DCTransitionView *_transitionView;
}

@property (nonatomic, assign) id<DCTransitionDelegate> delegate;
@property (strong, nonatomic) SBApplication *application;
@property (strong, nonatomic, readonly) UIView *view;
@property (nonatomic, assign) DCTransitionMode mode;
@property (strong, nonatomic) UIView *fromView;
@property (strong, nonatomic) UIView *toView;

- (void)beginTransition:(NSInteger)transition;
- (void)endTransition;

@end

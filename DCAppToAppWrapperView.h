#import "headers.h"
#import "DCTransitionDelegate.h"

@interface DCAppToAppWrapperView : SBAppToAppTransitionView <DCTransitionDelegate>
@property(nonatomic, assign) DCTransition transition;
@end

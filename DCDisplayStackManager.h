#import <Foundation/Foundation.h>
#import "headers.h"

@interface DCDisplayStackManager : NSObject

+ (DCDisplayStackManager *)sharedManager;
- (SBDisplayStack *)preActivateDisplayStack;
- (SBDisplayStack *)activeDisplayStack;
- (SBDisplayStack *)suspendingDisplayStack;
- (SBDisplayStack *)suspendedEventOnlyDisplayStack;

@end

#import "DCDisplayStackManager.h"

static NSMutableArray *displayStacks;

%hook SBDisplayStack

- (instancetype)init {
	self = %orig;
	if (self) {
		[displayStacks addObject:self];
	}

	return self;
}

%end

%ctor {
	displayStacks = [[NSMutableArray alloc] init];
}

@implementation DCDisplayStackManager

+ (instancetype)sharedManager {
	static DCDisplayStackManager *sharedInstance = nil;
	static dispatch_once_t onceToken;
	dispatch_once(&onceToken, ^{
		sharedInstance = [self new];
	});
	return sharedInstance;
}

- (SBDisplayStack *)preActivateDisplayStack {
	return [displayStacks objectAtIndex:0];
}

- (SBDisplayStack *)activeDisplayStack {
	return [displayStacks objectAtIndex:1];
}

- (SBDisplayStack *)suspendingDisplayStack {
	return [displayStacks objectAtIndex:2];
}

- (SBDisplayStack *)suspendedEventOnlyDisplayStack {
	return [displayStacks objectAtIndex:3];
}

@end

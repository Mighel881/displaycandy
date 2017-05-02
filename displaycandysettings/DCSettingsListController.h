#import <Foundation/Foundation.h>
#import <Preferences/PSListController.h>
#import <Preferences/PSSpecifier.h>

@interface DCSettingsListController : PSListController {
	PSSpecifier *_launchAnimation;
	PSSpecifier *_launchAnimationDirection;
	PSSpecifier *_launchAnimationSuckPoint;

	PSSpecifier *_suspendAnimation;
	PSSpecifier *_suspendAnimationDirection;
	PSSpecifier *_suspendAnimationSuckPoint;

	PSSpecifier *_switchAnimation;
	PSSpecifier *_switchAnimationDirection;
}

@end

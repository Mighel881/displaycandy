#ifndef DC_TYPES_H
#define DC_TYPES_H

typedef NS_ENUM(NSInteger, DCTransition) {
		DCTransitionDefault,
		DCTransitionCube,
		DCTransitionFlip,
		DCTransitionPageCurl,
		DCTransitionPageUncurl,
		DCTransitionRipple,
		DCTransitionSuck,
		DCTransitionTVTube,
		DCTransitionFade,
		DCTransitionCover,
		DCTransitionReveal,
		DCTransitionPush,
		DCTransitionCameraIris,
		DCTransitionSwing,
		DCTransitionZoomFromIcon,
		DCTransitionRandom = 100
};

typedef NS_ENUM(NSInteger, DCTransitionMode) {
		DCTransitionModeLaunch,
		DCTransitionModeSuspend,
		DCTransitionModeSwitch
};

typedef NS_ENUM(NSInteger, DCTransitionDirection) {
		DCTransitionDirectionLeft,
		DCTransitionDirectionRight,
		DCTransitionDirectionUp,
		DCTransitionDirectionDown
};

#endif // DC_TYPES_H

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIScreenEdgePanRecognizerDelegate>, UIDelayedAction, _UIScreenEdgePanRecognizerSettings;

@interface _UIScreenEdgePanRecognizer : NSObject <_UISettingsKeyObserver> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGPoint { 
        float x; 
        float y; 
    <_UIScreenEdgePanRecognizerDelegate> *_delegate;
    float _gestureRestrictionFactor;
    BOOL _hasDoneInitialBackProjectionTest;
    BOOL _hasRecordedData;
    int _initialInterfaceOrientation;
    } _initialTouchLocation;
    double _initialTouchTimestamp;
    } _lastTouchLocation;
    double _lastTouchTimestamp;
    UIDelayedAction *_recognitionTimer;
    unsigned int _recognizedRegion;
    BOOL _requiresFlatThumb;
    BOOL _requiresLongPress;
    } _screenBounds;
    _UIScreenEdgePanRecognizerSettings *_settings;
    int _state;
    unsigned int _targetEdges;
    unsigned int _touchedRegion;
    int _type;
    BOOL _useGrapeFlags;
}

@property <_UIScreenEdgePanRecognizerDelegate> * delegate;
@property(readonly) unsigned int recognizedRegion;
@property BOOL requiresFlatThumb;
@property(getter=isRequiringLongPress,readonly) BOOL requiringLongPress;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } screenBounds;
@property(retain) _UIScreenEdgePanRecognizerSettings * settings;
@property(readonly) int state;
@property unsigned int targetEdges;

+ (BOOL)_edgeSwipeNavigationGestureEnabled;

- (void)_createOrDestoryAnalysisWindowIfNeeded;
- (void)_idleTimerElapsed:(id)arg1;
- (void)_incorporateIncrementalSampleAtLocation:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4;
- (void)_incorporateInitialTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4;
- (void)_longPressTimerElapsed:(id)arg1;
- (void)_setState:(int)arg1;
- (unsigned int)_targetEdges;
- (int)_type;
- (void)dealloc;
- (id)delegate;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { float x1; float x2; })arg1 timestamp:(double)arg2 modifier:(int)arg3 interfaceOrientation:(int)arg4;
- (id)initWithType:(int)arg1;
- (BOOL)isRequiringLongPress;
- (unsigned int)recognizedRegion;
- (BOOL)requiresFlatThumb;
- (void)reset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenBounds;
- (void)setDelegate:(id)arg1;
- (void)setRequiresFlatThumb:(BOOL)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSettings:(id)arg1;
- (void)setTargetEdges:(unsigned int)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)settings;
- (int)state;
- (unsigned int)targetEdges;

@end
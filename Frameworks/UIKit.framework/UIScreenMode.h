/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */



@interface UIScreenMode : NSObject 
{
    id _mode;
}

@property(readonly) CGSize size;
@property(readonly) float pixelAspectRatio;

+ (id)screenModeForDisplayMode:(id)arg1;

- (id)initWithDisplayMode:(id)arg1;
- (float)pixelAspectRatio;
- (BOOL)_isNTSCOrPAL;
- (id)_displayMode;
- (struct CGSize { float x1; float x2; })size;
- (id)description;

@end
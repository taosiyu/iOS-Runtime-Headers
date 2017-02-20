/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryAnalogFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate> {
    NTKVictoryAnalogBackgroundView * _backgroundView;
    NTKUtilityComplicationFactory * _utilityComplicationFactory;
}

+ (id)_swatchForEditModeDependsOnOptions:(int)arg1;
+ (id)_swatchImageForColorOption:(id)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_applyColor:(id)arg1 toComplicationView:(id)arg2;
- (void)_applyComplicationViewColor:(id)arg1;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (float)_backgroundAlphaForEditMode:(int)arg1;
- (float)_complicationAlphaForEditMode:(int)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (struct CGPoint { float x1; float x2; })_contentCenterOffset;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (float)_handsAlphaForEditMode:(int)arg1;
- (float)_keylineEdgeGapForState:(int)arg1;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (float)_keylinePaddingForState:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (void)_layoutTimeTravelCaptionView:(id)arg1;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (float)_timeTravelCaptionLabelMaxWidth;
- (struct CGPoint { float x1; float x2; })_timeTravelStatusModuleCenter;
- (void)_unloadSnapshotContentViews;
- (int)_utilitySlotForSlot:(id)arg1;
- (float)_verticalPaddingForStatusBar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)logoTappedFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
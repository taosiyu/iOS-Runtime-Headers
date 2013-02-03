/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class PCPersistentTimer;

@interface PHMMultiStageGrowthAlgorithm : PHMGrowthAlgorithm {
    NSInteger _currentInterval;
    NSInteger _growthStage;
    NSInteger _highWatermark;
    NSInteger _initialGrowthStageHighWatermark;
    NSInteger _initialGrowthStageLastAttempt;
    BOOL _leaveSteadyState;
    PCPersistentTimer *_steadyStateRecalibrationTimer;
}

- (void)_handleBackoffAction:(NSInteger)arg1;
- (void)_handleInitialGrowthAction:(NSInteger)arg1;
- (void)_handleRefinedGrowthAction:(NSInteger)arg1;
- (void)_handleSteadyStateAction:(NSInteger)arg1;
- (void)_leaveSteadyState:(id)arg1;
- (void)_logState;
- (void)_resetAlgorithm;
- (void)_resetSteadyStateTimer;
- (void)_setCurrentInterval:(NSInteger)arg1;
- (NSInteger)_steadyStateTimeout;
- (id)_stringForAction:(NSInteger)arg1;
- (id)_stringForStage:(NSInteger)arg1;
- (NSInteger)calculateWithAction:(NSInteger)arg1;
- (NSInteger)currentInterval;
- (void)dealloc;
- (id)initWithHBInterval:(NSInteger)arg1;
- (BOOL)isCalibrating;

@end
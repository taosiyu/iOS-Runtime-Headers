/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspector, NSURL, NSObject<OS_dispatch_queue>, NSDictionary, NSMutableArray, AVAssetCache;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {
    NSURL *_URL;
    AVAssetCache *_assetCache;
    AVAssetInspector *_assetInspector;
    struct OpaqueFigSemaphore { } *_cameraRollValidationSemaphor;
    BOOL _compatibleWithSavedPhotosAlbum;
    long _compatibleWithSavedPhotosAlbumResult;
    int _compatibleWithSavedPhotosAlbumStatus;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSURL *_downloadDestinationURL;
    struct OpaqueFigAsset { } *_figAsset;
    long _figAssetCreationStatus;
    struct OpaqueFigFormatReader { } *_formatReader;
    BOOL _formatReaderObtained;
    NSMutableArray *_loadingBatches;
    BOOL _loadingCanceled;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    struct OpaqueFigSemaphore { } *_playabilityValidationSemaphore;
    BOOL _playable;
    long _playableResult;
    int _playableStatus;
    unsigned int _referenceRestrictions;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    NSDictionary *_validationPlist;
}

@property(readonly) NSDictionary * validationPlist;

+ (id)_figAssetPropertiesForKeys;
+ (id)_figAssetTrackPropertiesForKeys;

- (id)URL;
- (void)_addFigAssetNotifications;
- (struct OpaqueFigSemaphore { }*)_cameraRollValidationSemaphor;
- (id)_completionHandlerQueue;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_initWithDownloadToken:(unsigned long long)arg1;
- (id)_initWithFigAsset:(struct OpaqueFigAsset { }*)arg1 options:(id)arg2;
- (BOOL)_isStreaming;
- (int)_loadStatusForProperty:(id)arg1 returningError:(int*)arg2;
- (id)_loadingBatches;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (struct OpaqueFigSemaphore { }*)_playabilityValidationSemaphore;
- (void)_removeFigAssetNotifications;
- (id)assetCache;
- (id)assetInspector;
- (void)cancelLoading;
- (id)chapterGroupInfo;
- (void)dealloc;
- (id)downloadDestinationURL;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)finalize;
- (BOOL)hasProtectedContent;
- (unsigned int)hash;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)isReadable;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(id)arg3;
- (id)lyrics;
- (unsigned int)referenceRestrictions;
- (id)resolvedURL;
- (void)setIsCompatibleWithSavedPhotosAlbum:(BOOL)arg1 result:(long)arg2;
- (void)setIsPlayable:(BOOL)arg1 result:(long)arg2;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)validationPlist;

@end
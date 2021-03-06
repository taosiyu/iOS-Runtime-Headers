/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectChangeDetails : NSObject {
    BOOL  _assetCollectionTitlePropertiesChanged;
    BOOL  _assetContentChanged;
    PHObject * _objectAfterChanges;
    PHObject * _objectBeforeChanges;
}

@property (nonatomic, readonly) BOOL assetCollectionTitlePropertiesChanged;
@property (readonly) BOOL assetContentChanged;
@property (readonly) PHObject *objectAfterChanges;
@property (readonly) PHObject *objectBeforeChanges;
@property (readonly) BOOL objectWasDeleted;

- (void).cxx_destruct;
- (void)_calculateDiffs;
- (BOOL)assetCollectionTitlePropertiesChanged;
- (BOOL)assetContentChanged;
- (id)description;
- (id)initWithPHObject:(id)arg1;
- (id)objectAfterChanges;
- (id)objectBeforeChanges;
- (BOOL)objectWasDeleted;

@end

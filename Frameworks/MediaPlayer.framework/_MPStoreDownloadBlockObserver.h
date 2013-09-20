/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPStoreDownload;

@interface _MPStoreDownloadBlockObserver : NSObject <MPStoreDownloadManagerObserver> {
    id _didFinishDownloadHandler;
    id _didFinishPurchaseHandler;
    MPStoreDownload *_download;
}

@property(copy) id didFinishDownloadHandler;
@property(copy) id didFinishPurchaseHandler;
@property(readonly) MPStoreDownload * download;

- (void).cxx_destruct;
- (id)didFinishDownloadHandler;
- (id)didFinishPurchaseHandler;
- (id)download;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (id)initWithDownload:(id)arg1;
- (void)setDidFinishDownloadHandler:(id)arg1;
- (void)setDidFinishPurchaseHandler:(id)arg1;

@end
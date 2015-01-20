/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CPLEngineTransportTask>, CPLResource, NSString;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {
    id _cancelHandler;
    NSString *_clientBundleID;
    CPLResource *_cloudResource;
    id _completionHandler;
    id _didStartHandler;
    id _launchHandler;
    id _progressHandler;
    unsigned long long _taskIdentifierForQueue;
    <CPLEngineTransportTask> *_transportTask;
    bool_backgroundTask;
}

@property(getter=isBackgroundTask) bool backgroundTask;
@property(readonly) id cancelHandler;
@property(retain) NSString * clientBundleID;
@property(retain) CPLResource * cloudResource;
@property(readonly) id completionHandler;
@property(readonly) id didStartHandler;
@property(readonly) id launchHandler;
@property(readonly) id progressHandler;
@property unsigned long long taskIdentifierForQueue;
@property(retain) <CPLEngineTransportTask> * transportTask;

- (void).cxx_destruct;
- (id)cancelHandler;
- (void)cancelTask;
- (id)clientBundleID;
- (id)cloudResource;
- (id)completionHandler;
- (id)didStartHandler;
- (id)initWithLaunchHandler:(id)arg1 cancelHandler:(id)arg2 didStartHandler:(id)arg3 progressHandler:(id)arg4 completionHandler:(id)arg5;
- (bool)isBackgroundTask;
- (void)launch;
- (id)launchHandler;
- (id)progressHandler;
- (void)setBackgroundTask:(bool)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCloudResource:(id)arg1;
- (void)setTaskIdentifierForQueue:(unsigned long long)arg1;
- (void)setTransportTask:(id)arg1;
- (unsigned long long)taskIdentifierForQueue;
- (id)transportTask;

@end
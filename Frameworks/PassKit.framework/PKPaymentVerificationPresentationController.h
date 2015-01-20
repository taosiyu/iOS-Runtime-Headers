/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPaymentVerificationPresentationDelegate>, NSNumber, NSString, PKPassView, PKPaymentPass, PKVerificationRequestRecord;

@interface PKPaymentVerificationPresentationController : NSObject <SKStoreProductViewControllerDelegate> {
    <PKPaymentVerificationPresentationDelegate> *_delegate;
    NSNumber *_inStoreBankAppStoreID;
    NSString *_inStoreBankAppTitle;
    NSString *_installedBankAppBundleID;
    NSString *_installedBankAppTitle;
    PKPaymentPass *_pass;
    PKPassView *_passView;
    PKVerificationRequestRecord *_requestRecord;
    bool_bankAppNotFound;
}

@property(readonly) NSString * alternateMethodButtonTitle;
@property(readonly) NSString * completeVerificationButtonTitle;
@property(copy,readonly) NSString * debugDescription;
@property <PKPaymentVerificationPresentationDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSString * verificationBodyString;
@property(readonly) NSString * verificationTitleString;

- (id)_bankAppName;
- (id)_bankAppStoreIDs;
- (unsigned long long)_channelType;
- (void)_completeVerificationUsingBankApp;
- (void)_completeVerificationUsingCodeEntry;
- (void)_completeVerificationUsingOutboundCall;
- (void)_didChangePresentation;
- (bool)_isBankAppInstalled;
- (void)_launchBankApp;
- (id)_outboundCallPhoneNumber;
- (void)_performStoreLookupForBankApp;
- (id)_textMessageFormattedPhoneNumber:(id)arg1;
- (id)_voiceCallFormattedPhoneNumber:(id)arg1;
- (id)alternateMethodButtonTitle;
- (void)bodyLabelPressed:(id)arg1;
- (void)completeVerification:(id)arg1;
- (id)completeVerificationButtonTitle;
- (void)dealloc;
- (id)delegate;
- (id)initWithPaymentPass:(id)arg1 passView:(id)arg2 delegate:(id)arg3;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)selectOtherVerificationMethod:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequestRecord:(id)arg1;
- (void)sharedPaymentServiceChanged:(id)arg1;
- (id)verificationBodyString;
- (id)verificationTitleString;

@end
/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;



@interface GKGetColorThemeDataRequest : GKDataRequest 
{
    NSDictionary *_themesOnServer;
}

@property(readonly) NSDictionary *themesOnServer;


- (id)key;
- (id)cacheKey;
- (id)request;
- (void)dealloc;
- (id)themesOnServer;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSString, SGIdentityKey;

@interface SGContactDetailKey : NSObject <SGEntityKey> {
    SGIdentityKey *_identityKey;
    NSString *_label;
    NSString *_value;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SGIdentityKey * identityKey;
@property(readonly) NSString * label;
@property(readonly) Class superclass;
@property(readonly) NSString * value;

+ (bool)isSupportedEntityType:(long long)arg1;
+ (id)prefixForForIdentityKey:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identityKey;
- (id)initWithIdentityKey:(id)arg1 label:(id)arg2 normalizedValue:(id)arg3;
- (id)initWithSerialized:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactDetailKey:(id)arg1;
- (id)label;
- (id)serialize;
- (id)value;

@end
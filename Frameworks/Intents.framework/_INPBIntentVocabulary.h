/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentVocabulary : PBCodable <NSCopying> {
    NSMutableArray * _intentSlotVocabularyPolicies;
    NSMutableArray * _intentTypePhrases;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *intentSlotVocabularyPolicies;
@property (nonatomic, retain) NSMutableArray *intentTypePhrases;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)intentSlotVocabularyPoliciesType;
+ (Class)intentTypePhrasesType;

- (void).cxx_destruct;
- (void)addIntentSlotVocabularyPolicies:(id)arg1;
- (void)addIntentTypePhrases:(id)arg1;
- (void)clearIntentSlotVocabularyPolicies;
- (void)clearIntentTypePhrases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (id)intentSlotVocabularyPolicies;
- (id)intentSlotVocabularyPoliciesAtIndex:(unsigned int)arg1;
- (unsigned int)intentSlotVocabularyPoliciesCount;
- (id)intentTypePhrases;
- (id)intentTypePhrasesAtIndex:(unsigned int)arg1;
- (unsigned int)intentTypePhrasesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIntentSlotVocabularyPolicies:(id)arg1;
- (void)setIntentTypePhrases:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
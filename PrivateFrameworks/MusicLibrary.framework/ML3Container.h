/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */



@interface ML3Container : ML3Entity 
{
}

@property(readonly) ML3Predicate *staticPredicate;
@property(readonly) ML3Predicate *dynamicPredicate;
@property(getter=isLimitedByCount,readonly) BOOL limitedByCount;
@property(getter=isLimitOrderingDescending,readonly) BOOL limitOrderingDescending;
@property(readonly) NSString *limitingProperty;
@property(readonly) NSArray *limitOrderingDirectionality;
@property(readonly) NSArray *limitOrderingProperties;
@property(readonly) long long limitValue;

+ (void)initialize;
+ (BOOL)hasCriterionInCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 forITDBTrackField:(NSInteger)arg2;
+ (id)predicateForCriteriaList:(struct OpaqueSearchCriteriaList { }*)arg1 dynamicCriteria:(BOOL)arg2;
+ (void)populateStaticItemsOfDynamicContainersOnHandle:(struct sqlite3 { }*)arg1;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (void)populateDynamicContainersWithTrackPersistentID:(id)arg1 inLibrary:(id)arg2;
+ (id)nextFilepathForPlaylistType:(NSInteger)arg1 withPersistentID:(unsigned long long)arg2 inLibrary:(id)arg3;
+ (id)databaseTable;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)extraTablesToDelete;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)defaultOrderingProperties;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;

- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (struct OpaqueSearchCriteriaList { }*)importedCriteriaList;
- (id)staticPredicate;
- (id)dynamicPredicate;
- (BOOL)isLimitedByCount;
- (BOOL)_isDescendingForTrackOrderProperty:(id)arg1 reverseOrderProperty:(id)arg2;
- (BOOL)isLimitOrderingDescending;
- (BOOL)isCustomContainerOrderingDescending;
- (id)limitingProperty;
- (id)limitOrderingProperties;
- (id)limitOrderingDirectionality;
- (long long)limitValue;
- (void)getDisplayOrderingProperties:(id*)arg1 isDescending:(BOOL*)arg2;
- (void)setNeedsSave;
- (BOOL)addTrackWithPersistentID:(long long)arg1 insertedPhysicalOrderOut:(long long*)arg2 fullReorderOccurredOut:(BOOL*)arg3;
- (BOOL)insertTrackWithPersistentID:(long long)arg1 afterPhysicalOrder:(long long)arg2;
- (long long)nextPhysicalOrderAfterPhysicalOrder:(long long)arg1;
- (BOOL)insertTrackWithPersistentID:(long long)arg1 afterPhysicalOrder:(long long)arg2 insertedPhysicalOrderOut:(long long*)arg3 fullReorderOccurredOut:(BOOL*)arg4;
- (BOOL)insertTracksWithPersistentIDs:(long long*)arg1 count:(NSUInteger)arg2 afterPhysicalOrder:(long long)arg3 insertedPhysicalOrdersOut:(long long*)arg4 fullReorderOccurredOut:(BOOL*)arg5;
- (BOOL)_computeBeginPhysicalOrder:(long long*)arg1 andIncrement:(long long*)arg2 forCount:(NSUInteger)arg3 afterPhysicalOrder:(long long)arg4 forceReorder:(BOOL)arg5;
- (BOOL)_insertTracksWithPersistentIDs:(long long*)arg1 count:(NSUInteger)arg2 afterPhysicalOrder:(long long)arg3 insertedPhysicalOrdersOut:(long long*)arg4 fullReorderOccurredOut:(BOOL*)arg5 forceReorder:(BOOL)arg6;
- (BOOL)_removeTrackAtPhysicalOrderNoSave:(long long)arg1;
- (void)removeTrackAtPhysicalOrder:(long long)arg1;
- (BOOL)moveTrackFromPhysicalOrder:(long long)arg1 toAfterPhysicalOrder:(long long)arg2;
- (BOOL)moveTrackFromPhysicalOrder:(long long)arg1 toAfterPhysicalOrder:(long long)arg2 insertedPhysicalOrderOut:(long long*)arg3 fullReorderOccurredOut:(BOOL*)arg4;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2;
- (BOOL)deleteFromLibrary;
- (id)populateSQLWithStaticTrackPersistentID:(id)arg1;
- (void)bindPopulateStatement:(struct sqlite3_stmt { }*)arg1 withStaticTrackPersistentID:(id)arg2;
- (void)removeAllTracks;
- (BOOL)addTrackWithPersistentID:(long long)arg1;

@end
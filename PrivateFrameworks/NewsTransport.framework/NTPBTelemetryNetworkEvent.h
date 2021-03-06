/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTelemetryNetworkEvent : PBCodable <NSCopying> {
    int  _cacheState;
    long long  _connectDuration;
    long long  _dnsDuration;
    long long  _errorCode;
    struct { 
        unsigned int connectDuration : 1; 
        unsigned int dnsDuration : 1; 
        unsigned int errorCode : 1; 
        unsigned int httpStatusCode : 1; 
        unsigned int requestDuration : 1; 
        unsigned int responseDuration : 1; 
        unsigned int responseSize : 1; 
        unsigned int startTime : 1; 
        unsigned int cacheState : 1; 
    }  _has;
    long long  _httpStatusCode;
    long long  _requestDuration;
    long long  _responseDuration;
    long long  _responseSize;
    long long  _startTime;
}

@property (nonatomic) int cacheState;
@property (nonatomic) long long connectDuration;
@property (nonatomic) long long dnsDuration;
@property (nonatomic) long long errorCode;
@property (nonatomic) BOOL hasCacheState;
@property (nonatomic) BOOL hasConnectDuration;
@property (nonatomic) BOOL hasDnsDuration;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasHttpStatusCode;
@property (nonatomic) BOOL hasRequestDuration;
@property (nonatomic) BOOL hasResponseDuration;
@property (nonatomic) BOOL hasResponseSize;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long httpStatusCode;
@property (nonatomic) long long requestDuration;
@property (nonatomic) long long responseDuration;
@property (nonatomic) long long responseSize;
@property (nonatomic) long long startTime;

- (int)cacheState;
- (long long)connectDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)dnsDuration;
- (long long)errorCode;
- (BOOL)hasCacheState;
- (BOOL)hasConnectDuration;
- (BOOL)hasDnsDuration;
- (BOOL)hasErrorCode;
- (BOOL)hasHttpStatusCode;
- (BOOL)hasRequestDuration;
- (BOOL)hasResponseDuration;
- (BOOL)hasResponseSize;
- (BOOL)hasStartTime;
- (unsigned int)hash;
- (long long)httpStatusCode;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (long long)requestDuration;
- (long long)responseDuration;
- (long long)responseSize;
- (void)setCacheState:(int)arg1;
- (void)setConnectDuration:(long long)arg1;
- (void)setDnsDuration:(long long)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setHasCacheState:(BOOL)arg1;
- (void)setHasConnectDuration:(BOOL)arg1;
- (void)setHasDnsDuration:(BOOL)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasHttpStatusCode:(BOOL)arg1;
- (void)setHasRequestDuration:(BOOL)arg1;
- (void)setHasResponseDuration:(BOOL)arg1;
- (void)setHasResponseSize:(BOOL)arg1;
- (void)setHasStartTime:(BOOL)arg1;
- (void)setHttpStatusCode:(long long)arg1;
- (void)setRequestDuration:(long long)arg1;
- (void)setResponseDuration:(long long)arg1;
- (void)setResponseSize:(long long)arg1;
- (void)setStartTime:(long long)arg1;
- (long long)startTime;
- (void)writeTo:(id)arg1;

@end

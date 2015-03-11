/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayScreenSessionStartedOnServer : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int clientBonjourMs : 1; 
        unsigned int clientConfigMs : 1; 
        unsigned int clientConnectMs : 1; 
        unsigned int clientPrepareMs : 1; 
        unsigned int serverAcceptTime : 1; 
        unsigned int serverConfigTime : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    unsigned int _audioCompressionType;
    unsigned int _clientBonjourMs;
    unsigned int _clientConfigMs;
    unsigned int _clientConnectMs;
    NSString *_clientModel;
    unsigned int _clientPrepareMs;
    NSString *_clientVersion;
    } _has;
    unsigned int _serverAcceptTime;
    unsigned int _serverConfigTime;
    NSString *_sessionUUID;
    int _status;
    unsigned long long _timestamp;
    unsigned int _transportType;
}

@property unsigned int audioCompressionType;
@property unsigned int clientBonjourMs;
@property unsigned int clientConfigMs;
@property unsigned int clientConnectMs;
@property(retain) NSString * clientModel;
@property unsigned int clientPrepareMs;
@property(retain) NSString * clientVersion;
@property bool hasAudioCompressionType;
@property bool hasClientBonjourMs;
@property bool hasClientConfigMs;
@property bool hasClientConnectMs;
@property(readonly) bool hasClientModel;
@property bool hasClientPrepareMs;
@property(readonly) bool hasClientVersion;
@property bool hasServerAcceptTime;
@property bool hasServerConfigTime;
@property(readonly) bool hasSessionUUID;
@property bool hasStatus;
@property bool hasTimestamp;
@property bool hasTransportType;
@property unsigned int serverAcceptTime;
@property unsigned int serverConfigTime;
@property(retain) NSString * sessionUUID;
@property int status;
@property unsigned long long timestamp;
@property unsigned int transportType;

- (unsigned int)audioCompressionType;
- (unsigned int)clientBonjourMs;
- (unsigned int)clientConfigMs;
- (unsigned int)clientConnectMs;
- (id)clientModel;
- (unsigned int)clientPrepareMs;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioCompressionType;
- (bool)hasClientBonjourMs;
- (bool)hasClientConfigMs;
- (bool)hasClientConnectMs;
- (bool)hasClientModel;
- (bool)hasClientPrepareMs;
- (bool)hasClientVersion;
- (bool)hasServerAcceptTime;
- (bool)hasServerConfigTime;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)serverAcceptTime;
- (unsigned int)serverConfigTime;
- (id)sessionUUID;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (void)setClientBonjourMs:(unsigned int)arg1;
- (void)setClientConfigMs:(unsigned int)arg1;
- (void)setClientConnectMs:(unsigned int)arg1;
- (void)setClientModel:(id)arg1;
- (void)setClientPrepareMs:(unsigned int)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasAudioCompressionType:(bool)arg1;
- (void)setHasClientBonjourMs:(bool)arg1;
- (void)setHasClientConfigMs:(bool)arg1;
- (void)setHasClientConnectMs:(bool)arg1;
- (void)setHasClientPrepareMs:(bool)arg1;
- (void)setHasServerAcceptTime:(bool)arg1;
- (void)setHasServerConfigTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setServerAcceptTime:(unsigned int)arg1;
- (void)setServerConfigTime:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCH3DShaderVariable;

@interface TSCH3DChartBarGrowClipShaderEffect : TSCH3DChartClippingShaderEffect {
    float mCapFudge;
    float mClipFudge;
    float mClipInitialCapFudge;
    BOOL mDisableClipping;
    BOOL mDisableClippingInitialCap;
    BOOL mPositiveOnly;
    TSCH3DShaderVariable *mTimingValue;
    BOOL mUseCapScaling;
    BOOL mUseDiscard;
    BOOL mUseXAxis;
}

@property float capFudge;
@property float clipFudge;
@property BOOL positiveOnly;
@property BOOL useCapScaling;
@property BOOL useDiscard;
@property BOOL useXAxis;

+ (id)variableClipVertex;
+ (id)variableElementRange;
+ (id)variableInverseBevelInfo;
+ (id)variableIsCap;

- (void)addVariables:(id)arg1;
- (float)capFudge;
- (float)clipFudge;
- (id)init;
- (void)inject:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)numberOfClippingValues;
- (void)p_injectFunctions:(id)arg1;
- (BOOL)positiveOnly;
- (void)setCapFudge:(float)arg1;
- (void)setClipFudge:(float)arg1;
- (void)setPositiveOnly:(BOOL)arg1;
- (void)setUseCapScaling:(BOOL)arg1;
- (void)setUseDiscard:(BOOL)arg1;
- (void)setUseXAxis:(BOOL)arg1;
- (void)uploadData:(id)arg1 effectsStates:(id)arg2;
- (BOOL)useCapScaling;
- (BOOL)useDiscard;
- (BOOL)useXAxis;
- (id)variableClipVertex;
- (id)variableElementRange;
- (id)variableInverseBevelInfo;
- (id)variableIsCap;

@end
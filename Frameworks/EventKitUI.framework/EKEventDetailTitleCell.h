/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;



@interface EKEventDetailTitleCell : EKEventDetailCell 
{
    UILabel *_titleView;
    UILabel *_locationView;
    UILabel *_dateView;
    UILabel *_timeView;
    UILabel *_recurrenceView;
    UILabel *_statusView;
    NSUInteger _visibleItems;
    BOOL _observingLocaleChanges;
}

+ (void)_initializeSafeCategory;

- (void)setLocation:(id)arg1;
- (BOOL)update;
- (id)_titleView;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)_statusView;
- (void)setDateString:(id)arg1;
- (void)setTimeString:(id)arg1;
- (void)setRecurrenceString:(id)arg1;
- (void)setStatusString:(id)arg1;
- (id)_recurrenceView;
- (id)_timeView;
- (id)_dateView;
- (id)_locationView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

@end
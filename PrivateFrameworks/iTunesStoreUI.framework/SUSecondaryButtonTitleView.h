/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIBarButtonItem, SUNavigationItem, UIView;



@interface SUSecondaryButtonTitleView : UIView 
{
    UIBarButtonItem *_buttonItem;
    UIView *_buttonItemView;
    SUNavigationItem *_navigationItem;
    UIView *_titleView;
    BOOL _titleViewIsCustom;
}

@property(retain) UIView *titleView;
@property SUNavigationItem *navigationItem;
@property(getter=isCustomTitleView) BOOL customTitleView;
@property(retain) UIBarButtonItem *buttonItem;


- (void)setButtonItem:(id)arg1;
- (BOOL)isCustomTitleView;
- (void)setNavigationItem:(id)arg1;
- (id)buttonItem;
- (id)titleView;
- (void)setCustomTitleView:(BOOL)arg1;
- (void)setTitleView:(id)arg1;
- (id)initWithNavigationItem:(id)arg1;
- (id)navigationItem;
- (void)sizeToFit;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;

@end
/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>
#import <libobjc.A.dylib/MPUExtrasCarouselViewControllerDataSource.h>
#import <libobjc.A.dylib/MPUExtrasCarouselViewControllerDelegate.h>
#import <libobjc.A.dylib/MPUExtrasImageBrowserViewControllerDataSource.h>
#import <libobjc.A.dylib/MPUExtrasNavigationAnimationControllerProvider.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageInteractiveTransitionSource.h>
#import <libobjc.A.dylib/MPUExtrasZoomingImageTransitionParticipant.h>

@class MPUExtrasZoomingImageTransitionController, NSArray, MPUExtrasCarouselViewController, MPUExtrasImageBrowserViewController, NSDictionary, IKShowcaseTemplate, NSString;

@interface MPUExtrasShowcaseTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate, MPUExtrasImageBrowserViewControllerDataSource, MPUExtrasNavigationAnimationControllerProvider, MPUExtrasZoomingImageInteractiveTransitionSource, MPUExtrasZoomingImageTransitionParticipant> {

	BOOL _supportsOneupMode;
	MPUExtrasZoomingImageTransitionController* _activeZoomingImageInteractiveTransitionController;
	NSArray* _bannerButtonElements;
	NSArray* _carouselLockupElements;
	MPUExtrasCarouselViewController* _carouselViewController;
	MPUExtrasImageBrowserViewController* _imageBrowserViewController;
	NSDictionary* _overriddenFullscreenImages;
	unsigned long long _autohighlightIndex;

}

@property (nonatomic,readonly) IKShowcaseTemplate * templateElement; 
@property (nonatomic,readonly) unsigned long long indexOfVisibleItem; 
@property (nonatomic,retain) MPUExtrasZoomingImageTransitionController * activeZoomingImageInteractiveTransitionController;              //@synthesize activeZoomingImageInteractiveTransitionController=_activeZoomingImageInteractiveTransitionController - In the implementation block
@property (nonatomic,retain) NSArray * bannerButtonElements;                                                                             //@synthesize bannerButtonElements=_bannerButtonElements - In the implementation block
@property (nonatomic,retain) NSArray * carouselLockupElements;                                                                           //@synthesize carouselLockupElements=_carouselLockupElements - In the implementation block
@property (nonatomic,retain) MPUExtrasCarouselViewController * carouselViewController;                                                   //@synthesize carouselViewController=_carouselViewController - In the implementation block
@property (nonatomic,retain) MPUExtrasImageBrowserViewController * imageBrowserViewController;                                           //@synthesize imageBrowserViewController=_imageBrowserViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * overriddenFullscreenImages;                                                                  //@synthesize overriddenFullscreenImages=_overriddenFullscreenImages - In the implementation block
@property (assign,nonatomic) BOOL supportsOneupMode;                                                                                     //@synthesize supportsOneupMode=_supportsOneupMode - In the implementation block
@property (assign,nonatomic) unsigned long long autohighlightIndex;                                                                      //@synthesize autohighlightIndex=_autohighlightIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)_prepareLayout;
-(unsigned long long)carouselSize;
-(void)carouselViewController:(id)arg1 configureCarouselCollectionViewCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3 withThumbnailImageContainerSize:(CGSize)arg4 ;
-(void)carouselViewController:(id)arg1 didHighlightItemAtIndex:(unsigned long long)arg2 ;
-(void)carouselViewController:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(unsigned long long)indexOfVisibleItem;
-(unsigned long long)numberOfItemsInCarouselViewController:(id)arg1 ;
-(void)handlePinchGestureForZoomingImageInteractiveTransitionWithContext:(id)arg1 ;
-(void)setCarouselLockupElements:(NSArray *)arg1 ;
-(void)setSupportsOneupMode:(BOOL)arg1 ;
-(void)setCarouselViewController:(MPUExtrasCarouselViewController *)arg1 ;
-(void)setImageBrowserViewController:(MPUExtrasImageBrowserViewController *)arg1 ;
-(id)_mainChildViewController;
-(MPUExtrasCarouselViewController *)carouselViewController;
-(MPUExtrasImageBrowserViewController *)imageBrowserViewController;
-(void)setActiveZoomingImageInteractiveTransitionController:(MPUExtrasZoomingImageTransitionController *)arg1 ;
-(void)setOverriddenFullscreenImages:(NSDictionary *)arg1 ;
-(NSArray *)carouselLockupElements;
-(BOOL)supportsOneupMode;
-(void)_pushImageBrowserWithVisibleItemIndex:(unsigned long long)arg1 ;
-(NSDictionary *)overriddenFullscreenImages;
-(void)_loadTextElement:(id)arg1 textAttributes:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(MPUExtrasZoomingImageTransitionController *)activeZoomingImageInteractiveTransitionController;
-(unsigned long long)numberOfImagesForBrowserViewController:(id)arg1 ;
-(void)imageBrowserViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)imageBrowserViewController:(id)arg1 loadTitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)imageBrowserViewController:(id)arg1 loadSubtitleAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)imageBrowserViewController:(id)arg1 loadDescriptionAtIndex:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)animationControllerForNavigationOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(NSArray *)bannerButtonElements;
-(void)setBannerButtonElements:(NSArray *)arg1 ;
-(unsigned long long)autohighlightIndex;
-(void)setAutohighlightIndex:(unsigned long long)arg1 ;
-(BOOL)showsPlaceholder;
-(IKShowcaseTemplate *)templateElement;
@end


//
//  	VolumeSlider.h
//  	Volume Slider Cordova Plugin
//
//      Updated by Tom Krones 30/09/13.
//  	Created by Tommy-Carlos Williams on 20/07/11.
//  	Copyright 2011 Tommy-Carlos Williams. All rights reserved.
//      MIT Licensed
//

#import <Cordova/CDVPlugin.h>
#import <MediaPlayer/MediaPlayer.h>


@interface VolumeSlider : CDVPlugin <UITabBarDelegate> {
	NSString* callbackId;
	UIView* mpVolumeViewParentView;
	MPVolumeView* myVolumeView;
}

@property (nonatomic, copy) NSString* callbackId;
@property (nonatomic, retain) UIView* mpVolumeViewParentView;
@property (nonatomic, retain) MPVolumeView* myVolumeView;


- (void) createVolumeSlider:(CDVInvokedUrlCommand*)command;
- (void) showVolumeSlider:(CDVInvokedUrlCommand*)command;
- (void) hideVolumeSlider:(CDVInvokedUrlCommand*)command;

@end

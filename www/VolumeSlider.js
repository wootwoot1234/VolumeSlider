//
//	VolumeSlider.js
//	Volume Slider Cordova Plugin
//
//  Updated by Tom Krones 30/09/13.
//	Created by Tommy-Carlos Williams on 20/07/11.
//	Copyright 2011 Tommy-Carlos Williams. All rights reserved.
//      MIT Licensed
//

var exec = require("cordova/exec");

var VolumeSlider = function(){};
	
/**
 * Create a volume slider.
 */
VolumeSlider.prototype.createVolumeSlider = function(originx,originy,width,height) {
	exec(null, null, "VolumeSlider","createVolumeSlider", [originx, originy, width, height]);
};

/**
 * Show the volume slider
 */
VolumeSlider.prototype.showVolumeSlider = function() {
	exec(null, null, "VolumeSlider","showVolumeSlider", []);
};
/**
 * Hide the volume slider
 */
VolumeSlider.prototype.hideVolumeSlider = function() {
	exec(null, null, "VolumeSlider","hideVolumeSlider", []);
};
	
module.exports = new VolumeSlider();
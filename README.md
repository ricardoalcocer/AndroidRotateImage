# Android Image Rotate

There's a annoying, yet somewhat rare issue when taking photos with certain Andorid devices, where the orientation information is not properlly identified by Titanium, causing a photo taken in portrait format to be returned as landscape.

This module, was developed by [Justin Toth](https://github.com/justintoth) and shared on [Jira](https://jira.appcelerator.org/browse/TIMOB-3887) with the intention of helping people fix this annoying issue, and help Apccelerator in getting this finally fixed.

The source code is exactly the same as the Jira ticket.  I simply compiled it and provided it in binary format, ready to use.

# Usage

Besides rotating the image, the library scales the image to the specified width, and compresses it to the specified percentage.  This is particulary useful, since Android camera images can be huge and could potentially make your device run out-of-memory.

```javascript
function rotateAndResize (media, width, quality) {
    var utilsModule = require('com.alcoapps.imageutility');
 
    // Create file to store photo.
    var dataDirectory = Ti.Filesystem.getApplicationDataDirectory();
    var fileName = String.format('Company_Photo_%s.jpg', moment().format('YYYY-MM-DD-HH-mm-ss-SSS-ZZ'));
    var file = Ti.Filesystem.getFile(dataDirectory, fileName);
    var fileNativePath = file.nativePath;
 
    // Write media to file.
    file.write(media);
    file = null;
 
    // Rotate photo in file, resize, and adjust quality.
    utilsModule.rotateResizeImage(fileNativePath, width || 640, quality || 80);
 
    // Get new and improved media out of file.
    media = Ti.Filesystem.getFile(fileNativePath);
 
    return media;
}
```

# License
I didn't write this code, and there was no license specified, so I'm releasing it as [MIT](http://alco.mit-license.org), pending feedback from the author.
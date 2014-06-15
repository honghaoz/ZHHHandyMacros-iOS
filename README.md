ZHHHandyMacros-iOS
=====================

### Overview
ZHHHandyMacros contain some handy functions/macros that can make your life of iOS development eaiser.

* `ConciseNSLog(...)`: a concised version of `NSLog(...)`, only log out time stamp and log body, not any other extra informations.

	For example, `2014-06-10 20:07:56.011 test nslog`

* `ConciseNSLogWithoutTimeStamp(...)`: a more concised version of `NSLog(...)`, only log body is printed, no time stamp. 

	For example, `test nslog`

* `ExtendNSLog(...)`: an extended version of `NSLog(...)`, print out function, file name and line number with log body.

	For example, `2014-06-10 08:07:56.013 -[ZHHAppDelegate application:didFinishLaunchingWithOptions:] [ZHHAppDelegate.m:22] test nslogX`

By default, `NSLog(...)` is defined as `ConciseNSLog(...)`, and Added `NSLogX(...)` as `ExtendNSLog(...)`.

* `LogMethod`: log out class name and method name.

	For example, `2014-06-10 20:07:56.014 -[ZHHAppDelegate application:didFinishLaunchingWithOptions:]`

* `NSIntegerToString(i)`: convert NSInteger to NSString.
* `PrintNil(object)`: Print out whether an object is nil.
* `IS_IPHONE_5`: test whether the device is 4-inch screen

### Usage

Add `ZHHHandyMacros.h` and `ZHHHandyMacros` into your project, then add `#import "ZHHHandyMacros.h"` in `your-proj-name-Prefix.pch`. (`your-proj-name-Prefix.pch` is located in `Supporting Files` of your project)



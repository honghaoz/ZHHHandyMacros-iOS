ZHHHandyFunctions-iOS
=====================

### Overview
ZHHHandyFunctions contain some handy functions/macros that can make your life of iOS development eaiser.

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

### Usage

Add `ZHHHandyFunctions.h` and `ZHHHandyFunctions` into your project, then add `#import "ZHHHandyFunctions.h"` in `your-proj-name-Prefix.pch`. (`your-proj-name-Prefix.pch` is located in `Supporting Files` of your project)



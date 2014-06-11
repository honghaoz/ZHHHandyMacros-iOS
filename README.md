ZHHHandyFunctions-iOS
=====================

### Overview
ZHHHandyFunctions contain some handy functions/macros that can make your life of iOS development eaiser.

`ConciseNSLog(...)`: a concised version of `NSLog(...)`, only log out time stamp and log body, not any other extra informations.

`ConciseNSLogWithoutTimeStamp(...)`: a more concised version of `NSLog(...)`, only log body is printed, no time stamp. 

`ExtendNSLog(...)`: an extended version of `NSLog(...)`, print out function, file name and line number with log body.

By default, `NSLog(...)` is defined as `ConciseNSLog(...)`, and Added `NSLogX(...)` as `ExtendNSLog(...)`.

`LogMethod`: log out class name and method name.

`NSIntegerToString(i)`: convert NSInteger to NSString

### Usage

Add `ZHHHandyFunctions.h` and `ZHHHandyFunctions` into your project, then add `#import "ZHHHandyFunctions.h"` in `your-proj-name-Prefix.pch`. (`your-proj-name-Prefix.pch` is located in `Supporting Files` of your project)



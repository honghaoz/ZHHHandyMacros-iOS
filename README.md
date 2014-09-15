ZHHHandyMacros-iOS
=====================

## Overview
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

## Usage

Add `ZHHHandyMacros.h` and `ZHHHandyMacros` into your project, then add `#import "ZHHHandyMacros.h"` in `your-proj-name-Prefix.pch`. (`your-proj-name-Prefix.pch` is located in `Supporting Files` of your project)

## The MIT License (MIT)

Copyright (c) 2014 Honghao Zhang (http://honghaoz.com)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


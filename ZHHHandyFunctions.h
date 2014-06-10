//
//  ZHHHandyFunctions.h
//
//  Created by Zhang Honghao on 6/10/14.
//  Copyright (c) 2014 org-honghao. All rights reserved.
//

#import <Foundation/Foundation.h>

// Define NSLog as ConciseNSLo
#ifdef DEBUG
    #define NSLog(args...) ConciseNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
    #define NSLog(x...)
#endif

void ConciseNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);

// Define NSLogX(), include function name, file name and line number
#define NSLogX(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);

void ExtendNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);

// Log class name and method name
#define LogMethod NSLog(@"-[%@ %@]", NSStringFromClass(self.class),NSStringFromSelector(_cmd))

// NSInteger to NSString
#define NSIntegerToString(i) [NSString stringWithFormat:@"%lu", (unsigned long)i]



//
//  ZHHHandyFunctions.h
//
//  Created by Zhang Honghao on 6/10/14.
//  Copyright (c) 2014 org-honghao. All rights reserved.
//

#import <Foundation/Foundation.h>

// Log class name and method name
#define LogMethod NSLog(@"-[%@ %@]", NSStringFromClass(self.class),NSStringFromSelector(_cmd))

// Define NSLog as ConciseNSLo
#ifdef DEBUG
    #define NSLog(args...) ConciseNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);
#else
    #define NSLog(x...)
#endif

// Define NSLogX(), include function name, file name and line number
#define NSLogX(args...) ExtendNSLog(__FILE__,__LINE__,__PRETTY_FUNCTION__,args);



void ConciseNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);

void ExtendNSLog(const char *file, int lineNumber, const char *functionName, NSString *format, ...);



//
//  Common.h
//  Taptap Heart Rate
//
//  Created by Zhang Honghao on 6/10/14.
//  Copyright (c) 2014 org-honghao. All rights reserved.
//

#ifndef Taptap_Heart_Rate_Common_h
#define Taptap_Heart_Rate_Common_h


// Log class name and method name
#define LogMethod NSLog(@"** %@ | %@", NSStringFromClass(self.class),NSStringFromSelector(_cmd))

// Only Log when in debug mode
#ifdef DEBUG
#   define NSLog(...) NSLog(__VA_ARGS__)
#else
#   define NSLog(...)
#endif


#endif

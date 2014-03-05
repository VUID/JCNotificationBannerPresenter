//
//  NSObject+Abstraction.m
//  Pods
//
//  Created by abell on 2/28/14.
//
//

#import "NSObject+Abstraction.h"
#import <objc/runtime.h>

@implementation NSObject (Abstract)

- (id)subclassResponsibility:(SEL)aSel {
    char	c = (class_isMetaClass(object_getClass(self)) ? '+' : '-');
    
    [NSException raise: NSInvalidArgumentException
                format: @"[%@%c%@] should be overridden by subclass",
     NSStringFromClass([self class]), c,
     aSel ? (id)NSStringFromSelector(aSel) : (id)@"(null)"];
    return self;	// Not reached
}

@end

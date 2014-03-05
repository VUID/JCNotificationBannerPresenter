//
//  NSObject+Abstraction.h
//  Pods
//
//  Created by abell on 2/28/14.
//
//

#import <Foundation/Foundation.h>

@interface NSObject (Abstract)

- (id)subclassResponsibility:(SEL)aSel;

@end

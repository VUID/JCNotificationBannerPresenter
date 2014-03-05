#import <Foundation/Foundation.h>

typedef void (^JCNotificationBannerTapHandlingBlock)();

@interface JCNotificationBanner : NSObject

@property (nonatomic) NSString* title;
@property (nonatomic) NSString* message;
@property (nonatomic, assign) NSTimeInterval timeout;
@property (nonatomic) BOOL manualRemoval;
@property (nonatomic, copy) JCNotificationBannerTapHandlingBlock tapHandler;

- (JCNotificationBanner*) initWithTitle:(NSString*)title
                                message:(NSString*)message
                                 manual:(BOOL)manual
                             tapHandler:(JCNotificationBannerTapHandlingBlock)tapHandler;

- (JCNotificationBanner*) initWithTitle:(NSString*)title
                                message:(NSString*)message
                                timeout:(NSTimeInterval)timeout
                                 manual:(BOOL)manual
                             tapHandler:(JCNotificationBannerTapHandlingBlock)tapHandler;
@end

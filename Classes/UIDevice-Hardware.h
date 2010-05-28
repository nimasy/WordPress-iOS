#import <UIKit/UIKit.h>

#define IPHONE_1G_NAMESTRING @"iPhone 1G"
#define IPHONE_3G_NAMESTRING @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING @"iPhone 3GS"
#define IPHONE_4G_NAMESTRING @"iPhone 4G"
#define IPOD_1G_NAMESTRING @"iPod Touch 1G"
#define IPOD_2G_NAMESTRING @"iPod Touch 2G"
#define IPAD_1G_NAMESTRING @"iPad"

@interface UIDevice (Hardware)
- (NSString *) platform;
- (NSString *) platformString;
@end
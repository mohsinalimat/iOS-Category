//
//  NSDate+Formatter.h
//  Category
//
//  Created by 杨晴贺 on 29/12/2016.
//  Copyright © 2016 silence. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Formatter)

+(NSDateFormatter *)formatter;
+(NSDateFormatter *)formatterWithoutTime;
+(NSDateFormatter *)formatterWithoutDate;

-(NSString *)formatWithUTCTimeZone;
-(NSString *)formatWithLocalTimeZone;
-(NSString *)formatWithTimeZoneOffset:(NSTimeInterval)offset;
-(NSString *)formatWithTimeZone:(NSTimeZone *)timezone;

-(NSString *)formatWithUTCTimeZoneWithoutTime;
-(NSString *)formatWithLocalTimeZoneWithoutTime;
-(NSString *)formatWithTimeZoneOffsetWithoutTime:(NSTimeInterval)offset;
-(NSString *)formatWithTimeZoneWithoutTime:(NSTimeZone *)timezone;

-(NSString *)formatWithUTCWithoutDate;
-(NSString *)formatWithLocalTimeWithoutDate;
-(NSString *)formatWithTimeZoneOffsetWithoutDate:(NSTimeInterval)offset;
-(NSString *)formatTimeWithTimeZone:(NSTimeZone *)timezone;


+ (NSString *)currentDateStringWithFormat:(NSString *)format;
+ (NSDate *)dateWithSecondsFromNow:(NSInteger)seconds;
+ (NSDate *)dateWithYear:(NSInteger)year month:(NSUInteger)month day:(NSUInteger)day;
- (NSString *)dateWithFormat:(NSString *)format;

@end

//
//  NSNumber+APUtils.h
//
//  Created by Andrei Puni on 5/29/13.
//

#import <Foundation/Foundation.h>

@interface NSNumber (APUtils)

- (NSString *)formattedString;

- (NSString *)formattedStringWithCurrency:(NSString *)currency;

/**
 *  return a NSDate value base on unix time in seconds
 *
 *  @return a NSDate value
 */
- (NSDate *) dateValue;

/**
 *  get a random integer between 0 and maxInt -1
 *
 *  @param maxInt max int value to bound a random value.
 *
 *  @return random int value
 */
+ (int)randomInt:(int)maxInt;

/**
 *  get a random BOOL value, YES or NO.
 *
 *  @return random BOOL value
 */
+ (BOOL)randomBool;

/**
 *  Returns the short description using 'k' and 'm' symbols.
 *  i.e. 600.000 -> 600k; 1.500.000 -> 1.5m
 *
 *  @return string short description
 */
- (NSString *)shortDescription;

@end

#import <Foundation/Foundation.h>

/**
* Logly lift.json API
* Logly lift.json API for Lift Mobile SDK
*
* OpenAPI spec version: 1.0.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


extern NSString * LGPercentEscapedStringFromString(NSString *string);

extern NSString * const kLGApplicationJSONType;

@protocol LGSanitizer <NSObject>

/**
 * Sanitize object for request
 *
 * @param object The query/path/header/form/body param to be sanitized.
 */
- (id) sanitizeForSerialization:(id) object;

/**
 * Convert parameter to NSString
 */
- (NSString *) parameterToString: (id) param;

/**
 * Convert date to NSString
 */
+ (NSString *)dateToString:(id)date;

/**
 * Detects Accept header from accepts NSArray
 *
 * @param accepts NSArray of header
 *
 * @return The Accept header
 */
-(NSString *) selectHeaderAccept:(NSArray *)accepts;

/**
 * Detects Content-Type header from contentTypes NSArray
 *
 * @param contentTypes NSArray of header
 *
 * @return The Content-Type header
 */
-(NSString *) selectHeaderContentType:(NSArray *)contentTypes;

@end

@interface LGSanitizer : NSObject <LGSanitizer>



@end

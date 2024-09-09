/**
 *  
 *  @header AgoraChatVoiceMessageBody.h
 *  @abstract The voice message body.
 *  @author Hyphenate
 *  @version 3.00
 */

#import <Foundation/Foundation.h>

#import "AgoraChatFileMessageBody.h"

/**
 *  
 *  The voice message body.
 */
@interface AgoraChatVoiceMessageBody : AgoraChatFileMessageBody

/**
 *   
 *  The voice duration, in seconds. You can customize the length accordingly.
 */
@property (nonatomic) int duration;

@end

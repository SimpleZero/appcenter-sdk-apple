#import <UIKit/UIKit.h>
#import "MSAbstractLog.h"
#import "MSProtocolExtension.h"
#import "MSUserExtension.h"
#import "MSOsExtension.h"
#import "MSAppExtension.h"
#import "MSNetExtension.h"
#import "MSLocExtension.h"
#import "MSSdkExtension.h"

/**
 * Common schema has 1 log type with extensions, everything is called an event.
 */
@interface MSCommonSchemaLog : MSAbstractLog

/**
 * The version of the schema. The format is a string with major and minor such as 3.0.
 */
@property(nonatomic, copy) NSString *ver;

/**
 * The event name.
 */
@property(nonatomic, copy) NSString *name;

/**
 * The time on the client when this event was created. Format: A date/time in UTC as the Ticks value.
 */
@property(nonatomic) int64_t time;

/**
 * The effective sample rate for this event at the time it was generated by a client.
 * The valid range is from a minimum value of one out of every 100 million devices which is "0.000001",
 * all the way up to all devices which is "100". The default value is 100.
 */
@property(nonatomic) double popSample;

/**
 * An identifier used to identify applications or other logical groupings of events.
 */
@property(nonatomic, copy) NSString *iKey;

/**
 * Event Property flags contain a collection of bits that describe how the event should be processed by the Asimov
 * pipeline.
 */
@property(nonatomic) int64_t flags;

/**
 * Correlation Vector: A single field for tracking partial order of related telemetry events across component
 * boundaries.
 */
@property(nonatomic, copy) NSString *cV;

/**
 * The Protocol extension.
 */
@property(nonatomic) MSProtocolExtension *extProtocol;

/**
 * The User extension.
 */
@property(nonatomic) MSUserExtension *extUser;

/**
 * The OS extension.
 */
@property(nonatomic) MSOsExtension *extOs;

/**
 * The App extension.
 */
@property(nonatomic) MSAppExtension *extApp;

/**
 * The Net extension.
 */
@property(nonatomic) MSNetExtension *extNet;

/**
 * The SDK extension.
 */
@property(nonatomic) MSSdkExtension *extSdk;

/**
 * The Loc extension.
 */
@property(nonatomic) MSLocExtension *extLoc;

/**
 * Other Part A extension.
 */
@property(nonatomic) NSMutableDictionary *ext;

/**
 * Part C
 */
@property(nonatomic) NSMutableDictionary *data;

@end

//
//  World.h
//  Jonez
//
//  Created by Pedro Gomes on 1/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
@class Player;
@class GameAction;
@interface Game : NSObject
{
	Player			*_player;
	
	NSUInteger		_weekNumber;
	NSUInteger		_timeUnitsLeft;
	
	NSMutableArray	*_scheduledOrders;
}

@property (nonatomic, readonly) Player *player;
@property (nonatomic, readonly) NSUInteger weekNumber;
@property (nonatomic, readonly) NSUInteger timeUnitsLeft;

- (id)initWithPlayer:(Player *)player;

- (BOOL)issueOrder:(GameAction *)order error:(NSError **)error;

- (void)startWeek;
- (void)finishWeek;

// Convenience methods - abstracts the most common orders
- (BOOL)applyForJob:(id)job error:(NSError **)error;
- (BOOL)quitJob:(id)job error:(NSError **)error;
- (BOOL)work:(id)job error:(NSError **)error;

- (BOOL)enrollCourse:(id)course error:(NSError **)error;
- (BOOL)quitCourse:(id)course error:(NSError **)error;
- (BOOL)attendCourse:(id)course error:(NSError **)error;

- (BOOL)travelTo:(id)destination error:(NSError **)error;

- (BOOL)buyItem:(id)item error:(NSError **)error;
- (BOOL)sellItem:(id)item error:(NSError **)error;

- (BOOL)rent:(id)flat error:(NSError **)error;

- (BOOL)requestLoan:(NSNumber *)amount error:(NSError **)error;
- (BOOL)buyStock:(id)stock error:(NSError **)error;
- (BOOL)sellStock:(id)stock error:(NSError **)error;

@end

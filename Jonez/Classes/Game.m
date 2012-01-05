//
//  World.m
//  Jonez
//
//  Created by Pedro Gomes on 1/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Game.h"

@implementation Game

@synthesize player			= _player;
@synthesize weekNumber 		= _weekNumber;
@synthesize timeUnitsLeft	= _timeUnitsLeft;

- (BOOL)issueOrder:(GameAction *)order error:(NSError **)error
{
	return NO;
	// validate the order, return error if not possible
	// attempt to process the order, apply result
}

@end

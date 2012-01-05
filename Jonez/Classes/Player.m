//
//  Player.m
//  Jonez
//
//  Created by Pedro Gomes on 1/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "Player.h"

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
@implementation Player

@synthesize education		= _education;
@synthesize happiness		= _happiness;
@synthesize wealth			= _wealth;
@synthesize career			= _career;
@synthesize health			= _health;
@synthesize rest			= _rest;

@synthesize money			= _money;
@synthesize workExperience	= _workExperience;
@synthesize qualifications	= _qualifications;

@synthesize profressions	= _professions;
@synthesize hobbies			= _hobbies;
@synthesize courses			= _courses;

#pragma mark - Dealloc and Initialization

#pragma mark - Public Methods

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
- (BOOL)issueOrder:(id)order error:(NSError **)error
{
	if(error) {
		*error = nil;
	}
	return NO;
}

@end

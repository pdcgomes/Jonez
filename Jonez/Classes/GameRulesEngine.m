//
//  GameRuleEngine.m
//  Jonez
//
//  Created by Pedro Gomes on 1/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "GameRulesEngine.h"
#import "GameRulesParser.h"

@implementation GameRulesEngine

@synthesize player	= _player;

#pragma mark - Dealloc and Initialization

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
- (id)initWithPlayer:(Player *)player
{
	return nil;
}

#pragma mark - Public Methods

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
- (BOOL)loadRules:(id)rules error:(NSError **)error
{
	return NO;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
- (BOOL)evaluateAction:(GameAction *)action error:(NSError **)error
{
	return NO;
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
- (BOOL)processAction:(GameAction *)action error:(NSError **)error
{
	return NO;
}

@end

//
//  GameRuleEngine.h
//  Jonez
//
//  Created by Pedro Gomes on 1/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class GameAction;
@class Player;
@interface GameRulesEngine : NSObject
{
	Player		*_player;
}

@property (nonatomic, readonly) Player *player;

//- (id)initWithRules:(NSArray *)rules;
- (id)initWithPlayer:(Player *)player;

- (BOOL)loadRules:(id)rules error:(NSError **)error;

- (BOOL)evaluateAction:(GameAction *)action error:(NSError **)error;
- (BOOL)processAction:(GameAction *)action error:(NSError **)error;

//- (BOOL)scheduleAction:(GameAction *)action error:(NSError **)error;

@end

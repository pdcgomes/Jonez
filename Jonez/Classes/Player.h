//
//  Player.h
//  Jonez
//
//  Created by Pedro Gomes on 1/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
@class GameAction;
@interface Player : NSObject
{
	id				_education;
	id				_happiness;
	id				_wealth;
	id				_career;
	id				_health;
	id				_rest;

	NSNumber		*_money;
	id				_workExperience;
	id				_qualifications;

	NSMutableArray 	*_professions;
	NSMutableArray	*_hobbies;
	NSMutableArray	*_courses;
}

@property (nonatomic, readonly) id education;
@property (nonatomic, readonly) id happiness;
@property (nonatomic, readonly) id wealth;
@property (nonatomic, readonly) id career;
@property (nonatomic, readonly) id health;
@property (nonatomic, readonly) id rest;

@property (nonatomic, readonly) NSNumber *money;
@property (nonatomic, readonly) id workExperience;
@property (nonatomic, readonly) id qualifications;

@property (nonatomic, readonly) NSArray *profressions;
@property (nonatomic, readonly) NSArray *hobbies;
@property (nonatomic, readonly) NSArray *courses;

- (BOOL)issueOrder:(GameAction *)order error:(NSError **)error;

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

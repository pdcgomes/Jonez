//
//  LevelableEntity.h
//  Jonez
//
//  Created by Pedro Gomes on 1/4/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
@class UpgradeLevel;
@interface UpgradableEntity : NSObject
{
	NSString		*_name;
	NSString		*_description;
	NSArray			*_upgradeLevels;
	UpgradeLevel	*_currentLevel;
}

@end

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
@interface UpgradeLevel : NSObject
{
	UpgradableEntity	*_parent;
	
	NSString			*_name;
	NSString			*_description;
	NSNumber			*_level;
	NSNumber			*_progress;
	NSNumber			*_timeUnitsToComplete;
	NSNumber			*_cost;
}

@end

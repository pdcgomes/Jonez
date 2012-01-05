//
//  Place.h
//  Jonez
//
//  Created by Pedro Gomes on 1/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Place : NSObject
{
	NSString		*_name;
	NSString		*_description;
	
	NSArray			*_menuOptions;
	NSArray			*_menuActionByOption;
}

- (NSArray *)fetchMenuOptions; // most places present a menu with various options
- (NSArray *)fetchActionsForOption:(id)option; // each main option may have several related actions the user can choose from

@end

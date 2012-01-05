//
//  GameAction.h
//  Jonez
//
//  Created by Pedro Gomes on 1/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

//Possible actions
//
//- ApplyForJob
//- QuitJob
//- Work
//
//- EnrollCourse
//- AttendCourse
//- QuitCourse
//
//- RentFlat
// -ProcessRentPayment
//
//- BuyItem
//- SellItem
//
//- BuyStock
//- SellStock
//- ProcessStock *this is the recurrent action, processes the winnings or losses
//
//- RequestLoan
//- ProcessLoanPayment *this is the recurrent action, processes the payment
//
//-TravelTo

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
typedef enum {
	GameActionRecurrsNever,
	GameActionRecurrsWeekly,
	GameActionRecurrsMonthly,
} GameActionRecurrs;

////////////////////////////////////////////////////////////////////////////////
// Abstract game action
////////////////////////////////////////////////////////////////////////////////
@interface GameAction : NSObject
{
	NSString			*_name;
	NSString			*_description;
	
	NSDictionary		*_affects;			// list or parameters that are affected by this action (for example, +N happiness, -N rest)
	NSNumber			*_moneyCost;		// money cost of this action
	NSNumber			*_timeUnitCost;		// time cost of this action
	
	GameActionRecurrs	_recurrs;
}

- (id)initWithDict:(NSDictionary *)dict;

- (void)process;

@end

//
//  ReleaseDate.h
//  Gamer
//
//  Created by Caio Mello on 6/20/13.
//  Copyright (c) 2013 Caio Mello. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface ReleaseDate : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSNumber * day;
@property (nonatomic, retain) NSNumber * month;
@property (nonatomic, retain) NSNumber * quarter;
@property (nonatomic, retain) NSNumber * year;
@property (nonatomic, retain) Game *game;

@end
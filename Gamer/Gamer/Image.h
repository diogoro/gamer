//
//  Image.h
//  Gamer
//
//  Created by Caio Mello on 07/10/2013.
//  Copyright (c) 2013 Caio Mello. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Game;

@interface Image : NSManagedObject

@property (nonatomic, retain) NSNumber * index;
@property (nonatomic, retain) NSString * originalURL;
@property (nonatomic, retain) NSString * thumbnailURL;
@property (nonatomic, retain) Game *game;

@end

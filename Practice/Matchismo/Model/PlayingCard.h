//
//  PlayingCard.h
//  Matchismo
//
//  Created by Liyao on 13/7/8.
//  Copyright (c) 2013年 Have Fun. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end


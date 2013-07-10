//
//  Card.m
//  Matchismo
//
//  Created by Liyao on 13/7/7.
//  Copyright (c) 2013年 Have Fun. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card

@synthesize contents;

-(int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if([card.contents isEqualToString:self.contents]){
            score = 1;
            break;
        }
    }
    
    return score;
}


@end

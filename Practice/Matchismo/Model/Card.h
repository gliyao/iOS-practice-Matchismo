//
//  Card.h
//  Matchismo
//
//  Created by Liyao on 13/7/7.
//  Copyright (c) 2013年 Have Fun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isFaceUp) BOOL faceUp;
@property (nonatomic, getter=isUnplayable) BOOL unplayable;

-(int)match:(NSArray *)otherCards;

@end

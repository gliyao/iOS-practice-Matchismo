//
//  Deck.h
//  Matchismo
//
//  Created by Liyao on 13/7/7.
//  Copyright (c) 2013年 Have Fun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"
@interface Deck : NSObject

- (void) addCard:(Card *) card atTop:(BOOL)atTop;
- (Card *)drawRandomCard;

@end

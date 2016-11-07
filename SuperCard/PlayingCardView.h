//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Stepan Paholyk on 29.09.16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUP;

@end

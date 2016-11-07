//
//  ViewController.m
//  SuperCard
//
//  Created by Stepan Paholyk on 29.09.16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import "ViewController.h"
#import "PlayingCardView.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet PlayingCardView *playingCardView;

@end

@implementation ViewController

#pragma mark - Gestures & View

- (IBAction)swipe:(UISwipeGestureRecognizer *)sender {
    self.playingCardView.faceUP = !self.playingCardView.faceUP;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.playingCardView.suit = @"♥️";
    self.playingCardView.rank = 12;
}

@end

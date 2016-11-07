//
//  AppDelegate.h
//  SuperCard
//
//  Created by Stepan Paholyk on 29.09.16.
//  Copyright © 2016 Stepan Paholyk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


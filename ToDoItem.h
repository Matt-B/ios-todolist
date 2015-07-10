//
//  ToDoItem.h
//  ToDoList
//
//  Created by Matt Bailey on 09/07/2015.
//  Copyright (c) 2015 Matt Bailey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end

//
//  Created by Jesse Squires
//  http://www.hexedbits.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSMessagesViewController
//
//
//  The MIT License
//  Copyright (c) 2013 Jesse Squires
//  http://opensource.org/licenses/MIT
//

#import <UIKit/UIKit.h>


@protocol JSMessageTableViewDelegate <NSObject>

@required

@optional

- (void)deleteMessageAtIndexPath:(NSIndexPath *)indexPath;

@end
/**
 *  An instance of `JSMessageTableView` is a subclass of `UITableView` and is means for displaying a list of messages between a group of users.
 */

@interface JSMessageTableView : UITableView
{
    
}

@property (nonatomic, assign) id <JSMessageTableViewDelegate> messageDelegate;

@end

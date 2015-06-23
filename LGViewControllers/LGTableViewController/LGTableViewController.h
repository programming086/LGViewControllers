//
//  LGTableViewController.h
//  LGViewControllers
//
//
//  The MIT License (MIT)
//
//  Copyright (c) 2015 Grigory Lutkov <Friend.LGA@gmail.com>
//  (https://github.com/Friend-LGA/LGViewControllers)
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#import <UIKit/UIKit.h>
#import "LGTableView.h"

@interface LGTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, LGTableViewDelegate>

@property (strong, nonatomic) LGTableView *tableView;

@property (assign, nonatomic, getter=isKeyboardShowHideObserverEnabled) BOOL keyboardShowHideObserverEnabled;

- (instancetype)initWithStyle:(UITableViewStyle)style;
- (instancetype)initWithStyle:(UITableViewStyle)style asyncCalculatingHeightForRows:(BOOL)asyncCalculatingHeightForRows;
- (instancetype)initWithStyle:(UITableViewStyle)style asyncCalculatingHeightForRows:(BOOL)asyncCalculatingHeightForRows placeholderViewEnabled:(BOOL)placeholderViewEnabled refreshViewEnabled:(BOOL)refreshViewEnabled;

- (void)refreshActions;

- (void)keyboardWillShowHideNotification:(NSNotification *)notification;
- (void)keyboardWillShowHideActionsAppear:(BOOL)appear keyboardHeight:(CGFloat)keyboardHeight;

@end

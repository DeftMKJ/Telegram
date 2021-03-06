/*
 * This is the source code of Telegram for iOS v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Peter Iakovlev, 2013.
 */

#import <UIKit/UIKit.h>

@class TGPresentation;

@interface TGLoginCountryCell : UITableViewCell

- (void)setPresentation:(TGPresentation *)presentation;
- (void)setTitle:(NSString *)title;
- (void)setSubtitle:(NSString *)subtitle;
- (void)setCode:(NSString *)code;
- (void)setUseIndex:(bool)useIndex;

@end

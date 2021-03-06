//
//  SixTableViewCell.h
//  Enesco2.2
//
//  Created by wangjie on 16/6/28.
//  Copyright © 2016年 aufree. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SectionClass.h"
#import "ThreeMusicsCell.h"

@interface SixTableViewCell : UITableViewCell
@property (nonatomic, strong) SectionClass *section;
@property (nonatomic, weak) id<SectionListJumpDelegate> delegate;
-(void)change:(RecordClass *)record to:(NAKPlaybackIndicatorViewState)state;
-(void)changeStateWith:(RecordClass*)record;
-(void)showTodayStudyTime;
@end

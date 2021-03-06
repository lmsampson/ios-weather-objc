//
//  LMSWeatherForecastCollectionViewCell.h
//  WeatherObjC
//
//  Created by Lisa Sampson on 2/26/19.
//  Copyright © 2019 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>

@class LMSForecast;

NS_ASSUME_NONNULL_BEGIN

@interface LMSWeatherForecastCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel *tempLabel;

@property (nonatomic, strong) LMSForecast *forecast;

- (void)updateViews;

@end

NS_ASSUME_NONNULL_END

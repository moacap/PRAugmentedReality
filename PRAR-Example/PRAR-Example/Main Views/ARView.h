//
//  ARView.h
//  PrometAR
//
//  Created by Geoffroy Lesage on 4/10/13.
//  Copyright (c) 2013 Promet Solutions Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "ARController.h"


@class ARView;

@protocol ARViewDelegate
- (void)arViewControllerDidFinish:(ARView *)controller;
@end


@interface ARView : UIViewController <ARControllerDelegate> {
    ARController *arController;
    NSArray *arData;
    
    IBOutlet UIActivityIndicatorView *loadingI;
}

@property (assign, nonatomic) id <ARViewDelegate> delegate;

@property (retain, nonatomic) NSArray *arData;

- (IBAction)done:(id)sender;

@end


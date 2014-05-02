//
//  ViewController.h
//  QRCodeReader
//
//  Created by Ayush Chamoli on 02/05/14.
//  Copyright (c) 2014 AYUSHCHAMOLI. All rights reserved.
//

#import <AVFoundation/AVFoundation.h>

@interface ViewController : UIViewController<AVCaptureMetadataOutputObjectsDelegate>

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *bbitemStart;

- (IBAction)startStopReading:(id)sender;

@end

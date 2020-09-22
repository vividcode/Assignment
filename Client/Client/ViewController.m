//
//  ViewController.m
//  Client
//
//  Created by Admin on 9/20/20.
//

#import "ViewController.h"
#import "MBMapInterface.h"

@interface ViewController ()

@property (nonatomic, strong) MBMapInterface * styledMap;
- (IBAction)setStylePressed:(id)sender;
- (IBAction)renderPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *errorLabel;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    self.errorLabel.layer.cornerRadius = 8.0;
    self.errorLabel.layer.masksToBounds = YES;
}
    
- (IBAction)renderPressed:(id)sender
{
    if (self.styledMap != nil)
    {
        self.styledMap = nil;
    }
    
    self.styledMap = [MBMapInterface createMapInterface];
    [self.styledMap render:^{
        NSLog(@"rendered successfully!");
        [self showLabel:self.errorLabel duration:0.8 message:@"rendered successfully!" bShow:YES];
    } :^(NSString * _Nullable errStr) {
        NSLog(@"Render error: %@", errStr);
        [self showLabel:self.errorLabel duration:0.8 message:errStr bShow:YES];
    }] ;
}
    
- (IBAction)setStylePressed:(id)sender
{
    if (self.styledMap != nil)
    {
        self.styledMap = nil;
    }
    
    self.styledMap = [MBMapInterface createMapInterface];
}

- (void)showLabel:(UILabel *)label duration:(NSTimeInterval)duration message:(NSString *)message bShow:(BOOL) bShow
{
    label.alpha = bShow ? 0.0 : 1.0;
    label.text =  message;
    [label sizeToFit];
    
    [UIView animateWithDuration:duration delay:0 options:UIViewAnimationOptionCurveEaseIn
     animations:^{
        label.alpha = bShow ? 1.0 : 0.0;
     }
     completion:^ (BOOL b)
     {
        if (!bShow)
        {
            label.text = @"";
            return;
        }
        
        double delayInSeconds = 2.0;
        dispatch_time_t fadeOutTime = dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delayInSeconds * NSEC_PER_SEC));
        dispatch_after(fadeOutTime, dispatch_get_main_queue(), ^(void)
        {
            [self showLabel:self.errorLabel duration:0.8 message:message bShow:NO];
        });
    }];
}
@end




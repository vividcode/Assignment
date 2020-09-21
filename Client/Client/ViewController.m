//
//  ViewController.m
//  Client
//
//  Created by Admin on 9/20/20.
//

#import "ViewController.h"
#import "MBMapInterface.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    MBMapInterface * styledMap = [MBMapInterface createMapInterface];
    [styledMap render:^{
        printf("in view controlleR!");
    }];
    
}


@end

//
//  ViewController.h
//  Aula8
//
//  Created by Usuário Convidado on 23/03/17.
//  Copyright © 2017 Gabriel Ribeiro. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{

}

@property (weak, nonatomic) IBOutlet UITextField *txtAtleta;
@property (weak, nonatomic) IBOutlet UITextField *txtPeso;
@property (weak, nonatomic) IBOutlet UITextField *txtAltura;
@property (weak, nonatomic) IBOutlet UITextField *txtIMC;

- (IBAction)btnCalcular:(id)sender;

@end


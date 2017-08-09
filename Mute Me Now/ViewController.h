#import <Cocoa/Cocoa.h>
#import <MASShortcut/Shortcut.h>

@interface ViewController : NSViewController

@property (weak) IBOutlet NSButton *githubButton;
@property (weak) IBOutlet NSButton *websiteButton;
@property (weak) IBOutlet NSButton *autoLoginState;
@property (weak) IBOutlet NSButton *showInMenuBarState;

@property (strong) IBOutlet MASShortcutView *masShortCutView;

- (IBAction)showMenuBarChanged:(id)sender;

@end


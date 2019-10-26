//
//  RCTContactsWrapper.h
//  RCTContactsWrapper
//
//  Created by Oliver Jacobs on 15/06/2016.
//  Copyright © 2016 Facebook. All rights reserved.
//

#if __has_include(<React/RCTBridgeModule.h>)
    #import <React/RCTBridgeModule.h>
#else
    #import "RCTBridgeModule.h"
#endif

@import Contacts;
@import ContactsUI;
@import AddressBook;
@import AddressBookUI;

@interface RCTContactsWrapper : NSObject <RCTBridgeModule, CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate>




@end

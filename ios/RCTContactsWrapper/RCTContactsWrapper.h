//
//  RCTContactsWrapper.h
//  RCTContactsWrapper
//
//  Created by Oliver Jacobs on 15/06/2016.
//  Copyright © 2016 Facebook. All rights reserved.
//

#import <React/RCTBridgeModule.h>

#import <Contacts/Contacts.h>
#import <ContactsUI/ContactsUI.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>


@interface RCTContactsWrapper : NSObject <RCTBridgeModule, CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate>




@end

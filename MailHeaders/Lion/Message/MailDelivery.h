/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class DeliveryAccount, MailAccount, Message, MessageStore;

@interface MailDelivery : NSObject
{
    id _delegate;
    Message *_message;
    MessageStore *_messageStore;
    MailAccount *_archiveAccount;
    DeliveryAccount *_account;
    int _status;
    BOOL _askForReadReceipt;
}

+ (id)newWithMessage:(id)arg1;
+ (BOOL)deliverMessage:(id)arg1 askForReadReceipt:(BOOL)arg2;
+ (BOOL)deliverMessage:(id)arg1;
+ (BOOL)returnMessageToSender:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;
- (id)message;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)archiveAccount;
- (void)setArchiveAccount:(id)arg1;
- (id)account;
- (void)setAccount:(id)arg1;
- (BOOL)askForReadReceipt;
- (void)setAskForReadReceipt:(BOOL)arg1;
- (int)deliveryStatus;
- (id)headersForDelivery;
- (id)_headersForDeliveryFromHeaders:(id)arg1;
- (void)deliverAsynchronously;
- (int)deliverSynchronously;
- (int)deliverMessageHeaderData:(id)arg1 bodyData:(id)arg2 toRecipients:(id)arg3;

@end


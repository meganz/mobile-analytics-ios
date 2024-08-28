#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MEGAAOSAppIdentifier, MEGAAOSAnalyticsEvent, MEGAAOSGeneralEvent, MEGAAOSItemSelectedEvent, MEGAAOSNotificationEvent, MEGAAOSScreenViewEvent, MEGAAOSTabSelectedEvent, MEGAAOSKotlinEnumCompanion, MEGAAOSKotlinEnum<E>, MEGAAOSDecodeSequenceMode, MEGAAOSKotlinArray<T>, MEGAAOSSerializersModule, MEGAAOSJsonDefault, MEGAAOSJsonElement, MEGAAOSJsonConfiguration, MEGAAOSJson, MEGAAOSKotlinNothing, MEGAAOSJsonElementCompanion, MEGAAOSJsonNamingStrategyBuiltins, MEGAAOSJsonPrimitiveCompanion, MEGAAOSJsonPrimitive, MEGAAOSJsonNull, MEGAAOSKotlinByteArray, MEGAAOSKotlinThrowable, MEGAAOSKotlinException, MEGAAOSKotlinRuntimeException, MEGAAOSKotlinIllegalArgumentException, MEGAAOSSerializationException, MEGAAOSAbstractPolymorphicSerializer<T>, MEGAAOSAbstractCollectionSerializer<Element, Collection, Builder>, MEGAAOSTaggedDecoder<Tag>, MEGAAOSTaggedEncoder<Tag>, MEGAAOSSerialKind, MEGAAOSPolymorphicKind, MEGAAOSPolymorphicKindOPEN, MEGAAOSPolymorphicKindSEALED, MEGAAOSPrimitiveKind, MEGAAOSPrimitiveKindBOOLEAN, MEGAAOSPrimitiveKindBYTE, MEGAAOSPrimitiveKindCHAR, MEGAAOSPrimitiveKindDOUBLE, MEGAAOSPrimitiveKindFLOAT, MEGAAOSPrimitiveKindINT, MEGAAOSPrimitiveKindLONG, MEGAAOSPrimitiveKindSHORT, MEGAAOSPrimitiveKindSTRING, MEGAAOSSerialKindCONTEXTUAL, MEGAAOSSerialKindENUM, MEGAAOSStructureKind, MEGAAOSStructureKindCLASS, MEGAAOSStructureKindLIST, MEGAAOSStructureKindMAP, MEGAAOSStructureKindOBJECT, MEGAAOSLongAsStringSerializer, MEGAAOSCompositeDecoderCompanion, MEGAAOSAccountActivatedEvent, MEGAAOSAccountScreenEvent, MEGAAOSAccountScreenHeaderTappedEvent, MEGAAOSAddItemsToExistingAlbumFABEvent, MEGAAOSAddItemsToNewAlbumButtonEvent, MEGAAOSAddItemsToNewAlbumFABEvent, MEGAAOSAddSubtitleDialogEvent, MEGAAOSAddSubtitlePressedEvent, MEGAAOSAddSubtitlesOptionPressedEvent, MEGAAOSAddSyncScreenEvent, MEGAAOSAlbumAddPhotosFABEvent, MEGAAOSAlbumContentDeleteAlbumEvent, MEGAAOSAlbumContentHideNodeMenuItemEvent, MEGAAOSAlbumContentRemoveItemsEvent, MEGAAOSAlbumContentScreenEvent, MEGAAOSAlbumContentShareLinkMenuToolbarEvent, MEGAAOSAlbumDeselectAllEvent, MEGAAOSAlbumImportInputDecryptionKeyDialogEvent, MEGAAOSAlbumImportSaveToCloudDriveButtonEvent, MEGAAOSAlbumImportSaveToDeviceButtonEvent, MEGAAOSAlbumImportScreenEvent, MEGAAOSAlbumImportStorageOverQuotaDialogEvent, MEGAAOSAlbumListShareLinkMenuItemEvent, MEGAAOSAlbumPhotosSelectionAllLocationsButtonEvent, MEGAAOSAlbumPhotosSelectionCameraUploadsButtonEvent, MEGAAOSAlbumPhotosSelectionCloudDriveButtonEvent, MEGAAOSAlbumPhotosSelectionFilterMenuToolbarEvent, MEGAAOSAlbumPhotosSelectionScreenEvent, MEGAAOSAlbumSelectedSelectionType, MEGAAOSAlbumsListDeleteAlbumsEvent, MEGAAOSAlbumsStorageOverQuotaUpgradeAccountButtonEvent, MEGAAOSAlbumsTabEvent, MEGAAOSAndroidSyncChooseLatestModifiedTimeEvent, MEGAAOSAndroidSyncChooseLocalFileEvent, MEGAAOSAndroidSyncChooseRemoteFileEvent, MEGAAOSAndroidSyncClearResolvedIssuesEvent, MEGAAOSAndroidSyncFABButtonEvent, MEGAAOSAndroidSyncGetStartedButtonEvent, MEGAAOSAndroidSyncMergeFoldersEvent, MEGAAOSAndroidSyncNavigationItemEvent, MEGAAOSAndroidSyncRemoveDuplicatesAndRemoveRestEvent, MEGAAOSAndroidSyncRemoveDuplicatesEvent, MEGAAOSAndroidSyncRenameAllItemsEvent, MEGAAOSAndroidSyncStartSyncButtonEvent, MEGAAOSAudioPlayerHideNodeMenuItemEvent, MEGAAOSAutoMatchSubtitleOptionPressedEvent, MEGAAOSBusinessRestrictionsBannerActionButtonPressedEvent, MEGAAOSBusinessUserRestrictionsScreenEvent, MEGAAOSBuyProIEvent, MEGAAOSBuyProIIEvent, MEGAAOSBuyProIIIEvent, MEGAAOSBuyProLiteEvent, MEGAAOSCallLowerHandEvent, MEGAAOSCallRaiseHandEvent, MEGAAOSCallScreenEvent, MEGAAOSCancelSelectSubtitlePressedEvent, MEGAAOSCancelSubscriptionButtonPressedEvent, MEGAAOSCancelSubscriptionContinueCancellationButtonPressedEvent, MEGAAOSCancelSubscriptionKeepPlanButtonPressedEvent, MEGAAOSCancelSubscriptionMenuToolbarEvent, MEGAAOSCancelUpgradeMyAccountEvent, MEGAAOSChatConversationAddAttachmentButtonPressedEvent, MEGAAOSChatConversationAddParticipantsMenuToolbarEvent, MEGAAOSChatConversationAddToCloudDriveActionMenuEvent, MEGAAOSChatConversationAddToCloudDriveActionMenuItemEvent, MEGAAOSChatConversationArchiveMenuToolbarEvent, MEGAAOSChatConversationAvailableOfflineActionMenuItemEvent, MEGAAOSChatConversationCallMenuToolbarEvent, MEGAAOSChatConversationClearMenuToolbarEvent, MEGAAOSChatConversationContactMenuItemEvent, MEGAAOSChatConversationCopyActionMenuEvent, MEGAAOSChatConversationCopyActionMenuItemEvent, MEGAAOSChatConversationDeleteActionMenuEvent, MEGAAOSChatConversationDownloadActionMenuEvent, MEGAAOSChatConversationEditActionMenuEvent, MEGAAOSChatConversationEditActionMenuItemEvent, MEGAAOSChatConversationEndCallForAllMenuToolbarEvent, MEGAAOSChatConversationFileMenuItemEvent, MEGAAOSChatConversationForwardActionMenuEvent, MEGAAOSChatConversationForwardActionMenuItemEvent, MEGAAOSChatConversationGIFMenuItemEvent, MEGAAOSChatConversationGalleryMenuItemEvent, MEGAAOSChatConversationHomeUpMenuToolbarEvent, MEGAAOSChatConversationInfoActionMenuItemEvent, MEGAAOSChatConversationInfoMenuToolbarEvent, MEGAAOSChatConversationInviteActionMenuEvent, MEGAAOSChatConversationInviteActionMenuItemEvent, MEGAAOSChatConversationLeaveMenuToolbarEvent, MEGAAOSChatConversationLocationMenuItemEvent, MEGAAOSChatConversationMuteMenuToolbarEvent, MEGAAOSChatConversationOpenWithActionMenuItemEvent, MEGAAOSChatConversationRemoveActionMenuItemEvent, MEGAAOSChatConversationResumeTransfersMenuItemEvent, MEGAAOSChatConversationRetryMenuItemEvent, MEGAAOSChatConversationSaveToDeviceActionMenuItemEvent, MEGAAOSChatConversationScanMenuItemEvent, MEGAAOSChatConversationScreenEvent, MEGAAOSChatConversationSelectActionMenuItemEvent, MEGAAOSChatConversationSelectMenuToolbarEvent, MEGAAOSChatConversationSendImageFilesFloatingActionButtonPressedEvent, MEGAAOSChatConversationSendMessageActionMenuEvent, MEGAAOSChatConversationSendMessageActionMenuItemEvent, MEGAAOSChatConversationShareActionMenuEvent, MEGAAOSChatConversationShareActionMenuItemEvent, MEGAAOSChatConversationTakePictureMenuItemEvent, MEGAAOSChatConversationUnarchiveMenuToolbarEvent, MEGAAOSChatConversationUnmuteMenuToolbarEvent, MEGAAOSChatConversationVideoMenuItemEvent, MEGAAOSChatConversationVideoMenuToolbarEvent, MEGAAOSChatConversationViewContactsActionMenuItemEvent, MEGAAOSChatConversationVoiceClipMenuItemEvent, MEGAAOSChatConversationVoiceMenuItemEvent, MEGAAOSChatImageAttachmentItemSelectedSelectionType, MEGAAOSChatMessageLongPressedEvent, MEGAAOSChatRoomsBottomNavigationItemEvent, MEGAAOSChatRoomsStartConversationMenuEvent, MEGAAOSChatScreenEvent, MEGAAOSChatTabFABPressedEvent, MEGAAOSChatsTabEvent, MEGAAOSCloudDriveAddMenuEvent, MEGAAOSCloudDriveBottomNavigationItemEvent, MEGAAOSCloudDriveChooseFromPhotosMenuToolbarEvent, MEGAAOSCloudDriveFABPressedEvent, MEGAAOSCloudDriveHideNodeMenuItemEvent, MEGAAOSCloudDriveImportFromFilesMenuToolbarEvent, MEGAAOSCloudDriveNewFolderMenuToolbarEvent, MEGAAOSCloudDriveNewTextFileMenuToolbarEvent, MEGAAOSCloudDriveScreenEvent, MEGAAOSCloudDriveSearchMenuToolbarEvent, MEGAAOSCloudDriveUploadFilesMenuToolbarEvent, MEGAAOSCloudDriveUploadFolderMenuToolbarEvent, MEGAAOSConnectVPNTogglePressedEvent, MEGAAOSCopyLinkToPasteboardPressedEvent, MEGAAOSCreateAccountButtonPressedEvent, MEGAAOSCreateAlbumDialogButtonPressedEvent, MEGAAOSCreateAlbumFABEvent, MEGAAOSCreateMeetingMaxDurationReachedEvent, MEGAAOSCreateNewAlbumDialogEvent, MEGAAOSDeleteAlbumCancelButtonPressedEvent, MEGAAOSDeleteAlbumConfirmButtonPressedEvent, MEGAAOSDeleteAlbumsConfirmationDialogEvent, MEGAAOSDeviceCenterDeviceOptionsButtonEvent, MEGAAOSDeviceCenterEntrypointButtonEvent, MEGAAOSDeviceCenterItemClickedItemType, MEGAAOSDeviceCenterSaveNewDeviceNameButtonEvent, MEGAAOSDocumentPreviewHideNodeMenuItemEvent, MEGAAOSEditMeetingMaxDurationReachedEvent, MEGAAOSEditSingleOccurrenceMeetingMaxDurationReachedEvent, MEGAAOSEmailConfirmationScreenEvent, MEGAAOSForgotPasscodeButtonPressedEvent, MEGAAOSGenericAppPushNotificationReceivedEvent, MEGAAOSGenericAppPushNotificationTappedEvent, MEGAAOSGroupChatPressedEvent, MEGAAOSHiddenNodeOnboardingCloseButtonPressedEvent, MEGAAOSHiddenNodeOnboardingContinueButtonPressedEvent, MEGAAOSHiddenNodeUpgradeCloseButtonPressedEvent, MEGAAOSHiddenNodeUpgradeUpgradeButtonPressedEvent, MEGAAOSHideNodeOnboardingScreenEvent, MEGAAOSHideNodeUpgradeScreenEvent, MEGAAOSHomeChooseFromPhotosMenuToolbarEvent, MEGAAOSHomeFABClosedEvent, MEGAAOSHomeFABExpandedEvent, MEGAAOSHomeFABPressedEvent, MEGAAOSHomeHideNodeMenuItemEvent, MEGAAOSHomeImportFromFilesMenuToolbarEvent, MEGAAOSHomeNewChatFABPressedEvent, MEGAAOSHomeNewChatTextPressedEvent, MEGAAOSHomeNewTextFileMenuToolbarEvent, MEGAAOSHomeScreenAudioTilePressedEvent, MEGAAOSHomeScreenDocsTilePressedEvent, MEGAAOSHomeScreenEvent, MEGAAOSHomeScreenSearchMenuToolbarEvent, MEGAAOSHomeScreenVideosTilePressedEvent, MEGAAOSHomeUploadFABPressedEvent, MEGAAOSHomeUploadFilesMenuToolbarEvent, MEGAAOSHomeUploadFolderMenuToolbarEvent, MEGAAOSHomeUploadTextPressedEvent, MEGAAOSIOSGuestEndCallFreePlanUsersLimitDialogEvent, MEGAAOSIOSStartConversationButtonEvent, MEGAAOSIOSUploadFilesButtonEvent, MEGAAOSImagePreviewHideNodeMenuToolBarEvent, MEGAAOSImportAlbumContentLoadedEvent, MEGAAOSInAppUpdateCancelButtonPressedEvent, MEGAAOSInAppUpdateDownloadSuccessMessageDisplayedEvent, MEGAAOSInAppUpdateRestartButtonPressedEvent, MEGAAOSInAppUpdateUpdateButtonPressedEvent, MEGAAOSIncomingSharesTabEvent, MEGAAOSInviteContactScreenEvent, MEGAAOSInviteContactsPressedEvent, MEGAAOSInviteFriendsLearnMorePressedEvent, MEGAAOSInviteFriendsPressedEvent, MEGAAOSInviteToMEGAAddFromContactsEvent, MEGAAOSInviteToMEGAEnterEmailAddressEvent, MEGAAOSInviteToMEGAPressedEvent, MEGAAOSInviteToMEGAScanCodeEvent, MEGAAOSInviteToMEGAShareInviteEvent, MEGAAOSJoinMeetingPressedEvent, MEGAAOSLinkConfirmPasswordFileButtonPressedEvent, MEGAAOSLinkConfirmPasswordFolderButtonPressedEvent, MEGAAOSLinkGetLinkForNodesMenuItemEvent, MEGAAOSLinkGetLinkForNodesMenuToolbarEvent, MEGAAOSLinkManageLinkTapFileMenuItemEvent, MEGAAOSLinkManageLinkTapFileMenuToolbarEvent, MEGAAOSLinkManageLinkTapFolderMenuItemEvent, MEGAAOSLinkManageLinkTapFolderMenuToolbarEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressedEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFileDialogEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent, MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialogEvent, MEGAAOSLinkProFeatureSeePlanFileButtonPressedEvent, MEGAAOSLinkProFeatureSeePlanFileDialogEvent, MEGAAOSLinkProFeatureSeePlanFolderButtonPressedEvent, MEGAAOSLinkProFeatureSeePlanFolderDialogEvent, MEGAAOSLinkRemovePasswordFileButtonPressedEvent, MEGAAOSLinkRemovePasswordFolderButtonPressedEvent, MEGAAOSLinkResetPasswordFileButtonPressedEvent, MEGAAOSLinkResetPasswordFolderButtonPressedEvent, MEGAAOSLinkSendDecryptionKeyFileButtonPressedEvent, MEGAAOSLinkSendDecryptionKeyFolderButtonPressedEvent, MEGAAOSLinkSetExpiryDateFileButtonPressedEvent, MEGAAOSLinkSetExpiryDateFolderButtonPressedEvent, MEGAAOSLinkSetPasswordFileButtonPressedEvent, MEGAAOSLinkSetPasswordFolderButtonPressedEvent, MEGAAOSLinkShareLinkForNodesMenuItemEvent, MEGAAOSLinkShareLinkForNodesMenuToolbarEvent, MEGAAOSLinkShareLinkTapFileMenuItemEvent, MEGAAOSLinkShareLinkTapFileMenuToolbarEvent, MEGAAOSLinkShareLinkTapFolderMenuItemEvent, MEGAAOSLinkShareLinkTapFolderMenuToolbarEvent, MEGAAOSLinkSharesTabEvent, MEGAAOSLockButtonPressedEvent, MEGAAOSLoginButtonPressedEvent, MEGAAOSLoginScreenEvent, MEGAAOSLogoutButtonPressedEvent, MEGAAOSLoopButtonPressedEvent, MEGAAOSMainTabBarScreenEvent, MEGAAOSMaxCallDurationReachedModalEvent, MEGAAOSMeetingsTabEvent, MEGAAOSMultiFactorAuthScreenEvent, MEGAAOSMultiFactorAuthVerificationFailedEvent, MEGAAOSMultiFactorAuthVerificationSuccessEvent, MEGAAOSMultipleAlbumLinksScreenEvent, MEGAAOSMyAccountHallScreenEvent, MEGAAOSMyAccountProfileNavigationItemEvent, MEGAAOSNewChatScreenEvent, MEGAAOSNodeInfoDescriptionAddedMessageDisplayedEvent, MEGAAOSNodeInfoDescriptionCharacterLimitEvent, MEGAAOSNodeInfoDescriptionConfirmedEvent, MEGAAOSNodeInfoDescriptionEnteredEvent, MEGAAOSNodeInfoDescriptionUpdatedMessageDisplayedEvent, MEGAAOSNodeInfoScreenEvent, MEGAAOSNodeInfoTagsAddedEvent, MEGAAOSNodeInfoTagsEnteredEvent, MEGAAOSNodeInfoTagsLengthErrorDisplayedEvent, MEGAAOSNodeInfoTagsLimitErrorDisplayedEvent, MEGAAOSNodeInfoTagsProOnlyEnteredEvent, MEGAAOSNodeInfoTagsRemovedEvent, MEGAAOSOffOptionForHideSubtitlePressedEvent, MEGAAOSOfflineTabEvent, MEGAAOSOnboardingUpsellingDialogVariantAViewProPlansButtonEvent, MEGAAOSOnboardingUpsellingDialogVariantBBuyProPlanButtonEvent, MEGAAOSOnboardingUpsellingDialogVariantBFreePlanContinueButtonPressedEvent, MEGAAOSOnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressedEvent, MEGAAOSOnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressedEvent, MEGAAOSOnboardingUpsellingDialogVariantBProIPlanContinueButtonPressedEvent, MEGAAOSOnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressedEvent, MEGAAOSOnboardingUpsellingDialogVariantBProPlanIIIDisplayedEvent, MEGAAOSOutgoingSharesTabEvent, MEGAAOSPasscodeBiometricUnlockDialogEvent, MEGAAOSPasscodeEnteredEvent, MEGAAOSPasscodeLogoutButtonPressedEvent, MEGAAOSPasscodeScreenEvent, MEGAAOSPasscodeSettingScreenEvent, MEGAAOSPasscodeUnlockDialogEvent, MEGAAOSPasswordReminderScreenEvent, MEGAAOSPhotoItemSelectedSelectionType, MEGAAOSPhotoPreviewSaveToDeviceMenuToolbarEvent, MEGAAOSPhotoPreviewScreenEvent, MEGAAOSPhotoScreenEvent, MEGAAOSPlaySlideshowMenuToolbarEvent, MEGAAOSQuickAccessWidgetFavouritesPressedEvent, MEGAAOSQuickAccessWidgetOffilePressedEvent, MEGAAOSQuickAccessWidgetRecentsPressedEvent, MEGAAOSRecentsTabEvent, MEGAAOSRecoveryKeyScreenEvent, MEGAAOSRemoveItemsFromAlbumDialogButtonEvent, MEGAAOSRemoveLinksConfirmationDialogEvent, MEGAAOSResendEmailConfirmationButtonPressedEvent, MEGAAOSScheduleMeetingMenuItemEvent, MEGAAOSScheduleMeetingPressedEvent, MEGAAOSScheduledMeetingCancelMenuItemEvent, MEGAAOSScheduledMeetingCreateConfirmButtonEvent, MEGAAOSScheduledMeetingEditMenuItemEvent, MEGAAOSScheduledMeetingEditMenuToolbarEvent, MEGAAOSScheduledMeetingJoinGuestButtonEvent, MEGAAOSScheduledMeetingReminderNotificationJoinButtonEvent, MEGAAOSScheduledMeetingReminderNotificationMessageButtonEvent, MEGAAOSScheduledMeetingSettingEnableMeetingLinkButtonEvent, MEGAAOSScheduledMeetingSettingEnableOpenInviteButtonEvent, MEGAAOSScheduledMeetingSettingRecurrenceButtonEvent, MEGAAOSScheduledMeetingSettingSendCalendarInviteButtonEvent, MEGAAOSScheduledMeetingShareMeetingLinkButtonEvent, MEGAAOSSearchAudioFilterPressedEvent, MEGAAOSSearchDateAddedDropdownChipPressedEvent, MEGAAOSSearchDateAddedLastSevenDaysClickedEvent, MEGAAOSSearchDateAddedLastThirtyDaysClickedEvent, MEGAAOSSearchDateAddedLastYearClickedEvent, MEGAAOSSearchDateAddedOlderClickedEvent, MEGAAOSSearchDateAddedThisYearClickedEvent, MEGAAOSSearchDateAddedTodayClickedEvent, MEGAAOSSearchDocsFilterPressedEvent, MEGAAOSSearchFileTypeAudioOptionClickedEvent, MEGAAOSSearchFileTypeDocumentsOptionClickedEvent, MEGAAOSSearchFileTypeDropdownChipPressedEvent, MEGAAOSSearchFileTypeFolderOptionClickedEvent, MEGAAOSSearchFileTypeImagesOptionClickedEvent, MEGAAOSSearchFileTypeOtherOptionClickedEvent, MEGAAOSSearchFileTypePdfOptionClickedEvent, MEGAAOSSearchFileTypePresentationOptionClickedEvent, MEGAAOSSearchFileTypeSpreadsheetOptionClickedEvent, MEGAAOSSearchFileTypeVideoOptionClickedEvent, MEGAAOSSearchImageFilterPressedEvent, MEGAAOSSearchItemSelectedSearchItemType, MEGAAOSSearchLastModifiedDropdownChipPressedEvent, MEGAAOSSearchLastModifiedLastSevenDaysClickedEvent, MEGAAOSSearchLastModifiedLastThirtyDaysClickedEvent, MEGAAOSSearchLastModifiedLastYearClickedEvent, MEGAAOSSearchLastModifiedOlderClickedEvent, MEGAAOSSearchLastModifiedThisYearClickedEvent, MEGAAOSSearchLastModifiedTodayClickedEvent, MEGAAOSSearchModeEnablePressedEvent, MEGAAOSSearchResetFilterPressedEvent, MEGAAOSSearchResultGetLinkMenuItemEvent, MEGAAOSSearchResultOpenWithMenuItemEvent, MEGAAOSSearchResultOverflowMenuItemEvent, MEGAAOSSearchResultSaveToDeviceMenuItemEvent, MEGAAOSSearchResultShareMenuItemEvent, MEGAAOSSearchVideosFilterPressedEvent, MEGAAOSSendLinkToChatPressedEvent, MEGAAOSSettingsScreenEvent, MEGAAOSShareLinkBarButtonPressedEvent, MEGAAOSShareLinkPressedEvent, MEGAAOSSharedItemsScreenEvent, MEGAAOSShortcutWidgetAddContactButtonPressedEvent, MEGAAOSShortcutWidgetScanDocumentButtonPressedEvent, MEGAAOSShortcutWidgetStartConversationButtonPressedEvent, MEGAAOSShortcutWidgetUploadFileButtonPressedEvent, MEGAAOSSignUpButtonOnLoginPagePressedEvent, MEGAAOSSignUpButtonOnUSPPagePressedEvent, MEGAAOSSignUpScreenEvent, MEGAAOSSingleAlbumLinkScreenEvent, MEGAAOSSlideShowScreenEvent, MEGAAOSSlideshowSettingOrderNewestButtonEvent, MEGAAOSSlideshowSettingOrderOldestButtonEvent, MEGAAOSSlideshowSettingOrderShuffleButtonEvent, MEGAAOSSlideshowSettingRepeatOffButtonEvent, MEGAAOSSlideshowSettingRepeatOnButtonEvent, MEGAAOSSlideshowSettingSpeedFastButtonEvent, MEGAAOSSlideshowSettingSpeedNormalButtonEvent, MEGAAOSSlideshowSettingSpeedSlowButtonEvent, MEGAAOSSnapshotButtonPressedEvent, MEGAAOSSpeedOption0_5XPressedEvent, MEGAAOSSpeedOption1_5XPressedEvent, MEGAAOSSpeedOption2XPressedEvent, MEGAAOSSpeedSelectedDialogEvent, MEGAAOSStartMeetingNowPressedEvent, MEGAAOSSubscribeButtonHomeBannerPressedEvent, MEGAAOSSubscribeButtonPressedEvent, MEGAAOSSubscribeButtonSettingsBannerPressedEvent, MEGAAOSSubscriptionCancellationSurveyCancelSubscriptionButtonEvent, MEGAAOSSubscriptionCancellationSurveyCancelViewButtonEvent, MEGAAOSSubscriptionCancellationSurveyDontCancelButtonEvent, MEGAAOSSubscriptionCancellationSurveyScreenEvent, MEGAAOSSubscriptionCancelledEvent, MEGAAOSSubscriptionFailedEvent, MEGAAOSSubscriptionScreenEvent, MEGAAOSSubscriptionSuccessScreenEvent, MEGAAOSSubscriptionSuccessfulEvent, MEGAAOSSyncFeatureUpgradeDialogCancelButtonPressedEvent, MEGAAOSSyncFeatureUpgradeDialogDisplayedEvent, MEGAAOSSyncFeatureUpgradeDialogUpgradeButtonPressedEvent, MEGAAOSSyncListBannerUpgradeButtonPressedEvent, MEGAAOSSyncListEmptyStateUpgradeButtonPressedEvent, MEGAAOSSyncOptionSelectedSelectionType, MEGAAOSTermsOfServiceCloseButtonPressedEvent, MEGAAOSTermsOfServiceScreenEvent, MEGAAOSTestPasswordScreenEvent, MEGAAOSTextEditorHideNodeMenuItemEvent, MEGAAOSTimelineHideNodeMenuItemEvent, MEGAAOSTimelineTabEvent, MEGAAOSToolbarOverflowMenuItemEvent, MEGAAOSTransferOverQuotaDialogEvent, MEGAAOSTransferOverQuotaUpgradeAccountButtonEvent, MEGAAOSUSPScreenEvent, MEGAAOSUnlockButtonPressedEvent, MEGAAOSUpgradeAccountBuyButtonPressedEvent, MEGAAOSUpgradeAccountCancelledEvent, MEGAAOSUpgradeAccountPlanScreenEvent, MEGAAOSUpgradeAccountPurchaseFailedEvent, MEGAAOSUpgradeAccountPurchaseSucceededEvent, MEGAAOSUpgradeMyAccountEvent, MEGAAOSUpgradeToProToGetUnlimitedCallsDialogEvent, MEGAAOSVideoPlayerFullScreenPressedEvent, MEGAAOSVideoPlayerGetLinkMenuToolbarEvent, MEGAAOSVideoPlayerHideNodeMenuItemEvent, MEGAAOSVideoPlayerInfoMenuItemEvent, MEGAAOSVideoPlayerIsActivatedEvent, MEGAAOSVideoPlayerOriginalPressedEvent, MEGAAOSVideoPlayerRemoveLinkMenuToolbarEvent, MEGAAOSVideoPlayerSaveToDeviceMenuToolbarEvent, MEGAAOSVideoPlayerScreenEvent, MEGAAOSVideoPlayerSendToChatMenuToolbarEvent, MEGAAOSVideoPlayerShareMenuToolbarEvent, MEGAAOSWaitingRoomEnableButtonEvent, MEGAAOSWaitingRoomLeaveButtonEvent, MEGAAOSWaitingRoomTimeoutEvent, MEGAAOSJsonArrayBuilder, MEGAAOSJsonObjectBuilder, MEGAAOSSerializersModuleBuilder, MEGAAOSPolymorphicModuleBuilder<__contravariant Base>, MEGAAOSClassSerialDescriptorBuilder, MEGAAOSKotlinBooleanCompanion, MEGAAOSKotlinByteCompanion, MEGAAOSKotlinCharCompanion, MEGAAOSKotlinDoubleCompanion, MEGAAOSKotlinFloatCompanion, MEGAAOSKotlinIntCompanion, MEGAAOSKotlinLongCompanion, MEGAAOSKotlinShortCompanion, MEGAAOSKotlinStringCompanion, MEGAAOSKotlinUByteCompanion, MEGAAOSKotlinUIntCompanion, MEGAAOSKotlinULongCompanion, MEGAAOSKotlinUShortCompanion, MEGAAOSKotlinUnit, MEGAAOSKotlinDurationCompanion, MEGAAOSKotlinDurationUnit, MEGAAOSJsonBuilder, MEGAAOSKotlinIntArray, MEGAAOSKotlinIllegalStateException, MEGAAOSKotlinByteIterator, MEGAAOSKotlinKTypeProjection, MEGAAOSKotlinIntIterator, MEGAAOSKotlinKVariance, MEGAAOSKotlinKTypeProjectionCompanion;

@protocol MEGAAOSPlatform, MEGAAOSKotlinSuspendFunction0, MEGAAOSEventIdentifier, MEGAAOSEventDataMapper, MEGAAOSButtonPressedEventIdentifier, MEGAAOSDialogDisplayedEventIdentifier, MEGAAOSGeneralEventIdentifier, MEGAAOSItemSelectedEventIdentifier, MEGAAOSMenuItemEventIdentifier, MEGAAOSNavigationEventIdentifier, MEGAAOSNotificationEventIdentifier, MEGAAOSScreenViewEventIdentifier, MEGAAOSTabSelectedEventIdentifier, MEGAAOSKotlinComparable, MEGAAOSDeserializationStrategy, MEGAAOSSerializationStrategy, MEGAAOSSerialFormat, MEGAAOSStringFormat, MEGAAOSJsonNamingStrategy, MEGAAOSEncoder, MEGAAOSSerialDescriptor, MEGAAOSDecoder, MEGAAOSKSerializer, MEGAAOSKotlinKClass, MEGAAOSCompositeDecoder, MEGAAOSCompositeEncoder, MEGAAOSKotlinIterator, MEGAAOSKotlinMapEntry, MEGAAOSSerializersModuleCollector, MEGAAOSKotlinAnnotation, MEGAAOSViewIdProvider, MEGAAOSEventSender, MEGAAOSKotlinKType, MEGAAOSBinaryFormat, MEGAAOSKotlinFunction, MEGAAOSKotlinKDeclarationContainer, MEGAAOSKotlinKAnnotatedElement, MEGAAOSKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MEGAAOSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface MEGAAOSBase (MEGAAOSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface MEGAAOSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MEGAAOSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorMEGAAOSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface MEGAAOSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface MEGAAOSByte : MEGAAOSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface MEGAAOSUByte : MEGAAOSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface MEGAAOSShort : MEGAAOSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface MEGAAOSUShort : MEGAAOSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface MEGAAOSInt : MEGAAOSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface MEGAAOSUInt : MEGAAOSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface MEGAAOSLong : MEGAAOSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface MEGAAOSULong : MEGAAOSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface MEGAAOSFloat : MEGAAOSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface MEGAAOSDouble : MEGAAOSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface MEGAAOSBoolean : MEGAAOSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Platform")))
@protocol MEGAAOSPlatform
@required
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface MEGAAOSIOSPlatform : MEGAAOSBase <MEGAAOSPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t baseIdentifier __attribute__((swift_name("baseIdentifier")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EventGenerator")))
@interface MEGAAOSEventGenerator : MEGAAOSBase
- (instancetype)initWithViewIdProvider:(id<MEGAAOSKotlinSuspendFunction0>)viewIdProvider appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(viewIdProvider:appIdentifier:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)generateEventEventIdentifier:(id<MEGAAOSEventIdentifier>)eventIdentifier completionHandler:(void (^)(MEGAAOSAnalyticsEvent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("generateEvent(eventIdentifier:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppIdentifier")))
@interface MEGAAOSAppIdentifier : MEGAAOSBase
- (instancetype)initWithId:(int32_t)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (MEGAAOSAppIdentifier *)doCopyId:(int32_t)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t identifier __attribute__((swift_name("identifier")));
@end

__attribute__((swift_name("EventIdentifier")))
@protocol MEGAAOSEventIdentifier
@required
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ButtonPressedEventIdentifier")))
@protocol MEGAAOSButtonPressedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("DialogDisplayedEventIdentifier")))
@protocol MEGAAOSDialogDisplayedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("GeneralEventIdentifier")))
@protocol MEGAAOSGeneralEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end

__attribute__((swift_name("ItemSelectedEventIdentifier")))
@protocol MEGAAOSItemSelectedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@end

__attribute__((swift_name("MenuItemEventIdentifier")))
@protocol MEGAAOSMenuItemEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString * _Nullable menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@end

__attribute__((swift_name("NavigationEventIdentifier")))
@protocol MEGAAOSNavigationEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) NSString * _Nullable navigationElementType __attribute__((swift_name("navigationElementType")));
@end

__attribute__((swift_name("NotificationEventIdentifier")))
@protocol MEGAAOSNotificationEventIdentifier <MEGAAOSEventIdentifier>
@required
@end

__attribute__((swift_name("ScreenViewEventIdentifier")))
@protocol MEGAAOSScreenViewEventIdentifier <MEGAAOSEventIdentifier>
@required
@end

__attribute__((swift_name("TabSelectedEventIdentifier")))
@protocol MEGAAOSTabSelectedEventIdentifier <MEGAAOSEventIdentifier>
@required
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@end

__attribute__((swift_name("AnalyticsEvent")))
@interface MEGAAOSAnalyticsEvent : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (int32_t)getEventIdentifier __attribute__((swift_name("getEventIdentifier()")));
- (NSString *)getEventMessageMapper:(id<MEGAAOSEventDataMapper>)mapper __attribute__((swift_name("getEventMessage(mapper:)")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonPressedEvent")))
@interface MEGAAOSButtonPressedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSButtonPressedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSButtonPressedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DialogDisplayedEvent")))
@interface MEGAAOSDialogDisplayedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSDialogDisplayedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSDialogDisplayedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeneralEvent")))
@interface MEGAAOSGeneralEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSGeneralEvent *)doCopyEventIdentifier:(id<MEGAAOSGeneralEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSGeneralEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemSelectedEvent")))
@interface MEGAAOSItemSelectedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSItemSelectedEvent *)doCopyEventIdentifier:(id<MEGAAOSItemSelectedEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSItemSelectedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MenuItemEvent")))
@interface MEGAAOSMenuItemEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSMenuItemEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSMenuItemEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationEvent")))
@interface MEGAAOSNavigationEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSNavigationEventIdentifier>)eventIdentifier viewId:(NSString * _Nullable)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSNavigationEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationEvent")))
@interface MEGAAOSNotificationEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSNotificationEventIdentifier>)eventIdentifier appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSNotificationEvent *)doCopyEventIdentifier:(id<MEGAAOSNotificationEventIdentifier>)eventIdentifier appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:appIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSNotificationEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenViewEvent")))
@interface MEGAAOSScreenViewEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSScreenViewEvent *)doCopyEventIdentifier:(id<MEGAAOSScreenViewEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSScreenViewEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString *viewId __attribute__((swift_name("viewId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TabSelectedEvent")))
@interface MEGAAOSTabSelectedEvent : MEGAAOSAnalyticsEvent
- (instancetype)initWithEventIdentifier:(id<MEGAAOSTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("init(eventIdentifier:viewId:appIdentifier:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (MEGAAOSTabSelectedEvent *)doCopyEventIdentifier:(id<MEGAAOSTabSelectedEventIdentifier>)eventIdentifier viewId:(NSString *)viewId appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier __attribute__((swift_name("doCopy(eventIdentifier:viewId:appIdentifier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSAppIdentifier *appIdentifier __attribute__((swift_name("appIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSDictionary<NSString *, id> *eventData __attribute__((swift_name("eventData")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<MEGAAOSTabSelectedEventIdentifier> eventIdentifier __attribute__((swift_name("eventIdentifier")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) int32_t eventTypeIdentifier __attribute__((swift_name("eventTypeIdentifier")));
@property (readonly) NSString *viewId __attribute__((swift_name("viewId")));
@end

__attribute__((swift_name("EventDataMapper")))
@protocol MEGAAOSEventDataMapper
@required
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonMapper")))
@interface MEGAAOSJsonMapper : MEGAAOSBase <MEGAAOSEventDataMapper>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)mapDataEventData:(NSDictionary<NSString *, id> *)eventData __attribute__((swift_name("mapData(eventData:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol MEGAAOSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface MEGAAOSKotlinEnum<E> : MEGAAOSBase <MEGAAOSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MEGAAOSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodeSequenceMode")))
@interface MEGAAOSDecodeSequenceMode : MEGAAOSKotlinEnum<MEGAAOSDecodeSequenceMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSDecodeSequenceMode *whitespaceSeparated __attribute__((swift_name("whitespaceSeparated")));
@property (class, readonly) MEGAAOSDecodeSequenceMode *arrayWrapped __attribute__((swift_name("arrayWrapped")));
@property (class, readonly) MEGAAOSDecodeSequenceMode *autoDetect __attribute__((swift_name("autoDetect")));
+ (MEGAAOSKotlinArray<MEGAAOSDecodeSequenceMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("SerialFormat")))
@protocol MEGAAOSSerialFormat
@required
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("StringFormat")))
@protocol MEGAAOSStringFormat <MEGAAOSSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Json")))
@interface MEGAAOSJson : MEGAAOSBase <MEGAAOSStringFormat>
@property (class, readonly, getter=companion) MEGAAOSJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer element:(MEGAAOSJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (MEGAAOSJsonElement *)encodeToJsonElementSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (MEGAAOSJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) MEGAAOSJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Json.Default")))
@interface MEGAAOSJsonDefault : MEGAAOSJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonArray")))
@interface MEGAAOSJsonArray : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonArrayBuilder")))
@interface MEGAAOSJsonArrayBuilder : MEGAAOSBase
- (BOOL)addElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("add(element:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllElements:(id)elements __attribute__((swift_name("addAll(elements:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonBuilder")))
@interface MEGAAOSJsonBuilder : MEGAAOSBase
@property BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property id<MEGAAOSJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConfiguration")))
@interface MEGAAOSJsonConfiguration : MEGAAOSBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAAOSJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("SerializationStrategy")))
@protocol MEGAAOSSerializationStrategy
@required
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("DeserializationStrategy")))
@protocol MEGAAOSDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("KSerializer")))
@protocol MEGAAOSKSerializer <MEGAAOSSerializationStrategy, MEGAAOSDeserializationStrategy>
@required
@end

__attribute__((swift_name("JsonContentPolymorphicSerializer")))
@interface MEGAAOSJsonContentPolymorphicSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithBaseClass:(id<MEGAAOSKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSDeserializationStrategy>)selectDeserializerElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Decoder")))
@protocol MEGAAOSDecoder
@required
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("CompositeDecoder")))
@protocol MEGAAOSCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JsonDecoder")))
@protocol MEGAAOSJsonDecoder <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
@required
- (MEGAAOSJsonElement *)decodeJsonElement __attribute__((swift_name("decodeJsonElement()")));
@property (readonly) MEGAAOSJson *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("JsonElement")))
@interface MEGAAOSJsonElement : MEGAAOSBase
@property (class, readonly, getter=companion) MEGAAOSJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElement.Companion")))
@interface MEGAAOSJsonElementCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Encoder")))
@protocol MEGAAOSEncoder
@required
- (id<MEGAAOSCompositeEncoder>)beginCollectionDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("CompositeEncoder")))
@protocol MEGAAOSCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("JsonEncoder")))
@protocol MEGAAOSJsonEncoder <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
@required
- (void)encodeJsonElementElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("encodeJsonElement(element:)")));
@property (readonly) MEGAAOSJson *json __attribute__((swift_name("json")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("JsonNamingStrategy")))
@protocol MEGAAOSJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNamingStrategyBuiltins")))
@interface MEGAAOSJsonNamingStrategyBuiltins : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)builtins __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonNamingStrategyBuiltins *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<MEGAAOSJsonNamingStrategy> SnakeCase __attribute__((swift_name("SnakeCase")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonPrimitiveSerializer))
*/
__attribute__((swift_name("JsonPrimitive")))
@interface MEGAAOSJsonPrimitive : MEGAAOSJsonElement
@property (class, readonly, getter=companion) MEGAAOSJsonPrimitiveCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonNullSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonNull")))
@interface MEGAAOSJsonNull : MEGAAOSJsonPrimitive
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)jsonNull __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonNull *shared __attribute__((swift_name("shared")));
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<MEGAAOSKSerializer>)serializerTypeParamsSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) BOOL isString __attribute__((swift_name("isString")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("JsonObject")))
@interface MEGAAOSJsonObject : NSObject
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonObjectBuilder")))
@interface MEGAAOSJsonObjectBuilder : MEGAAOSBase
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key element:(MEGAAOSJsonElement *)element __attribute__((swift_name("put(key:element:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonPrimitive.Companion")))
@interface MEGAAOSJsonPrimitiveCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJsonPrimitiveCompanion *shared __attribute__((swift_name("shared")));
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("JsonTransformingSerializer")))
@interface MEGAAOSJsonTransformingSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithTSerializer:(id<MEGAAOSKSerializer>)tSerializer __attribute__((swift_name("init(tSerializer:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSJsonElement *)transformDeserializeElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("transformDeserialize(element:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSJsonElement *)transformSerializeElement:(MEGAAOSJsonElement *)element __attribute__((swift_name("transformSerialize(element:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("BinaryFormat")))
@protocol MEGAAOSBinaryFormat <MEGAAOSSerialFormat>
@required
- (id _Nullable)decodeFromByteArrayDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer bytes:(MEGAAOSKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(deserializer:bytes:)")));
- (MEGAAOSKotlinByteArray *)encodeToByteArraySerializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(serializer:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextualSerializer")))
@interface MEGAAOSContextualSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (instancetype)initWithSerializableClass:(id<MEGAAOSKotlinKClass>)serializableClass __attribute__((swift_name("init(serializableClass:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSerializableClass:(id<MEGAAOSKotlinKClass>)serializableClass fallbackSerializer:(id<MEGAAOSKSerializer> _Nullable)fallbackSerializer typeArgumentsSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("init(serializableClass:fallbackSerializer:typeArgumentsSerializers:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface MEGAAOSKotlinThrowable : MEGAAOSBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (MEGAAOSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MEGAAOSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface MEGAAOSKotlinException : MEGAAOSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface MEGAAOSKotlinRuntimeException : MEGAAOSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface MEGAAOSKotlinIllegalArgumentException : MEGAAOSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("SerializationException")))
@interface MEGAAOSSerializationException : MEGAAOSKotlinIllegalArgumentException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MissingFieldException")))
@interface MEGAAOSMissingFieldException : MEGAAOSSerializationException
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields serialName:(NSString *)serialName __attribute__((swift_name("init(missingFields:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingField:(NSString *)missingField serialName:(NSString *)serialName __attribute__((swift_name("init(missingField:serialName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMissingFields:(NSArray<NSString *> *)missingFields message:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(missingFields:message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSArray<NSString *> *missingFields __attribute__((swift_name("missingFields")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractPolymorphicSerializer")))
@interface MEGAAOSAbstractPolymorphicSerializer<T> : MEGAAOSBase <MEGAAOSKSerializer>
- (T)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicSerializer")))
@interface MEGAAOSPolymorphicSerializer<T> : MEGAAOSAbstractPolymorphicSerializer<T>
- (instancetype)initWithBaseClass:(id<MEGAAOSKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SealedClassSerializer")))
@interface MEGAAOSSealedClassSerializer<T> : MEGAAOSAbstractPolymorphicSerializer<T>
- (instancetype)initWithSerialName:(NSString *)serialName baseClass:(id<MEGAAOSKotlinKClass>)baseClass subclasses:(MEGAAOSKotlinArray<id<MEGAAOSKotlinKClass>> *)subclasses subclassSerializers:(MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)subclassSerializers __attribute__((swift_name("init(serialName:baseClass:subclasses:subclassSerializers:)"))) __attribute__((objc_designated_initializer));
- (id<MEGAAOSDeserializationStrategy> _Nullable)findPolymorphicSerializerOrNullDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializerOrNull(decoder:klassName:)")));
- (id<MEGAAOSSerializationStrategy> _Nullable)findPolymorphicSerializerOrNullEncoder:(id<MEGAAOSEncoder>)encoder value:(T)value __attribute__((swift_name("findPolymorphicSerializerOrNull(encoder:value:)")));
@property (readonly) id<MEGAAOSKotlinKClass> baseClass __attribute__((swift_name("baseClass")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("AbstractCollectionSerializer")))
@interface MEGAAOSAbstractCollectionSerializer<Element, Collection, Builder> : MEGAAOSBase <MEGAAOSKSerializer>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Builder _Nullable)builder __attribute__((swift_name("builder()")));
- (Collection _Nullable)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (Collection _Nullable)mergeDecoder:(id<MEGAAOSDecoder>)decoder previous:(Collection _Nullable)previous __attribute__((swift_name("merge(decoder:previous:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAAOSCompositeDecoder>)decoder builder:(Builder _Nullable)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAAOSCompositeDecoder>)decoder index:(int32_t)index builder:(Builder _Nullable)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)builderSize:(Builder _Nullable)receiver __attribute__((swift_name("builderSize(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)checkCapacity:(Builder _Nullable)receiver size:(int32_t)size __attribute__((swift_name("checkCapacity(_:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSKotlinIterator>)collectionIterator:(Collection _Nullable)receiver __attribute__((swift_name("collectionIterator(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)collectionSize:(Collection _Nullable)receiver __attribute__((swift_name("collectionSize(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Builder _Nullable)toBuilder:(Collection _Nullable)receiver __attribute__((swift_name("toBuilder(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Collection _Nullable)toResult:(Builder _Nullable)receiver __attribute__((swift_name("toResult(_:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("GeneratedSerializer")))
@protocol MEGAAOSGeneratedSerializer <MEGAAOSKSerializer>
@required
- (MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)childSerializers __attribute__((swift_name("childSerializers()")));
- (MEGAAOSKotlinArray<id<MEGAAOSKSerializer>> *)typeParametersSerializers __attribute__((swift_name("typeParametersSerializers()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("MapLikeSerializer")))
@interface MEGAAOSMapLikeSerializer<Key, Value, Collection, Builder> : MEGAAOSAbstractCollectionSerializer<id<MEGAAOSKotlinMapEntry>, Collection, MEGAAOSMutableDictionary<id, id> *>

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readAllDecoder:(id<MEGAAOSCompositeDecoder>)decoder builder:(MEGAAOSMutableDictionary<id, id> *)builder startIndex:(int32_t)startIndex size:(int32_t)size __attribute__((swift_name("readAll(decoder:builder:startIndex:size:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)readElementDecoder:(id<MEGAAOSCompositeDecoder>)decoder index:(int32_t)index builder:(MEGAAOSMutableDictionary<id, id> *)builder checkIndex:(BOOL)checkIndex __attribute__((swift_name("readElement(decoder:index:builder:checkIndex:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(Collection _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)insertKeyValuePair:(MEGAAOSMutableDictionary<id, id> *)receiver index:(int32_t)index key:(Key _Nullable)key value:(Value _Nullable)value __attribute__((swift_name("insertKeyValuePair(_:index:key:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@property (readonly) id<MEGAAOSKSerializer> keySerializer __attribute__((swift_name("keySerializer")));
@property (readonly) id<MEGAAOSKSerializer> valueSerializer __attribute__((swift_name("valueSerializer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("TaggedDecoder")))
@interface MEGAAOSTaggedDecoder<Tag> : MEGAAOSBase <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doCopyTagsToOther:(MEGAAOSTaggedDecoder<Tag> *)other __attribute__((swift_name("doCopyTagsTo(other:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableValue(deserializer:previousValue:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)decodeTaggedBooleanTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedBoolean(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int8_t)decodeTaggedByteTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedByte(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (unichar)decodeTaggedCharTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedChar(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (double)decodeTaggedDoubleTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedDouble(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)decodeTaggedEnumTag:(Tag _Nullable)tag enumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeTaggedEnum(tag:enumDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (float)decodeTaggedFloatTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedFloat(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSDecoder>)decodeTaggedInlineTag:(Tag _Nullable)tag inlineDescriptor:(id<MEGAAOSSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeTaggedInline(tag:inlineDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)decodeTaggedIntTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedInt(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int64_t)decodeTaggedLongTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedLong(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)decodeTaggedNotNullMarkTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedNotNullMark(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (MEGAAOSKotlinNothing * _Nullable)decodeTaggedNullTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedNull(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int16_t)decodeTaggedShortTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedShort(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)decodeTaggedStringTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedString(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id)decodeTaggedValueTag:(Tag _Nullable)tag __attribute__((swift_name("decodeTaggedValue(tag:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)popTag __attribute__((swift_name("popTag()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)pushTagName:(Tag _Nullable)name __attribute__((swift_name("pushTag(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTag __attribute__((swift_name("currentTag")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTagOrNull __attribute__((swift_name("currentTagOrNull")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("NamedValueDecoder")))
@interface MEGAAOSNamedValueDecoder : MEGAAOSTaggedDecoder<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)composeNameParentName:(NSString *)parentName childName:(NSString *)childName __attribute__((swift_name("composeName(parentName:childName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)elementNameDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("elementName(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("TaggedEncoder")))
@interface MEGAAOSTaggedEncoder<Tag> : MEGAAOSBase <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedBooleanTag:(Tag _Nullable)tag value:(BOOL)value __attribute__((swift_name("encodeTaggedBoolean(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedByteTag:(Tag _Nullable)tag value:(int8_t)value __attribute__((swift_name("encodeTaggedByte(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedCharTag:(Tag _Nullable)tag value:(unichar)value __attribute__((swift_name("encodeTaggedChar(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedDoubleTag:(Tag _Nullable)tag value:(double)value __attribute__((swift_name("encodeTaggedDouble(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedEnumTag:(Tag _Nullable)tag enumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor ordinal:(int32_t)ordinal __attribute__((swift_name("encodeTaggedEnum(tag:enumDescriptor:ordinal:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedFloatTag:(Tag _Nullable)tag value:(float)value __attribute__((swift_name("encodeTaggedFloat(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<MEGAAOSEncoder>)encodeTaggedInlineTag:(Tag _Nullable)tag inlineDescriptor:(id<MEGAAOSSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeTaggedInline(tag:inlineDescriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedIntTag:(Tag _Nullable)tag value:(int32_t)value __attribute__((swift_name("encodeTaggedInt(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedLongTag:(Tag _Nullable)tag value:(int64_t)value __attribute__((swift_name("encodeTaggedLong(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedNonNullMarkTag:(Tag _Nullable)tag __attribute__((swift_name("encodeTaggedNonNullMark(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedNullTag:(Tag _Nullable)tag __attribute__((swift_name("encodeTaggedNull(tag:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedShortTag:(Tag _Nullable)tag value:(int16_t)value __attribute__((swift_name("encodeTaggedShort(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedStringTag:(Tag _Nullable)tag value:(NSString *)value __attribute__((swift_name("encodeTaggedString(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)encodeTaggedValueTag:(Tag _Nullable)tag value:(id)value __attribute__((swift_name("encodeTaggedValue(tag:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)endEncodeDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endEncode(descriptor:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)popTag __attribute__((swift_name("popTag()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)pushTagName:(Tag _Nullable)name __attribute__((swift_name("pushTag(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (Tag _Nullable)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTag __attribute__((swift_name("currentTag")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) Tag _Nullable currentTagOrNull __attribute__((swift_name("currentTagOrNull")));
@property (readonly) MEGAAOSSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
__attribute__((swift_name("NamedValueEncoder")))
@interface MEGAAOSNamedValueEncoder : MEGAAOSTaggedEncoder<NSString *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)composeNameParentName:(NSString *)parentName childName:(NSString *)childName __attribute__((swift_name("composeName(parentName:childName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)elementNameDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("elementName(descriptor:index:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)nestedNestedName:(NSString *)nestedName __attribute__((swift_name("nested(nestedName:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)getTag:(id<MEGAAOSSerialDescriptor>)receiver index:(int32_t)index __attribute__((swift_name("getTag(_:index:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicModuleBuilder")))
@interface MEGAAOSPolymorphicModuleBuilder<__contravariant Base> : MEGAAOSBase
- (void)defaultDefaultSerializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("default(defaultSerializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: defaultDeserializer")));
- (void)defaultDeserializerDefaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("defaultDeserializer(defaultDeserializerProvider:)")));
- (void)subclassSubclass:(id<MEGAAOSKotlinKClass>)subclass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclass(subclass:serializer:)")));
@end

__attribute__((swift_name("SerializersModule")))
@interface MEGAAOSSerializersModule : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<MEGAAOSSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSKSerializer> _Nullable)getContextualKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("SerializersModuleCollector")))
@protocol MEGAAOSSerializersModuleCollector
@required
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass provider:(id<MEGAAOSKSerializer> (^)(NSArray<id<MEGAAOSKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass actualClass:(id<MEGAAOSKotlinKClass>)actualClass actualSerializer:(id<MEGAAOSKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAAOSSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuilder")))
@interface MEGAAOSSerializersModuleBuilder : MEGAAOSBase <MEGAAOSSerializersModuleCollector>
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass provider:(id<MEGAAOSKSerializer> (^)(NSArray<id<MEGAAOSKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)includeModule:(MEGAAOSSerializersModule *)module __attribute__((swift_name("include(module:)")));
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass actualClass:(id<MEGAAOSKotlinKClass>)actualClass actualSerializer:(id<MEGAAOSKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultDeserializerProvider:(id<MEGAAOSDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<MEGAAOSKotlinKClass>)baseClass defaultSerializerProvider:(id<MEGAAOSSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassSerialDescriptorBuilder")))
@interface MEGAAOSClassSerialDescriptorBuilder : MEGAAOSBase
- (void)elementElementName:(NSString *)elementName descriptor:(id<MEGAAOSSerialDescriptor>)descriptor annotations:(NSArray<id<MEGAAOSKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:descriptor:annotations:isOptional:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property NSArray<id<MEGAAOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL isNullable __attribute__((swift_name("isNullable"))) __attribute__((unavailable("isNullable inside buildSerialDescriptor is deprecated. Please use SerialDescriptor.nullable extension on a builder result.")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("SerialKind")))
@interface MEGAAOSSerialKind : MEGAAOSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("PolymorphicKind")))
@interface MEGAAOSPolymorphicKind : MEGAAOSSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.OPEN")))
@interface MEGAAOSPolymorphicKindOPEN : MEGAAOSPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PolymorphicKind.SEALED")))
@interface MEGAAOSPolymorphicKindSEALED : MEGAAOSPolymorphicKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PrimitiveKind")))
@interface MEGAAOSPrimitiveKind : MEGAAOSSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BOOLEAN")))
@interface MEGAAOSPrimitiveKindBOOLEAN : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.BYTE")))
@interface MEGAAOSPrimitiveKindBYTE : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.CHAR")))
@interface MEGAAOSPrimitiveKindCHAR : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.DOUBLE")))
@interface MEGAAOSPrimitiveKindDOUBLE : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.FLOAT")))
@interface MEGAAOSPrimitiveKindFLOAT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.INT")))
@interface MEGAAOSPrimitiveKindINT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindINT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.LONG")))
@interface MEGAAOSPrimitiveKindLONG : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindLONG *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.SHORT")))
@interface MEGAAOSPrimitiveKindSHORT : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrimitiveKind.STRING")))
@interface MEGAAOSPrimitiveKindSTRING : MEGAAOSPrimitiveKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("SerialDescriptor")))
@protocol MEGAAOSSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAAOSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<MEGAAOSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) MEGAAOSSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.CONTEXTUAL")))
@interface MEGAAOSSerialKindCONTEXTUAL : MEGAAOSSerialKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialKind.ENUM")))
@interface MEGAAOSSerialKindENUM : MEGAAOSSerialKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSerialKindENUM *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("StructureKind")))
@interface MEGAAOSStructureKind : MEGAAOSSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.CLASS")))
@interface MEGAAOSStructureKindCLASS : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindCLASS *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.LIST")))
@interface MEGAAOSStructureKindLIST : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindLIST *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.MAP")))
@interface MEGAAOSStructureKindMAP : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindMAP *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StructureKind.OBJECT")))
@interface MEGAAOSStructureKindOBJECT : MEGAAOSStructureKind
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStructureKindOBJECT *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LongAsStringSerializer")))
@interface MEGAAOSLongAsStringSerializer : MEGAAOSBase <MEGAAOSKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)longAsStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLongAsStringSerializer *shared __attribute__((swift_name("shared")));
- (MEGAAOSLong *)deserializeDecoder:(id<MEGAAOSDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<MEGAAOSEncoder>)encoder value:(MEGAAOSLong *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MEGAAOSSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractDecoder")))
@interface MEGAAOSAbstractDecoder : MEGAAOSBase <MEGAAOSDecoder, MEGAAOSCompositeDecoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeDecoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (BOOL)decodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (int8_t)decodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (unichar)decodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (double)decodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (float)decodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MEGAAOSDecoder>)decodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (id<MEGAAOSDecoder>)decodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int32_t)decodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (int64_t)decodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MEGAAOSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableValue(deserializer:previousValue:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (int16_t)decodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (NSString *)decodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (id)decodeValue __attribute__((swift_name("decodeValue()")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("AbstractEncoder")))
@interface MEGAAOSAbstractEncoder : MEGAAOSBase <MEGAAOSEncoder, MEGAAOSCompositeEncoder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<MEGAAOSCompositeEncoder>)beginStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeBooleanElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeByteElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeCharElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeDoubleElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (BOOL)encodeElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeElement(descriptor:index:)")));
- (void)encodeEnumEnumDescriptor:(id<MEGAAOSSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeFloatElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MEGAAOSEncoder>)encodeInlineDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (id<MEGAAOSEncoder>)encodeInlineElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeIntElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeLongElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeShortElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeStringElementDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)encodeValueValue:(id)value __attribute__((swift_name("encodeValue(value:)")));
- (void)endStructureDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("ChunkedDecoder")))
@protocol MEGAAOSChunkedDecoder
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)decodeStringChunkedConsumeChunk:(void (^)(NSString *))consumeChunk __attribute__((swift_name("decodeStringChunked(consumeChunk:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompositeDecoderCompanion")))
@interface MEGAAOSCompositeDecoderCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCompositeDecoderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t DECODE_DONE __attribute__((swift_name("DECODE_DONE")));
@property (readonly) int32_t UNKNOWN_NAME __attribute__((swift_name("UNKNOWN_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountActivated")))
@interface MEGAAOSAccountActivated : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountActivatedEvent")))
@interface MEGAAOSAccountActivatedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accountActivatedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAccountActivatedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRegistration")))
@interface MEGAAOSAccountRegistration : MEGAAOSBase
- (instancetype)initWithReferrerUrl:(NSString * _Nullable)referrerUrl referrerClickTime:(MEGAAOSLong * _Nullable)referrerClickTime appInstallTime:(MEGAAOSLong * _Nullable)appInstallTime __attribute__((swift_name("init(referrerUrl:referrerClickTime:appInstallTime:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSLong * _Nullable appInstallTime __attribute__((swift_name("appInstallTime")));
@property (readonly) MEGAAOSLong * _Nullable referrerClickTime __attribute__((swift_name("referrerClickTime")));
@property (readonly) NSString * _Nullable referrerUrl __attribute__((swift_name("referrerUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRegistrationEvent")))
@interface MEGAAOSAccountRegistrationEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
- (instancetype)initWithReferrerUrl:(NSString * _Nullable)referrerUrl referrerClickTime:(MEGAAOSLong * _Nullable)referrerClickTime appInstallTime:(MEGAAOSLong * _Nullable)appInstallTime __attribute__((swift_name("init(referrerUrl:referrerClickTime:appInstallTime:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AccountScreen")))
@protocol MEGAAOSAccountScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountScreenEvent")))
@interface MEGAAOSAccountScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accountScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAccountScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AccountScreenHeaderTapped")))
@protocol MEGAAOSAccountScreenHeaderTapped
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountScreenHeaderTappedEvent")))
@interface MEGAAOSAccountScreenHeaderTappedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)accountScreenHeaderTappedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAccountScreenHeaderTappedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddItemsToExistingAlbumFAB")))
@protocol MEGAAOSAddItemsToExistingAlbumFAB
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddItemsToExistingAlbumFABEvent")))
@interface MEGAAOSAddItemsToExistingAlbumFABEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addItemsToExistingAlbumFABEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddItemsToExistingAlbumFABEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddItemsToNewAlbumButton")))
@protocol MEGAAOSAddItemsToNewAlbumButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddItemsToNewAlbumButtonEvent")))
@interface MEGAAOSAddItemsToNewAlbumButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addItemsToNewAlbumButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddItemsToNewAlbumButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddItemsToNewAlbumFAB")))
@protocol MEGAAOSAddItemsToNewAlbumFAB
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddItemsToNewAlbumFABEvent")))
@interface MEGAAOSAddItemsToNewAlbumFABEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addItemsToNewAlbumFABEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddItemsToNewAlbumFABEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddSubtitleDialog")))
@protocol MEGAAOSAddSubtitleDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSubtitleDialogEvent")))
@interface MEGAAOSAddSubtitleDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addSubtitleDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddSubtitleDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddSubtitlePressed")))
@protocol MEGAAOSAddSubtitlePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSubtitlePressedEvent")))
@interface MEGAAOSAddSubtitlePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addSubtitlePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddSubtitlePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddSubtitlesOptionPressed")))
@protocol MEGAAOSAddSubtitlesOptionPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSubtitlesOptionPressedEvent")))
@interface MEGAAOSAddSubtitlesOptionPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addSubtitlesOptionPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddSubtitlesOptionPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AddSyncScreen")))
@protocol MEGAAOSAddSyncScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddSyncScreenEvent")))
@interface MEGAAOSAddSyncScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addSyncScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAddSyncScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumAddPhotosFAB")))
@protocol MEGAAOSAlbumAddPhotosFAB
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumAddPhotosFABEvent")))
@interface MEGAAOSAlbumAddPhotosFABEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumAddPhotosFABEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumAddPhotosFABEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumContentDeleteAlbum")))
@protocol MEGAAOSAlbumContentDeleteAlbum
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentDeleteAlbumEvent")))
@interface MEGAAOSAlbumContentDeleteAlbumEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentDeleteAlbumEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentDeleteAlbumEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumContentHideNodeMenuItem")))
@protocol MEGAAOSAlbumContentHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentHideNodeMenuItemEvent")))
@interface MEGAAOSAlbumContentHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumContentRemoveItems")))
@protocol MEGAAOSAlbumContentRemoveItems
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentRemoveItemsEvent")))
@interface MEGAAOSAlbumContentRemoveItemsEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentRemoveItemsEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentRemoveItemsEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumContentScreen")))
@protocol MEGAAOSAlbumContentScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentScreenEvent")))
@interface MEGAAOSAlbumContentScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumContentShareLinkMenuToolbar")))
@protocol MEGAAOSAlbumContentShareLinkMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumContentShareLinkMenuToolbarEvent")))
@interface MEGAAOSAlbumContentShareLinkMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumContentShareLinkMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumContentShareLinkMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumDeselectAll")))
@interface MEGAAOSAlbumDeselectAll : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumDeselectAllEvent")))
@interface MEGAAOSAlbumDeselectAllEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumDeselectAllEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumDeselectAllEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumImportInputDecryptionKeyDialog")))
@protocol MEGAAOSAlbumImportInputDecryptionKeyDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumImportInputDecryptionKeyDialogEvent")))
@interface MEGAAOSAlbumImportInputDecryptionKeyDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumImportInputDecryptionKeyDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumImportInputDecryptionKeyDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumImportSaveToCloudDriveButton")))
@protocol MEGAAOSAlbumImportSaveToCloudDriveButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumImportSaveToCloudDriveButtonEvent")))
@interface MEGAAOSAlbumImportSaveToCloudDriveButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumImportSaveToCloudDriveButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumImportSaveToCloudDriveButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumImportSaveToDeviceButton")))
@protocol MEGAAOSAlbumImportSaveToDeviceButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumImportSaveToDeviceButtonEvent")))
@interface MEGAAOSAlbumImportSaveToDeviceButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumImportSaveToDeviceButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumImportSaveToDeviceButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumImportScreen")))
@protocol MEGAAOSAlbumImportScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumImportScreenEvent")))
@interface MEGAAOSAlbumImportScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumImportScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumImportScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumImportStorageOverQuotaDialog")))
@protocol MEGAAOSAlbumImportStorageOverQuotaDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumImportStorageOverQuotaDialogEvent")))
@interface MEGAAOSAlbumImportStorageOverQuotaDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumImportStorageOverQuotaDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumImportStorageOverQuotaDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumListShareLinkMenuItem")))
@protocol MEGAAOSAlbumListShareLinkMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumListShareLinkMenuItemEvent")))
@interface MEGAAOSAlbumListShareLinkMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumListShareLinkMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumListShareLinkMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumPhotosSelectionAllLocationsButton")))
@protocol MEGAAOSAlbumPhotosSelectionAllLocationsButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumPhotosSelectionAllLocationsButtonEvent")))
@interface MEGAAOSAlbumPhotosSelectionAllLocationsButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumPhotosSelectionAllLocationsButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumPhotosSelectionAllLocationsButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumPhotosSelectionCameraUploadsButton")))
@protocol MEGAAOSAlbumPhotosSelectionCameraUploadsButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumPhotosSelectionCameraUploadsButtonEvent")))
@interface MEGAAOSAlbumPhotosSelectionCameraUploadsButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumPhotosSelectionCameraUploadsButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumPhotosSelectionCameraUploadsButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumPhotosSelectionCloudDriveButton")))
@protocol MEGAAOSAlbumPhotosSelectionCloudDriveButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumPhotosSelectionCloudDriveButtonEvent")))
@interface MEGAAOSAlbumPhotosSelectionCloudDriveButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumPhotosSelectionCloudDriveButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumPhotosSelectionCloudDriveButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumPhotosSelectionFilterMenuToolbar")))
@protocol MEGAAOSAlbumPhotosSelectionFilterMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumPhotosSelectionFilterMenuToolbarEvent")))
@interface MEGAAOSAlbumPhotosSelectionFilterMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumPhotosSelectionFilterMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumPhotosSelectionFilterMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumPhotosSelectionScreen")))
@protocol MEGAAOSAlbumPhotosSelectionScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumPhotosSelectionScreenEvent")))
@interface MEGAAOSAlbumPhotosSelectionScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumPhotosSelectionScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumPhotosSelectionScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectAll")))
@interface MEGAAOSAlbumSelectAll : MEGAAOSBase
- (instancetype)initWithAlbumsCount:(int32_t)albumsCount __attribute__((swift_name("init(albumsCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t albumsCount __attribute__((swift_name("albumsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectAllEvent")))
@interface MEGAAOSAlbumSelectAllEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithAlbumsCount:(int32_t)albumsCount __attribute__((swift_name("init(albumsCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelected")))
@interface MEGAAOSAlbumSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSAlbumSelectedSelectionType *)selectionType imageCount:(MEGAAOSInt * _Nullable)imageCount videoCount:(MEGAAOSInt * _Nullable)videoCount __attribute__((swift_name("init(selectionType:imageCount:videoCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSAlbumSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelected.SelectionType")))
@interface MEGAAOSAlbumSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSAlbumSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSAlbumSelectedSelectionType *single __attribute__((swift_name("single")));
@property (class, readonly) MEGAAOSAlbumSelectedSelectionType *multiadd __attribute__((swift_name("multiadd")));
@property (class, readonly) MEGAAOSAlbumSelectedSelectionType *multiremove __attribute__((swift_name("multiremove")));
+ (MEGAAOSKotlinArray<MEGAAOSAlbumSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSAlbumSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumSelectedEvent")))
@interface MEGAAOSAlbumSelectedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithSelectionType:(MEGAAOSAlbumSelectedSelectionType *)selectionType imageCount:(MEGAAOSInt * _Nullable)imageCount videoCount:(MEGAAOSInt * _Nullable)videoCount __attribute__((swift_name("init(selectionType:imageCount:videoCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumsListDeleteAlbums")))
@protocol MEGAAOSAlbumsListDeleteAlbums
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumsListDeleteAlbumsEvent")))
@interface MEGAAOSAlbumsListDeleteAlbumsEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumsListDeleteAlbumsEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumsListDeleteAlbumsEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumsStorageOverQuotaUpgradeAccountButton")))
@protocol MEGAAOSAlbumsStorageOverQuotaUpgradeAccountButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumsStorageOverQuotaUpgradeAccountButtonEvent")))
@interface MEGAAOSAlbumsStorageOverQuotaUpgradeAccountButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumsStorageOverQuotaUpgradeAccountButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumsStorageOverQuotaUpgradeAccountButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AlbumsTab")))
@protocol MEGAAOSAlbumsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AlbumsTabEvent")))
@interface MEGAAOSAlbumsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)albumsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAlbumsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncChooseLatestModifiedTime")))
@protocol MEGAAOSAndroidSyncChooseLatestModifiedTime
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncChooseLatestModifiedTimeEvent")))
@interface MEGAAOSAndroidSyncChooseLatestModifiedTimeEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncChooseLatestModifiedTimeEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncChooseLatestModifiedTimeEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncChooseLocalFile")))
@protocol MEGAAOSAndroidSyncChooseLocalFile
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncChooseLocalFileEvent")))
@interface MEGAAOSAndroidSyncChooseLocalFileEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncChooseLocalFileEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncChooseLocalFileEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncChooseRemoteFile")))
@protocol MEGAAOSAndroidSyncChooseRemoteFile
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncChooseRemoteFileEvent")))
@interface MEGAAOSAndroidSyncChooseRemoteFileEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncChooseRemoteFileEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncChooseRemoteFileEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncClearResolvedIssues")))
@protocol MEGAAOSAndroidSyncClearResolvedIssues
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncClearResolvedIssuesEvent")))
@interface MEGAAOSAndroidSyncClearResolvedIssuesEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncClearResolvedIssuesEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncClearResolvedIssuesEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncFABButton")))
@protocol MEGAAOSAndroidSyncFABButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncFABButtonEvent")))
@interface MEGAAOSAndroidSyncFABButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncFABButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncFABButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncGetStartedButton")))
@protocol MEGAAOSAndroidSyncGetStartedButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncGetStartedButtonEvent")))
@interface MEGAAOSAndroidSyncGetStartedButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncGetStartedButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncGetStartedButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncMergeFolders")))
@protocol MEGAAOSAndroidSyncMergeFolders
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncMergeFoldersEvent")))
@interface MEGAAOSAndroidSyncMergeFoldersEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncMergeFoldersEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncMergeFoldersEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncNavigationItem")))
@protocol MEGAAOSAndroidSyncNavigationItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncNavigationItemEvent")))
@interface MEGAAOSAndroidSyncNavigationItemEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncNavigationItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncNavigationItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncRemoveDuplicates")))
@protocol MEGAAOSAndroidSyncRemoveDuplicates
@required
@end

__attribute__((swift_name("AndroidSyncRemoveDuplicatesAndRemoveRest")))
@protocol MEGAAOSAndroidSyncRemoveDuplicatesAndRemoveRest
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncRemoveDuplicatesAndRemoveRestEvent")))
@interface MEGAAOSAndroidSyncRemoveDuplicatesAndRemoveRestEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncRemoveDuplicatesAndRemoveRestEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncRemoveDuplicatesAndRemoveRestEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncRemoveDuplicatesEvent")))
@interface MEGAAOSAndroidSyncRemoveDuplicatesEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncRemoveDuplicatesEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncRemoveDuplicatesEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncRenameAllItems")))
@protocol MEGAAOSAndroidSyncRenameAllItems
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncRenameAllItemsEvent")))
@interface MEGAAOSAndroidSyncRenameAllItemsEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncRenameAllItemsEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncRenameAllItemsEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AndroidSyncStartSyncButton")))
@protocol MEGAAOSAndroidSyncStartSyncButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AndroidSyncStartSyncButtonEvent")))
@interface MEGAAOSAndroidSyncStartSyncButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)androidSyncStartSyncButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAndroidSyncStartSyncButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AudioPlayerHideNodeMenuItem")))
@protocol MEGAAOSAudioPlayerHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AudioPlayerHideNodeMenuItemEvent")))
@interface MEGAAOSAudioPlayerHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)audioPlayerHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAudioPlayerHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("AutoMatchSubtitleOptionPressed")))
@protocol MEGAAOSAutoMatchSubtitleOptionPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoMatchSubtitleOptionPressedEvent")))
@interface MEGAAOSAutoMatchSubtitleOptionPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)autoMatchSubtitleOptionPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSAutoMatchSubtitleOptionPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("BusinessRestrictionsBannerActionButtonPressed")))
@protocol MEGAAOSBusinessRestrictionsBannerActionButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BusinessRestrictionsBannerActionButtonPressedEvent")))
@interface MEGAAOSBusinessRestrictionsBannerActionButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)businessRestrictionsBannerActionButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSBusinessRestrictionsBannerActionButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("BusinessUserRestrictionsScreen")))
@protocol MEGAAOSBusinessUserRestrictionsScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BusinessUserRestrictionsScreenEvent")))
@interface MEGAAOSBusinessUserRestrictionsScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)businessUserRestrictionsScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSBusinessUserRestrictionsScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("BuyProI")))
@protocol MEGAAOSBuyProI
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyProIEvent")))
@interface MEGAAOSBuyProIEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buyProIEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSBuyProIEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("BuyProII")))
@protocol MEGAAOSBuyProII
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyProIIEvent")))
@interface MEGAAOSBuyProIIEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buyProIIEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSBuyProIIEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("BuyProIII")))
@protocol MEGAAOSBuyProIII
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyProIIIEvent")))
@interface MEGAAOSBuyProIIIEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buyProIIIEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSBuyProIIIEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("BuyProLite")))
@protocol MEGAAOSBuyProLite
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuyProLiteEvent")))
@interface MEGAAOSBuyProLiteEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)buyProLiteEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSBuyProLiteEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CallLowerHand")))
@protocol MEGAAOSCallLowerHand
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallLowerHandEvent")))
@interface MEGAAOSCallLowerHandEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callLowerHandEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCallLowerHandEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CallRaiseHand")))
@protocol MEGAAOSCallRaiseHand
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallRaiseHandEvent")))
@interface MEGAAOSCallRaiseHandEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callRaiseHandEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCallRaiseHandEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CallScreen")))
@protocol MEGAAOSCallScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CallScreenEvent")))
@interface MEGAAOSCallScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)callScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCallScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CancelSelectSubtitlePressed")))
@protocol MEGAAOSCancelSelectSubtitlePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelSelectSubtitlePressedEvent")))
@interface MEGAAOSCancelSelectSubtitlePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelSelectSubtitlePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCancelSelectSubtitlePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CancelSubscriptionButtonPressed")))
@protocol MEGAAOSCancelSubscriptionButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelSubscriptionButtonPressedEvent")))
@interface MEGAAOSCancelSubscriptionButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelSubscriptionButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCancelSubscriptionButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CancelSubscriptionContinueCancellationButtonPressed")))
@protocol MEGAAOSCancelSubscriptionContinueCancellationButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelSubscriptionContinueCancellationButtonPressedEvent")))
@interface MEGAAOSCancelSubscriptionContinueCancellationButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelSubscriptionContinueCancellationButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCancelSubscriptionContinueCancellationButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CancelSubscriptionKeepPlanButtonPressed")))
@protocol MEGAAOSCancelSubscriptionKeepPlanButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelSubscriptionKeepPlanButtonPressedEvent")))
@interface MEGAAOSCancelSubscriptionKeepPlanButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelSubscriptionKeepPlanButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCancelSubscriptionKeepPlanButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CancelSubscriptionMenuToolbar")))
@protocol MEGAAOSCancelSubscriptionMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelSubscriptionMenuToolbarEvent")))
@interface MEGAAOSCancelSubscriptionMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelSubscriptionMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCancelSubscriptionMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CancelUpgradeMyAccount")))
@protocol MEGAAOSCancelUpgradeMyAccount
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelUpgradeMyAccountEvent")))
@interface MEGAAOSCancelUpgradeMyAccountEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cancelUpgradeMyAccountEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCancelUpgradeMyAccountEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationAddAttachmentButtonPressed")))
@protocol MEGAAOSChatConversationAddAttachmentButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationAddAttachmentButtonPressedEvent")))
@interface MEGAAOSChatConversationAddAttachmentButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationAddAttachmentButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationAddAttachmentButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationAddParticipantsMenuToolbar")))
@protocol MEGAAOSChatConversationAddParticipantsMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationAddParticipantsMenuToolbarEvent")))
@interface MEGAAOSChatConversationAddParticipantsMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationAddParticipantsMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationAddParticipantsMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationAddToCloudDriveActionMenu")))
@protocol MEGAAOSChatConversationAddToCloudDriveActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationAddToCloudDriveActionMenuEvent")))
@interface MEGAAOSChatConversationAddToCloudDriveActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationAddToCloudDriveActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationAddToCloudDriveActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationAddToCloudDriveActionMenuItem")))
@protocol MEGAAOSChatConversationAddToCloudDriveActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationAddToCloudDriveActionMenuItemEvent")))
@interface MEGAAOSChatConversationAddToCloudDriveActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationAddToCloudDriveActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationAddToCloudDriveActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationArchiveMenuToolbar")))
@protocol MEGAAOSChatConversationArchiveMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationArchiveMenuToolbarEvent")))
@interface MEGAAOSChatConversationArchiveMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationArchiveMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationArchiveMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationAvailableOfflineActionMenuItem")))
@protocol MEGAAOSChatConversationAvailableOfflineActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationAvailableOfflineActionMenuItemEvent")))
@interface MEGAAOSChatConversationAvailableOfflineActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationAvailableOfflineActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationAvailableOfflineActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationCallMenuToolbar")))
@protocol MEGAAOSChatConversationCallMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationCallMenuToolbarEvent")))
@interface MEGAAOSChatConversationCallMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationCallMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationCallMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationClearMenuToolbar")))
@protocol MEGAAOSChatConversationClearMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationClearMenuToolbarEvent")))
@interface MEGAAOSChatConversationClearMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationClearMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationClearMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationContactMenuItem")))
@protocol MEGAAOSChatConversationContactMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationContactMenuItemEvent")))
@interface MEGAAOSChatConversationContactMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationContactMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationContactMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationCopyActionMenu")))
@protocol MEGAAOSChatConversationCopyActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationCopyActionMenuEvent")))
@interface MEGAAOSChatConversationCopyActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationCopyActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationCopyActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationCopyActionMenuItem")))
@protocol MEGAAOSChatConversationCopyActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationCopyActionMenuItemEvent")))
@interface MEGAAOSChatConversationCopyActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationCopyActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationCopyActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationDeleteActionMenu")))
@protocol MEGAAOSChatConversationDeleteActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationDeleteActionMenuEvent")))
@interface MEGAAOSChatConversationDeleteActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationDeleteActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationDeleteActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationDownloadActionMenu")))
@protocol MEGAAOSChatConversationDownloadActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationDownloadActionMenuEvent")))
@interface MEGAAOSChatConversationDownloadActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationDownloadActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationDownloadActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationEditActionMenu")))
@protocol MEGAAOSChatConversationEditActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationEditActionMenuEvent")))
@interface MEGAAOSChatConversationEditActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationEditActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationEditActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationEditActionMenuItem")))
@protocol MEGAAOSChatConversationEditActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationEditActionMenuItemEvent")))
@interface MEGAAOSChatConversationEditActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationEditActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationEditActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationEndCallForAllMenuToolbar")))
@protocol MEGAAOSChatConversationEndCallForAllMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationEndCallForAllMenuToolbarEvent")))
@interface MEGAAOSChatConversationEndCallForAllMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationEndCallForAllMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationEndCallForAllMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationFileMenuItem")))
@protocol MEGAAOSChatConversationFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationFileMenuItemEvent")))
@interface MEGAAOSChatConversationFileMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationForwardActionMenu")))
@protocol MEGAAOSChatConversationForwardActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationForwardActionMenuEvent")))
@interface MEGAAOSChatConversationForwardActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationForwardActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationForwardActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationForwardActionMenuItem")))
@protocol MEGAAOSChatConversationForwardActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationForwardActionMenuItemEvent")))
@interface MEGAAOSChatConversationForwardActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationForwardActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationForwardActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationGIFMenuItem")))
@protocol MEGAAOSChatConversationGIFMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationGIFMenuItemEvent")))
@interface MEGAAOSChatConversationGIFMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationGIFMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationGIFMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationGalleryMenuItem")))
@protocol MEGAAOSChatConversationGalleryMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationGalleryMenuItemEvent")))
@interface MEGAAOSChatConversationGalleryMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationGalleryMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationGalleryMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationHomeUpMenuToolbar")))
@protocol MEGAAOSChatConversationHomeUpMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationHomeUpMenuToolbarEvent")))
@interface MEGAAOSChatConversationHomeUpMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationHomeUpMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationHomeUpMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationInfoActionMenuItem")))
@protocol MEGAAOSChatConversationInfoActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationInfoActionMenuItemEvent")))
@interface MEGAAOSChatConversationInfoActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationInfoActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationInfoActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationInfoMenuToolbar")))
@protocol MEGAAOSChatConversationInfoMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationInfoMenuToolbarEvent")))
@interface MEGAAOSChatConversationInfoMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationInfoMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationInfoMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationInviteActionMenu")))
@protocol MEGAAOSChatConversationInviteActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationInviteActionMenuEvent")))
@interface MEGAAOSChatConversationInviteActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationInviteActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationInviteActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationInviteActionMenuItem")))
@protocol MEGAAOSChatConversationInviteActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationInviteActionMenuItemEvent")))
@interface MEGAAOSChatConversationInviteActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationInviteActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationInviteActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationLeaveMenuToolbar")))
@protocol MEGAAOSChatConversationLeaveMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationLeaveMenuToolbarEvent")))
@interface MEGAAOSChatConversationLeaveMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationLeaveMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationLeaveMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationLocationMenuItem")))
@protocol MEGAAOSChatConversationLocationMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationLocationMenuItemEvent")))
@interface MEGAAOSChatConversationLocationMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationLocationMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationLocationMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationMuteMenuToolbar")))
@protocol MEGAAOSChatConversationMuteMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationMuteMenuToolbarEvent")))
@interface MEGAAOSChatConversationMuteMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationMuteMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationMuteMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationOpenWithActionMenuItem")))
@protocol MEGAAOSChatConversationOpenWithActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationOpenWithActionMenuItemEvent")))
@interface MEGAAOSChatConversationOpenWithActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationOpenWithActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationOpenWithActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationRemoveActionMenuItem")))
@protocol MEGAAOSChatConversationRemoveActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationRemoveActionMenuItemEvent")))
@interface MEGAAOSChatConversationRemoveActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationRemoveActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationRemoveActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationResumeTransfersMenuItem")))
@protocol MEGAAOSChatConversationResumeTransfersMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationResumeTransfersMenuItemEvent")))
@interface MEGAAOSChatConversationResumeTransfersMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationResumeTransfersMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationResumeTransfersMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationRetryMenuItem")))
@protocol MEGAAOSChatConversationRetryMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationRetryMenuItemEvent")))
@interface MEGAAOSChatConversationRetryMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationRetryMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationRetryMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationSaveToDeviceActionMenuItem")))
@protocol MEGAAOSChatConversationSaveToDeviceActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationSaveToDeviceActionMenuItemEvent")))
@interface MEGAAOSChatConversationSaveToDeviceActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationSaveToDeviceActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationSaveToDeviceActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationScanMenuItem")))
@protocol MEGAAOSChatConversationScanMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationScanMenuItemEvent")))
@interface MEGAAOSChatConversationScanMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationScanMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationScanMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationScreen")))
@protocol MEGAAOSChatConversationScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationScreenEvent")))
@interface MEGAAOSChatConversationScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationSelectActionMenuItem")))
@protocol MEGAAOSChatConversationSelectActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationSelectActionMenuItemEvent")))
@interface MEGAAOSChatConversationSelectActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationSelectActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationSelectActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationSelectMenuToolbar")))
@protocol MEGAAOSChatConversationSelectMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationSelectMenuToolbarEvent")))
@interface MEGAAOSChatConversationSelectMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationSelectMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationSelectMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationSendImageFilesFloatingActionButtonPressed")))
@protocol MEGAAOSChatConversationSendImageFilesFloatingActionButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationSendImageFilesFloatingActionButtonPressedEvent")))
@interface MEGAAOSChatConversationSendImageFilesFloatingActionButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationSendImageFilesFloatingActionButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationSendImageFilesFloatingActionButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationSendMessageActionMenu")))
@protocol MEGAAOSChatConversationSendMessageActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationSendMessageActionMenuEvent")))
@interface MEGAAOSChatConversationSendMessageActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationSendMessageActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationSendMessageActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationSendMessageActionMenuItem")))
@protocol MEGAAOSChatConversationSendMessageActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationSendMessageActionMenuItemEvent")))
@interface MEGAAOSChatConversationSendMessageActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationSendMessageActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationSendMessageActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationShareActionMenu")))
@protocol MEGAAOSChatConversationShareActionMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationShareActionMenuEvent")))
@interface MEGAAOSChatConversationShareActionMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationShareActionMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationShareActionMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationShareActionMenuItem")))
@protocol MEGAAOSChatConversationShareActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationShareActionMenuItemEvent")))
@interface MEGAAOSChatConversationShareActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationShareActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationShareActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationTakePictureMenuItem")))
@protocol MEGAAOSChatConversationTakePictureMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationTakePictureMenuItemEvent")))
@interface MEGAAOSChatConversationTakePictureMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationTakePictureMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationTakePictureMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationUnarchiveMenuToolbar")))
@protocol MEGAAOSChatConversationUnarchiveMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationUnarchiveMenuToolbarEvent")))
@interface MEGAAOSChatConversationUnarchiveMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationUnarchiveMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationUnarchiveMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationUnmuteMenuToolbar")))
@protocol MEGAAOSChatConversationUnmuteMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationUnmuteMenuToolbarEvent")))
@interface MEGAAOSChatConversationUnmuteMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationUnmuteMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationUnmuteMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationVideoMenuItem")))
@protocol MEGAAOSChatConversationVideoMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationVideoMenuItemEvent")))
@interface MEGAAOSChatConversationVideoMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationVideoMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationVideoMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationVideoMenuToolbar")))
@protocol MEGAAOSChatConversationVideoMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationVideoMenuToolbarEvent")))
@interface MEGAAOSChatConversationVideoMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationVideoMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationVideoMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationViewContactsActionMenuItem")))
@protocol MEGAAOSChatConversationViewContactsActionMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationViewContactsActionMenuItemEvent")))
@interface MEGAAOSChatConversationViewContactsActionMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationViewContactsActionMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationViewContactsActionMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationVoiceClipMenuItem")))
@protocol MEGAAOSChatConversationVoiceClipMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationVoiceClipMenuItemEvent")))
@interface MEGAAOSChatConversationVoiceClipMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationVoiceClipMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationVoiceClipMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatConversationVoiceMenuItem")))
@protocol MEGAAOSChatConversationVoiceMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatConversationVoiceMenuItemEvent")))
@interface MEGAAOSChatConversationVoiceMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatConversationVoiceMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatConversationVoiceMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatImageAttachmentItemSelected")))
@interface MEGAAOSChatImageAttachmentItemSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSChatImageAttachmentItemSelectedSelectionType *)selectionType imageCount:(int32_t)imageCount __attribute__((swift_name("init(selectionType:imageCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t imageCount __attribute__((swift_name("imageCount")));
@property (readonly) MEGAAOSChatImageAttachmentItemSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatImageAttachmentItemSelected.SelectionType")))
@interface MEGAAOSChatImageAttachmentItemSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSChatImageAttachmentItemSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSChatImageAttachmentItemSelectedSelectionType *singlemode __attribute__((swift_name("singlemode")));
@property (class, readonly) MEGAAOSChatImageAttachmentItemSelectedSelectionType *multiselectmode __attribute__((swift_name("multiselectmode")));
+ (MEGAAOSKotlinArray<MEGAAOSChatImageAttachmentItemSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSChatImageAttachmentItemSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatImageAttachmentItemSelectedEvent")))
@interface MEGAAOSChatImageAttachmentItemSelectedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithSelectionType:(MEGAAOSChatImageAttachmentItemSelectedSelectionType *)selectionType imageCount:(int32_t)imageCount __attribute__((swift_name("init(selectionType:imageCount:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatMessageLongPressed")))
@interface MEGAAOSChatMessageLongPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatMessageLongPressedEvent")))
@interface MEGAAOSChatMessageLongPressedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatMessageLongPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatMessageLongPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatRoomsBottomNavigationItem")))
@protocol MEGAAOSChatRoomsBottomNavigationItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatRoomsBottomNavigationItemEvent")))
@interface MEGAAOSChatRoomsBottomNavigationItemEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatRoomsBottomNavigationItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatRoomsBottomNavigationItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatRoomsStartConversationMenu")))
@protocol MEGAAOSChatRoomsStartConversationMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatRoomsStartConversationMenuEvent")))
@interface MEGAAOSChatRoomsStartConversationMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatRoomsStartConversationMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatRoomsStartConversationMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatScreen")))
@protocol MEGAAOSChatScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatScreenEvent")))
@interface MEGAAOSChatScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatTabFABPressed")))
@protocol MEGAAOSChatTabFABPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatTabFABPressedEvent")))
@interface MEGAAOSChatTabFABPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatTabFABPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatTabFABPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ChatsTab")))
@protocol MEGAAOSChatsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChatsTabEvent")))
@interface MEGAAOSChatsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)chatsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSChatsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveAddMenu")))
@protocol MEGAAOSCloudDriveAddMenu
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveAddMenuEvent")))
@interface MEGAAOSCloudDriveAddMenuEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveAddMenuEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveAddMenuEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveBottomNavigationItem")))
@protocol MEGAAOSCloudDriveBottomNavigationItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveBottomNavigationItemEvent")))
@interface MEGAAOSCloudDriveBottomNavigationItemEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveBottomNavigationItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveBottomNavigationItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveChooseFromPhotosMenuToolbar")))
@protocol MEGAAOSCloudDriveChooseFromPhotosMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveChooseFromPhotosMenuToolbarEvent")))
@interface MEGAAOSCloudDriveChooseFromPhotosMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveChooseFromPhotosMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveChooseFromPhotosMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveFABPressed")))
@protocol MEGAAOSCloudDriveFABPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveFABPressedEvent")))
@interface MEGAAOSCloudDriveFABPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveFABPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveFABPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveHideNodeMenuItem")))
@protocol MEGAAOSCloudDriveHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveHideNodeMenuItemEvent")))
@interface MEGAAOSCloudDriveHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveImportFromFilesMenuToolbar")))
@protocol MEGAAOSCloudDriveImportFromFilesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveImportFromFilesMenuToolbarEvent")))
@interface MEGAAOSCloudDriveImportFromFilesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveImportFromFilesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveImportFromFilesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveNewFolderMenuToolbar")))
@protocol MEGAAOSCloudDriveNewFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveNewFolderMenuToolbarEvent")))
@interface MEGAAOSCloudDriveNewFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveNewFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveNewFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveNewTextFileMenuToolbar")))
@protocol MEGAAOSCloudDriveNewTextFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveNewTextFileMenuToolbarEvent")))
@interface MEGAAOSCloudDriveNewTextFileMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveNewTextFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveNewTextFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveScreen")))
@protocol MEGAAOSCloudDriveScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveScreenEvent")))
@interface MEGAAOSCloudDriveScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveSearchMenuToolbar")))
@protocol MEGAAOSCloudDriveSearchMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveSearchMenuToolbarEvent")))
@interface MEGAAOSCloudDriveSearchMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveSearchMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveSearchMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveUploadFilesMenuToolbar")))
@protocol MEGAAOSCloudDriveUploadFilesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveUploadFilesMenuToolbarEvent")))
@interface MEGAAOSCloudDriveUploadFilesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveUploadFilesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveUploadFilesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CloudDriveUploadFolderMenuToolbar")))
@protocol MEGAAOSCloudDriveUploadFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CloudDriveUploadFolderMenuToolbarEvent")))
@interface MEGAAOSCloudDriveUploadFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cloudDriveUploadFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCloudDriveUploadFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ConnectVPNTogglePressed")))
@protocol MEGAAOSConnectVPNTogglePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectVPNTogglePressedEvent")))
@interface MEGAAOSConnectVPNTogglePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)connectVPNTogglePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSConnectVPNTogglePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CopyLinkToPasteboardPressed")))
@protocol MEGAAOSCopyLinkToPasteboardPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CopyLinkToPasteboardPressedEvent")))
@interface MEGAAOSCopyLinkToPasteboardPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getCopyLinkToPasteboardPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCopyLinkToPasteboardPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateAccountButtonPressed")))
@protocol MEGAAOSCreateAccountButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAccountButtonPressedEvent")))
@interface MEGAAOSCreateAccountButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createAccountButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCreateAccountButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateAlbumDialogButtonPressed")))
@protocol MEGAAOSCreateAlbumDialogButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAlbumDialogButtonPressedEvent")))
@interface MEGAAOSCreateAlbumDialogButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createAlbumDialogButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCreateAlbumDialogButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateAlbumFAB")))
@protocol MEGAAOSCreateAlbumFAB
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateAlbumFABEvent")))
@interface MEGAAOSCreateAlbumFABEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createAlbumFABEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCreateAlbumFABEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateMeetingMaxDurationReached")))
@protocol MEGAAOSCreateMeetingMaxDurationReached
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateMeetingMaxDurationReachedEvent")))
@interface MEGAAOSCreateMeetingMaxDurationReachedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createMeetingMaxDurationReachedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCreateMeetingMaxDurationReachedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("CreateNewAlbumDialog")))
@protocol MEGAAOSCreateNewAlbumDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateNewAlbumDialogEvent")))
@interface MEGAAOSCreateNewAlbumDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)createNewAlbumDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSCreateNewAlbumDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumCancelButtonPressed")))
@protocol MEGAAOSDeleteAlbumCancelButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumCancelButtonPressedEvent")))
@interface MEGAAOSDeleteAlbumCancelButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumCancelButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeleteAlbumCancelButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumConfirmButtonPressed")))
@protocol MEGAAOSDeleteAlbumConfirmButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumConfirmButtonPressedEvent")))
@interface MEGAAOSDeleteAlbumConfirmButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumConfirmButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeleteAlbumConfirmButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeleteAlbumsConfirmationDialog")))
@protocol MEGAAOSDeleteAlbumsConfirmationDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeleteAlbumsConfirmationDialogEvent")))
@interface MEGAAOSDeleteAlbumsConfirmationDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deleteAlbumsConfirmationDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeleteAlbumsConfirmationDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeviceCenterDeviceOptionsButton")))
@protocol MEGAAOSDeviceCenterDeviceOptionsButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterDeviceOptionsButtonEvent")))
@interface MEGAAOSDeviceCenterDeviceOptionsButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deviceCenterDeviceOptionsButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeviceCenterDeviceOptionsButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeviceCenterEntrypointButton")))
@protocol MEGAAOSDeviceCenterEntrypointButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterEntrypointButtonEvent")))
@interface MEGAAOSDeviceCenterEntrypointButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deviceCenterEntrypointButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeviceCenterEntrypointButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterItemClicked")))
@interface MEGAAOSDeviceCenterItemClicked : MEGAAOSBase
- (instancetype)initWithItemType:(MEGAAOSDeviceCenterItemClickedItemType *)itemType __attribute__((swift_name("init(itemType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSDeviceCenterItemClickedItemType *itemType __attribute__((swift_name("itemType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterItemClicked.ItemType")))
@interface MEGAAOSDeviceCenterItemClickedItemType : MEGAAOSKotlinEnum<MEGAAOSDeviceCenterItemClickedItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSDeviceCenterItemClickedItemType *device __attribute__((swift_name("device")));
@property (class, readonly) MEGAAOSDeviceCenterItemClickedItemType *connection __attribute__((swift_name("connection")));
+ (MEGAAOSKotlinArray<MEGAAOSDeviceCenterItemClickedItemType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSDeviceCenterItemClickedItemType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterItemClickedEvent")))
@interface MEGAAOSDeviceCenterItemClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithItemType:(MEGAAOSDeviceCenterItemClickedItemType *)itemType __attribute__((swift_name("init(itemType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DeviceCenterSaveNewDeviceNameButton")))
@protocol MEGAAOSDeviceCenterSaveNewDeviceNameButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeviceCenterSaveNewDeviceNameButtonEvent")))
@interface MEGAAOSDeviceCenterSaveNewDeviceNameButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)deviceCenterSaveNewDeviceNameButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDeviceCenterSaveNewDeviceNameButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("DocumentPreviewHideNodeMenuItem")))
@protocol MEGAAOSDocumentPreviewHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentPreviewHideNodeMenuItemEvent")))
@interface MEGAAOSDocumentPreviewHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)documentPreviewHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSDocumentPreviewHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("EditMeetingMaxDurationReached")))
@protocol MEGAAOSEditMeetingMaxDurationReached
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditMeetingMaxDurationReachedEvent")))
@interface MEGAAOSEditMeetingMaxDurationReachedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)editMeetingMaxDurationReachedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSEditMeetingMaxDurationReachedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("EditSingleOccurrenceMeetingMaxDurationReached")))
@protocol MEGAAOSEditSingleOccurrenceMeetingMaxDurationReached
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditSingleOccurrenceMeetingMaxDurationReachedEvent")))
@interface MEGAAOSEditSingleOccurrenceMeetingMaxDurationReachedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)editSingleOccurrenceMeetingMaxDurationReachedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSEditSingleOccurrenceMeetingMaxDurationReachedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("EmailConfirmationScreen")))
@protocol MEGAAOSEmailConfirmationScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmailConfirmationScreenEvent")))
@interface MEGAAOSEmailConfirmationScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)emailConfirmationScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSEmailConfirmationScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ExampleButtonPress")))
@protocol MEGAAOSExampleButtonPress
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexGeneralEvent")))
@interface MEGAAOSExampleComplexGeneralEvent : MEGAAOSBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExampleComplexItemSelected")))
@interface MEGAAOSExampleComplexItemSelected : MEGAAOSBase
- (instancetype)initWithFoo:(NSString * _Nullable)foo bar:(int32_t)bar fooBar:(int32_t)fooBar __attribute__((swift_name("init(foo:bar:fooBar:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int32_t bar __attribute__((swift_name("bar")));
@property (readonly) NSString * _Nullable foo __attribute__((swift_name("foo")));
@property (readonly) int32_t fooBar __attribute__((swift_name("fooBar")));
@end

__attribute__((swift_name("ExampleDialogDisplayed")))
@protocol MEGAAOSExampleDialogDisplayed
@required
@end

__attribute__((swift_name("ExampleMenuItemSelected")))
@protocol MEGAAOSExampleMenuItemSelected
@required
@end

__attribute__((swift_name("ExampleNavigation")))
@protocol MEGAAOSExampleNavigation
@required
@end

__attribute__((swift_name("ExampleNotification")))
@protocol MEGAAOSExampleNotification
@required
@end

__attribute__((swift_name("ExampleScreen")))
@protocol MEGAAOSExampleScreen
@required
@end

__attribute__((swift_name("ExampleSimpleGeneralEvent")))
@protocol MEGAAOSExampleSimpleGeneralEvent
@required
@end

__attribute__((swift_name("ExampleSimpleItemSelected")))
@protocol MEGAAOSExampleSimpleItemSelected
@required
@end

__attribute__((swift_name("ExampleTabSelected")))
@protocol MEGAAOSExampleTabSelected
@required
@end

__attribute__((swift_name("ExcludedClass")))
@protocol MEGAAOSExcludedClass
@required
@end

__attribute__((swift_name("ForgotPasscodeButtonPressed")))
@protocol MEGAAOSForgotPasscodeButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ForgotPasscodeButtonPressedEvent")))
@interface MEGAAOSForgotPasscodeButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotPasscodeButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSForgotPasscodeButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("GenericAppPushNotificationReceived")))
@protocol MEGAAOSGenericAppPushNotificationReceived
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericAppPushNotificationReceivedEvent")))
@interface MEGAAOSGenericAppPushNotificationReceivedEvent : MEGAAOSBase <MEGAAOSNotificationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)genericAppPushNotificationReceivedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSGenericAppPushNotificationReceivedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("GenericAppPushNotificationTapped")))
@protocol MEGAAOSGenericAppPushNotificationTapped
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericAppPushNotificationTappedEvent")))
@interface MEGAAOSGenericAppPushNotificationTappedEvent : MEGAAOSBase <MEGAAOSNotificationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)genericAppPushNotificationTappedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSGenericAppPushNotificationTappedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("GroupChatPressed")))
@protocol MEGAAOSGroupChatPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GroupChatPressedEvent")))
@interface MEGAAOSGroupChatPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)groupChatPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSGroupChatPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HiddenNodeOnboardingCloseButtonPressed")))
@protocol MEGAAOSHiddenNodeOnboardingCloseButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HiddenNodeOnboardingCloseButtonPressedEvent")))
@interface MEGAAOSHiddenNodeOnboardingCloseButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hiddenNodeOnboardingCloseButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHiddenNodeOnboardingCloseButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HiddenNodeOnboardingContinueButtonPressed")))
@protocol MEGAAOSHiddenNodeOnboardingContinueButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HiddenNodeOnboardingContinueButtonPressedEvent")))
@interface MEGAAOSHiddenNodeOnboardingContinueButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hiddenNodeOnboardingContinueButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHiddenNodeOnboardingContinueButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HiddenNodeUpgradeCloseButtonPressed")))
@protocol MEGAAOSHiddenNodeUpgradeCloseButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HiddenNodeUpgradeCloseButtonPressedEvent")))
@interface MEGAAOSHiddenNodeUpgradeCloseButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hiddenNodeUpgradeCloseButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHiddenNodeUpgradeCloseButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HiddenNodeUpgradeUpgradeButtonPressed")))
@protocol MEGAAOSHiddenNodeUpgradeUpgradeButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HiddenNodeUpgradeUpgradeButtonPressedEvent")))
@interface MEGAAOSHiddenNodeUpgradeUpgradeButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hiddenNodeUpgradeUpgradeButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHiddenNodeUpgradeUpgradeButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HideNodeOnboardingScreen")))
@protocol MEGAAOSHideNodeOnboardingScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HideNodeOnboardingScreenEvent")))
@interface MEGAAOSHideNodeOnboardingScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hideNodeOnboardingScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHideNodeOnboardingScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HideNodeUpgradeScreen")))
@protocol MEGAAOSHideNodeUpgradeScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HideNodeUpgradeScreenEvent")))
@interface MEGAAOSHideNodeUpgradeScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)hideNodeUpgradeScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHideNodeUpgradeScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeChooseFromPhotosMenuToolbar")))
@protocol MEGAAOSHomeChooseFromPhotosMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeChooseFromPhotosMenuToolbarEvent")))
@interface MEGAAOSHomeChooseFromPhotosMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeChooseFromPhotosMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeChooseFromPhotosMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeFABClosed")))
@protocol MEGAAOSHomeFABClosed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFABClosedEvent")))
@interface MEGAAOSHomeFABClosedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeFABClosedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeFABClosedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeFABExpanded")))
@protocol MEGAAOSHomeFABExpanded
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFABExpandedEvent")))
@interface MEGAAOSHomeFABExpandedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeFABExpandedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeFABExpandedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeFABPressed")))
@protocol MEGAAOSHomeFABPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeFABPressedEvent")))
@interface MEGAAOSHomeFABPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeFABPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeFABPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeHideNodeMenuItem")))
@protocol MEGAAOSHomeHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeHideNodeMenuItemEvent")))
@interface MEGAAOSHomeHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeImportFromFilesMenuToolbar")))
@protocol MEGAAOSHomeImportFromFilesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeImportFromFilesMenuToolbarEvent")))
@interface MEGAAOSHomeImportFromFilesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeImportFromFilesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeImportFromFilesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeNewChatFABPressed")))
@protocol MEGAAOSHomeNewChatFABPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeNewChatFABPressedEvent")))
@interface MEGAAOSHomeNewChatFABPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeNewChatFABPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeNewChatFABPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeNewChatTextPressed")))
@protocol MEGAAOSHomeNewChatTextPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeNewChatTextPressedEvent")))
@interface MEGAAOSHomeNewChatTextPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeNewChatTextPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeNewChatTextPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeNewTextFileMenuToolbar")))
@protocol MEGAAOSHomeNewTextFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeNewTextFileMenuToolbarEvent")))
@interface MEGAAOSHomeNewTextFileMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeNewTextFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeNewTextFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeScreen")))
@protocol MEGAAOSHomeScreen
@required
@end

__attribute__((swift_name("HomeScreenAudioTilePressed")))
@protocol MEGAAOSHomeScreenAudioTilePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenAudioTilePressedEvent")))
@interface MEGAAOSHomeScreenAudioTilePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenAudioTilePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeScreenAudioTilePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeScreenDocsTilePressed")))
@protocol MEGAAOSHomeScreenDocsTilePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenDocsTilePressedEvent")))
@interface MEGAAOSHomeScreenDocsTilePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenDocsTilePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeScreenDocsTilePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenEvent")))
@interface MEGAAOSHomeScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeScreenSearchMenuToolbar")))
@protocol MEGAAOSHomeScreenSearchMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenSearchMenuToolbarEvent")))
@interface MEGAAOSHomeScreenSearchMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenSearchMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeScreenSearchMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeScreenVideosTilePressed")))
@protocol MEGAAOSHomeScreenVideosTilePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeScreenVideosTilePressedEvent")))
@interface MEGAAOSHomeScreenVideosTilePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeScreenVideosTilePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeScreenVideosTilePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeUploadFABPressed")))
@protocol MEGAAOSHomeUploadFABPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeUploadFABPressedEvent")))
@interface MEGAAOSHomeUploadFABPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeUploadFABPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeUploadFABPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeUploadFilesMenuToolbar")))
@protocol MEGAAOSHomeUploadFilesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeUploadFilesMenuToolbarEvent")))
@interface MEGAAOSHomeUploadFilesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeUploadFilesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeUploadFilesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeUploadFolderMenuToolbar")))
@protocol MEGAAOSHomeUploadFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeUploadFolderMenuToolbarEvent")))
@interface MEGAAOSHomeUploadFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeUploadFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeUploadFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("HomeUploadTextPressed")))
@protocol MEGAAOSHomeUploadTextPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeUploadTextPressedEvent")))
@interface MEGAAOSHomeUploadTextPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)homeUploadTextPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSHomeUploadTextPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("IOSGuestEndCallFreePlanUsersLimitDialog")))
@protocol MEGAAOSIOSGuestEndCallFreePlanUsersLimitDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSGuestEndCallFreePlanUsersLimitDialogEvent")))
@interface MEGAAOSIOSGuestEndCallFreePlanUsersLimitDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iOSGuestEndCallFreePlanUsersLimitDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSIOSGuestEndCallFreePlanUsersLimitDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("IOSStartConversationButton")))
@protocol MEGAAOSIOSStartConversationButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSStartConversationButtonEvent")))
@interface MEGAAOSIOSStartConversationButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iOSStartConversationButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSIOSStartConversationButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("IOSUploadFilesButton")))
@protocol MEGAAOSIOSUploadFilesButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSUploadFilesButtonEvent")))
@interface MEGAAOSIOSUploadFilesButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iOSUploadFilesButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSIOSUploadFilesButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ImagePreviewHideNodeMenuToolBar")))
@protocol MEGAAOSImagePreviewHideNodeMenuToolBar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImagePreviewHideNodeMenuToolBarEvent")))
@interface MEGAAOSImagePreviewHideNodeMenuToolBarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)imagePreviewHideNodeMenuToolBarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSImagePreviewHideNodeMenuToolBarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ImportAlbumContentLoaded")))
@protocol MEGAAOSImportAlbumContentLoaded
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImportAlbumContentLoadedEvent")))
@interface MEGAAOSImportAlbumContentLoadedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)importAlbumContentLoadedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSImportAlbumContentLoadedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InAppUpdateCancelButtonPressed")))
@protocol MEGAAOSInAppUpdateCancelButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppUpdateCancelButtonPressedEvent")))
@interface MEGAAOSInAppUpdateCancelButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inAppUpdateCancelButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInAppUpdateCancelButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InAppUpdateDownloadSuccessMessageDisplayed")))
@protocol MEGAAOSInAppUpdateDownloadSuccessMessageDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppUpdateDownloadSuccessMessageDisplayedEvent")))
@interface MEGAAOSInAppUpdateDownloadSuccessMessageDisplayedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inAppUpdateDownloadSuccessMessageDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInAppUpdateDownloadSuccessMessageDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InAppUpdateRestartButtonPressed")))
@protocol MEGAAOSInAppUpdateRestartButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppUpdateRestartButtonPressedEvent")))
@interface MEGAAOSInAppUpdateRestartButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inAppUpdateRestartButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInAppUpdateRestartButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InAppUpdateUpdateButtonPressed")))
@protocol MEGAAOSInAppUpdateUpdateButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InAppUpdateUpdateButtonPressedEvent")))
@interface MEGAAOSInAppUpdateUpdateButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inAppUpdateUpdateButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInAppUpdateUpdateButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("IncomingSharesTab")))
@protocol MEGAAOSIncomingSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IncomingSharesTabEvent")))
@interface MEGAAOSIncomingSharesTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)incomingSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSIncomingSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteContactScreen")))
@protocol MEGAAOSInviteContactScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteContactScreenEvent")))
@interface MEGAAOSInviteContactScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteContactScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteContactScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteContactsPressed")))
@protocol MEGAAOSInviteContactsPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteContactsPressedEvent")))
@interface MEGAAOSInviteContactsPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteContactsPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteContactsPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteFriendsLearnMorePressed")))
@protocol MEGAAOSInviteFriendsLearnMorePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteFriendsLearnMorePressedEvent")))
@interface MEGAAOSInviteFriendsLearnMorePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteFriendsLearnMorePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteFriendsLearnMorePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteFriendsPressed")))
@protocol MEGAAOSInviteFriendsPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteFriendsPressedEvent")))
@interface MEGAAOSInviteFriendsPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteFriendsPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteFriendsPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteToMEGAAddFromContacts")))
@protocol MEGAAOSInviteToMEGAAddFromContacts
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteToMEGAAddFromContactsEvent")))
@interface MEGAAOSInviteToMEGAAddFromContactsEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteToMEGAAddFromContactsEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteToMEGAAddFromContactsEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteToMEGAEnterEmailAddress")))
@protocol MEGAAOSInviteToMEGAEnterEmailAddress
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteToMEGAEnterEmailAddressEvent")))
@interface MEGAAOSInviteToMEGAEnterEmailAddressEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteToMEGAEnterEmailAddressEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteToMEGAEnterEmailAddressEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteToMEGAPressed")))
@protocol MEGAAOSInviteToMEGAPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteToMEGAPressedEvent")))
@interface MEGAAOSInviteToMEGAPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteToMEGAPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteToMEGAPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteToMEGAScanCode")))
@protocol MEGAAOSInviteToMEGAScanCode
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteToMEGAScanCodeEvent")))
@interface MEGAAOSInviteToMEGAScanCodeEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteToMEGAScanCodeEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteToMEGAScanCodeEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("InviteToMEGAShareInvite")))
@protocol MEGAAOSInviteToMEGAShareInvite
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InviteToMEGAShareInviteEvent")))
@interface MEGAAOSInviteToMEGAShareInviteEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inviteToMEGAShareInviteEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSInviteToMEGAShareInviteEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("JoinMeetingPressed")))
@protocol MEGAAOSJoinMeetingPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JoinMeetingPressedEvent")))
@interface MEGAAOSJoinMeetingPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)joinMeetingPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSJoinMeetingPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkConfirmPasswordFileButtonPressed")))
@protocol MEGAAOSLinkConfirmPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkConfirmPasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkConfirmPasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkConfirmPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkConfirmPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkConfirmPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkConfirmPasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkConfirmPasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkConfirmPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkConfirmPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuItem")))
@protocol MEGAAOSLinkGetLinkForNodesMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkGetLinkForNodesMenuItemEvent")))
@interface MEGAAOSLinkGetLinkForNodesMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkGetLinkForNodesMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkGetLinkForNodesMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkGetLinkForNodesMenuToolbar")))
@protocol MEGAAOSLinkGetLinkForNodesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkGetLinkForNodesMenuToolbarEvent")))
@interface MEGAAOSLinkGetLinkForNodesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkGetLinkForNodesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkGetLinkForNodesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuItem")))
@protocol MEGAAOSLinkManageLinkTapFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFileMenuItemEvent")))
@interface MEGAAOSLinkManageLinkTapFileMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFileMenuToolbar")))
@protocol MEGAAOSLinkManageLinkTapFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFileMenuToolbarEvent")))
@interface MEGAAOSLinkManageLinkTapFileMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuItem")))
@protocol MEGAAOSLinkManageLinkTapFolderMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFolderMenuItemEvent")))
@interface MEGAAOSLinkManageLinkTapFolderMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFolderMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFolderMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbar")))
@protocol MEGAAOSLinkManageLinkTapFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkManageLinkTapFolderMenuToolbarEvent")))
@interface MEGAAOSLinkManageLinkTapFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkManageLinkTapFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkManageLinkTapFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileDialog")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFileDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFileDialogEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFileDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFileDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFileDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderDialog")))
@protocol MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeeNotNowPlanFolderDialogEvent")))
@interface MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeeNotNowPlanFolderDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeeNotNowPlanFolderDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeePlanFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFileButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFileDialog")))
@protocol MEGAAOSLinkProFeatureSeePlanFileDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFileDialogEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFileDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFileDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFileDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressed")))
@protocol MEGAAOSLinkProFeatureSeePlanFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFolderButtonPressedEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkProFeatureSeePlanFolderDialog")))
@protocol MEGAAOSLinkProFeatureSeePlanFolderDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkProFeatureSeePlanFolderDialogEvent")))
@interface MEGAAOSLinkProFeatureSeePlanFolderDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkProFeatureSeePlanFolderDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkProFeatureSeePlanFolderDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkRemovePasswordFileButtonPressed")))
@protocol MEGAAOSLinkRemovePasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRemovePasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkRemovePasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkRemovePasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkRemovePasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkRemovePasswordFolderButtonPressed")))
@protocol MEGAAOSLinkRemovePasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkRemovePasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkRemovePasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkRemovePasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkRemovePasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkResetPasswordFileButtonPressed")))
@protocol MEGAAOSLinkResetPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResetPasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkResetPasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkResetPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkResetPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkResetPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkResetPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResetPasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkResetPasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkResetPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkResetPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressed")))
@protocol MEGAAOSLinkSendDecryptionKeyFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSendDecryptionKeyFileButtonPressedEvent")))
@interface MEGAAOSLinkSendDecryptionKeyFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSendDecryptionKeyFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSendDecryptionKeyFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressed")))
@protocol MEGAAOSLinkSendDecryptionKeyFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSendDecryptionKeyFolderButtonPressedEvent")))
@interface MEGAAOSLinkSendDecryptionKeyFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSendDecryptionKeyFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSendDecryptionKeyFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetExpiryDateFileButtonPressed")))
@protocol MEGAAOSLinkSetExpiryDateFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetExpiryDateFileButtonPressedEvent")))
@interface MEGAAOSLinkSetExpiryDateFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetExpiryDateFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetExpiryDateFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressed")))
@protocol MEGAAOSLinkSetExpiryDateFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetExpiryDateFolderButtonPressedEvent")))
@interface MEGAAOSLinkSetExpiryDateFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetExpiryDateFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetExpiryDateFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetPasswordFileButtonPressed")))
@protocol MEGAAOSLinkSetPasswordFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetPasswordFileButtonPressedEvent")))
@interface MEGAAOSLinkSetPasswordFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetPasswordFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetPasswordFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSetPasswordFolderButtonPressed")))
@protocol MEGAAOSLinkSetPasswordFolderButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSetPasswordFolderButtonPressedEvent")))
@interface MEGAAOSLinkSetPasswordFolderButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSetPasswordFolderButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSetPasswordFolderButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuItem")))
@protocol MEGAAOSLinkShareLinkForNodesMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkForNodesMenuItemEvent")))
@interface MEGAAOSLinkShareLinkForNodesMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkForNodesMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkForNodesMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkForNodesMenuToolbar")))
@protocol MEGAAOSLinkShareLinkForNodesMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkForNodesMenuToolbarEvent")))
@interface MEGAAOSLinkShareLinkForNodesMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkForNodesMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkForNodesMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuItem")))
@protocol MEGAAOSLinkShareLinkTapFileMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFileMenuItemEvent")))
@interface MEGAAOSLinkShareLinkTapFileMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFileMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFileMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFileMenuToolbar")))
@protocol MEGAAOSLinkShareLinkTapFileMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFileMenuToolbarEvent")))
@interface MEGAAOSLinkShareLinkTapFileMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFileMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFileMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuItem")))
@protocol MEGAAOSLinkShareLinkTapFolderMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFolderMenuItemEvent")))
@interface MEGAAOSLinkShareLinkTapFolderMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFolderMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFolderMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbar")))
@protocol MEGAAOSLinkShareLinkTapFolderMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkShareLinkTapFolderMenuToolbarEvent")))
@interface MEGAAOSLinkShareLinkTapFolderMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkShareLinkTapFolderMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkShareLinkTapFolderMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LinkSharesTab")))
@protocol MEGAAOSLinkSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkSharesTabEvent")))
@interface MEGAAOSLinkSharesTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)linkSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLinkSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LockButtonPressed")))
@protocol MEGAAOSLockButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LockButtonPressedEvent")))
@interface MEGAAOSLockButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lockButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLockButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LoginButtonPressed")))
@protocol MEGAAOSLoginButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginButtonPressedEvent")))
@interface MEGAAOSLoginButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLoginButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LoginScreen")))
@protocol MEGAAOSLoginScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginScreenEvent")))
@interface MEGAAOSLoginScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLoginScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LogoutButtonPressed")))
@protocol MEGAAOSLogoutButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogoutButtonPressedEvent")))
@interface MEGAAOSLogoutButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)logoutButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLogoutButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("LoopButtonPressed")))
@protocol MEGAAOSLoopButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoopButtonPressedEvent")))
@interface MEGAAOSLoopButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loopButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSLoopButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MainTabBarScreen")))
@protocol MEGAAOSMainTabBarScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainTabBarScreenEvent")))
@interface MEGAAOSMainTabBarScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mainTabBarScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMainTabBarScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MaxCallDurationReachedModal")))
@protocol MEGAAOSMaxCallDurationReachedModal
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MaxCallDurationReachedModalEvent")))
@interface MEGAAOSMaxCallDurationReachedModalEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)maxCallDurationReachedModalEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMaxCallDurationReachedModalEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MeetingsTab")))
@protocol MEGAAOSMeetingsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeetingsTabEvent")))
@interface MEGAAOSMeetingsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)meetingsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMeetingsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MultiFactorAuthScreen")))
@protocol MEGAAOSMultiFactorAuthScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiFactorAuthScreenEvent")))
@interface MEGAAOSMultiFactorAuthScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)multiFactorAuthScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMultiFactorAuthScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MultiFactorAuthVerificationFailed")))
@protocol MEGAAOSMultiFactorAuthVerificationFailed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiFactorAuthVerificationFailedEvent")))
@interface MEGAAOSMultiFactorAuthVerificationFailedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)multiFactorAuthVerificationFailedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMultiFactorAuthVerificationFailedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MultiFactorAuthVerificationSuccess")))
@protocol MEGAAOSMultiFactorAuthVerificationSuccess
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiFactorAuthVerificationSuccessEvent")))
@interface MEGAAOSMultiFactorAuthVerificationSuccessEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)multiFactorAuthVerificationSuccessEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMultiFactorAuthVerificationSuccessEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MultipleAlbumLinksScreen")))
@protocol MEGAAOSMultipleAlbumLinksScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultipleAlbumLinksScreenEvent")))
@interface MEGAAOSMultipleAlbumLinksScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)multipleAlbumLinksScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMultipleAlbumLinksScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MyAccountHallScreen")))
@protocol MEGAAOSMyAccountHallScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyAccountHallScreenEvent")))
@interface MEGAAOSMyAccountHallScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myAccountHallScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMyAccountHallScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("MyAccountProfileNavigationItem")))
@protocol MEGAAOSMyAccountProfileNavigationItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyAccountProfileNavigationItemEvent")))
@interface MEGAAOSMyAccountProfileNavigationItemEvent : MEGAAOSBase <MEGAAOSNavigationEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)myAccountProfileNavigationItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSMyAccountProfileNavigationItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *navigationElementType __attribute__((swift_name("navigationElementType")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NewChatScreen")))
@protocol MEGAAOSNewChatScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NewChatScreenEvent")))
@interface MEGAAOSNewChatScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getNewChatScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNewChatScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoDescriptionAddedMessageDisplayed")))
@protocol MEGAAOSNodeInfoDescriptionAddedMessageDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoDescriptionAddedMessageDisplayedEvent")))
@interface MEGAAOSNodeInfoDescriptionAddedMessageDisplayedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoDescriptionAddedMessageDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoDescriptionAddedMessageDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoDescriptionCharacterLimit")))
@protocol MEGAAOSNodeInfoDescriptionCharacterLimit
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoDescriptionCharacterLimitEvent")))
@interface MEGAAOSNodeInfoDescriptionCharacterLimitEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoDescriptionCharacterLimitEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoDescriptionCharacterLimitEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoDescriptionConfirmed")))
@protocol MEGAAOSNodeInfoDescriptionConfirmed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoDescriptionConfirmedEvent")))
@interface MEGAAOSNodeInfoDescriptionConfirmedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoDescriptionConfirmedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoDescriptionConfirmedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoDescriptionEntered")))
@protocol MEGAAOSNodeInfoDescriptionEntered
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoDescriptionEnteredEvent")))
@interface MEGAAOSNodeInfoDescriptionEnteredEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoDescriptionEnteredEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoDescriptionEnteredEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoDescriptionUpdatedMessageDisplayed")))
@protocol MEGAAOSNodeInfoDescriptionUpdatedMessageDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoDescriptionUpdatedMessageDisplayedEvent")))
@interface MEGAAOSNodeInfoDescriptionUpdatedMessageDisplayedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoDescriptionUpdatedMessageDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoDescriptionUpdatedMessageDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoScreen")))
@protocol MEGAAOSNodeInfoScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoScreenEvent")))
@interface MEGAAOSNodeInfoScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoTagsAdded")))
@protocol MEGAAOSNodeInfoTagsAdded
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoTagsAddedEvent")))
@interface MEGAAOSNodeInfoTagsAddedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoTagsAddedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoTagsAddedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoTagsEntered")))
@protocol MEGAAOSNodeInfoTagsEntered
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoTagsEnteredEvent")))
@interface MEGAAOSNodeInfoTagsEnteredEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoTagsEnteredEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoTagsEnteredEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoTagsLengthErrorDisplayed")))
@protocol MEGAAOSNodeInfoTagsLengthErrorDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoTagsLengthErrorDisplayedEvent")))
@interface MEGAAOSNodeInfoTagsLengthErrorDisplayedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoTagsLengthErrorDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoTagsLengthErrorDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoTagsLimitErrorDisplayed")))
@protocol MEGAAOSNodeInfoTagsLimitErrorDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoTagsLimitErrorDisplayedEvent")))
@interface MEGAAOSNodeInfoTagsLimitErrorDisplayedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoTagsLimitErrorDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoTagsLimitErrorDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoTagsProOnlyEntered")))
@protocol MEGAAOSNodeInfoTagsProOnlyEntered
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoTagsProOnlyEnteredEvent")))
@interface MEGAAOSNodeInfoTagsProOnlyEnteredEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoTagsProOnlyEnteredEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoTagsProOnlyEnteredEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("NodeInfoTagsRemoved")))
@protocol MEGAAOSNodeInfoTagsRemoved
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NodeInfoTagsRemovedEvent")))
@interface MEGAAOSNodeInfoTagsRemovedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nodeInfoTagsRemovedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSNodeInfoTagsRemovedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OffOptionForHideSubtitlePressed")))
@protocol MEGAAOSOffOptionForHideSubtitlePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OffOptionForHideSubtitlePressedEvent")))
@interface MEGAAOSOffOptionForHideSubtitlePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)offOptionForHideSubtitlePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOffOptionForHideSubtitlePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OfflineTab")))
@protocol MEGAAOSOfflineTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OfflineTabEvent")))
@interface MEGAAOSOfflineTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)offlineTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOfflineTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantAViewProPlansButton")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantAViewProPlansButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantAViewProPlansButtonEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantAViewProPlansButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantAViewProPlansButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantAViewProPlansButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBBuyProPlanButton")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBBuyProPlanButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBBuyProPlanButtonEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBBuyProPlanButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBBuyProPlanButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBBuyProPlanButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBFreePlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBFreePlanContinueButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBFreePlanContinueButtonPressedEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBFreePlanContinueButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBFreePlanContinueButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBFreePlanContinueButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressedEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBProIIIPlanContinueButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressedEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBProIIPlanContinueButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBProIIPlanContinueButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIPlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProIPlanContinueButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBProIPlanContinueButtonPressedEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBProIPlanContinueButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBProIPlanContinueButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBProIPlanContinueButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressedEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBProLitePlanContinueButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBProLitePlanContinueButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OnboardingUpsellingDialogVariantBProPlanIIIDisplayed")))
@protocol MEGAAOSOnboardingUpsellingDialogVariantBProPlanIIIDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnboardingUpsellingDialogVariantBProPlanIIIDisplayedEvent")))
@interface MEGAAOSOnboardingUpsellingDialogVariantBProPlanIIIDisplayedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)onboardingUpsellingDialogVariantBProPlanIIIDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOnboardingUpsellingDialogVariantBProPlanIIIDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("OutgoingSharesTab")))
@protocol MEGAAOSOutgoingSharesTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OutgoingSharesTabEvent")))
@interface MEGAAOSOutgoingSharesTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)outgoingSharesTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSOutgoingSharesTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasscodeBiometricUnlockDialog")))
@protocol MEGAAOSPasscodeBiometricUnlockDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasscodeBiometricUnlockDialogEvent")))
@interface MEGAAOSPasscodeBiometricUnlockDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passcodeBiometricUnlockDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasscodeBiometricUnlockDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasscodeEntered")))
@protocol MEGAAOSPasscodeEntered
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasscodeEnteredEvent")))
@interface MEGAAOSPasscodeEnteredEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passcodeEnteredEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasscodeEnteredEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasscodeLogoutButtonPressed")))
@protocol MEGAAOSPasscodeLogoutButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasscodeLogoutButtonPressedEvent")))
@interface MEGAAOSPasscodeLogoutButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passcodeLogoutButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasscodeLogoutButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasscodeScreen")))
@protocol MEGAAOSPasscodeScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasscodeScreenEvent")))
@interface MEGAAOSPasscodeScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passcodeScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasscodeScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasscodeSettingScreen")))
@protocol MEGAAOSPasscodeSettingScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasscodeSettingScreenEvent")))
@interface MEGAAOSPasscodeSettingScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passcodeSettingScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasscodeSettingScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasscodeUnlockDialog")))
@protocol MEGAAOSPasscodeUnlockDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasscodeUnlockDialogEvent")))
@interface MEGAAOSPasscodeUnlockDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passcodeUnlockDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasscodeUnlockDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PasswordReminderScreen")))
@protocol MEGAAOSPasswordReminderScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PasswordReminderScreenEvent")))
@interface MEGAAOSPasswordReminderScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passwordReminderScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPasswordReminderScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoItemSelected")))
@interface MEGAAOSPhotoItemSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSPhotoItemSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSPhotoItemSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoItemSelected.SelectionType")))
@interface MEGAAOSPhotoItemSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSPhotoItemSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSPhotoItemSelectedSelectionType *single __attribute__((swift_name("single")));
@property (class, readonly) MEGAAOSPhotoItemSelectedSelectionType *multiadd __attribute__((swift_name("multiadd")));
@property (class, readonly) MEGAAOSPhotoItemSelectedSelectionType *multiremove __attribute__((swift_name("multiremove")));
+ (MEGAAOSKotlinArray<MEGAAOSPhotoItemSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSPhotoItemSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoItemSelectedEvent")))
@interface MEGAAOSPhotoItemSelectedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithSelectionType:(MEGAAOSPhotoItemSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PhotoPreviewSaveToDeviceMenuToolbar")))
@protocol MEGAAOSPhotoPreviewSaveToDeviceMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoPreviewSaveToDeviceMenuToolbarEvent")))
@interface MEGAAOSPhotoPreviewSaveToDeviceMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)photoPreviewSaveToDeviceMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPhotoPreviewSaveToDeviceMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PhotoPreviewScreen")))
@protocol MEGAAOSPhotoPreviewScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoPreviewScreenEvent")))
@interface MEGAAOSPhotoPreviewScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)photoPreviewScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPhotoPreviewScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PhotoScreen")))
@protocol MEGAAOSPhotoScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhotoScreenEvent")))
@interface MEGAAOSPhotoScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)photoScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPhotoScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("PlaySlideshowMenuToolbar")))
@protocol MEGAAOSPlaySlideshowMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlaySlideshowMenuToolbarEvent")))
@interface MEGAAOSPlaySlideshowMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)playSlideshowMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSPlaySlideshowMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("QuickAccessWidgetFavouritesPressed")))
@protocol MEGAAOSQuickAccessWidgetFavouritesPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuickAccessWidgetFavouritesPressedEvent")))
@interface MEGAAOSQuickAccessWidgetFavouritesPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)quickAccessWidgetFavouritesPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSQuickAccessWidgetFavouritesPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("QuickAccessWidgetOffilePressed")))
@protocol MEGAAOSQuickAccessWidgetOffilePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuickAccessWidgetOffilePressedEvent")))
@interface MEGAAOSQuickAccessWidgetOffilePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)quickAccessWidgetOffilePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSQuickAccessWidgetOffilePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("QuickAccessWidgetRecentsPressed")))
@protocol MEGAAOSQuickAccessWidgetRecentsPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("QuickAccessWidgetRecentsPressedEvent")))
@interface MEGAAOSQuickAccessWidgetRecentsPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)quickAccessWidgetRecentsPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSQuickAccessWidgetRecentsPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RecentsTab")))
@protocol MEGAAOSRecentsTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecentsTabEvent")))
@interface MEGAAOSRecentsTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recentsTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSRecentsTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RecoveryKeyScreen")))
@protocol MEGAAOSRecoveryKeyScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecoveryKeyScreenEvent")))
@interface MEGAAOSRecoveryKeyScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)recoveryKeyScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSRecoveryKeyScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RemoveItemsFromAlbumDialogButton")))
@protocol MEGAAOSRemoveItemsFromAlbumDialogButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveItemsFromAlbumDialogButtonEvent")))
@interface MEGAAOSRemoveItemsFromAlbumDialogButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)removeItemsFromAlbumDialogButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSRemoveItemsFromAlbumDialogButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("RemoveLinksConfirmationDialog")))
@protocol MEGAAOSRemoveLinksConfirmationDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemoveLinksConfirmationDialogEvent")))
@interface MEGAAOSRemoveLinksConfirmationDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)removeLinksConfirmationDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSRemoveLinksConfirmationDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ResendEmailConfirmationButtonPressed")))
@protocol MEGAAOSResendEmailConfirmationButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResendEmailConfirmationButtonPressedEvent")))
@interface MEGAAOSResendEmailConfirmationButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendEmailConfirmationButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSResendEmailConfirmationButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduleMeetingMenuItem")))
@protocol MEGAAOSScheduleMeetingMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleMeetingMenuItemEvent")))
@interface MEGAAOSScheduleMeetingMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduleMeetingMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduleMeetingMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduleMeetingPressed")))
@protocol MEGAAOSScheduleMeetingPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleMeetingPressedEvent")))
@interface MEGAAOSScheduleMeetingPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduleMeetingPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduleMeetingPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingCancelMenuItem")))
@protocol MEGAAOSScheduledMeetingCancelMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingCancelMenuItemEvent")))
@interface MEGAAOSScheduledMeetingCancelMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingCancelMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingCancelMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingCreateConfirmButton")))
@protocol MEGAAOSScheduledMeetingCreateConfirmButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingCreateConfirmButtonEvent")))
@interface MEGAAOSScheduledMeetingCreateConfirmButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingCreateConfirmButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingCreateConfirmButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingEditMenuItem")))
@protocol MEGAAOSScheduledMeetingEditMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingEditMenuItemEvent")))
@interface MEGAAOSScheduledMeetingEditMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingEditMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingEditMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingEditMenuToolbar")))
@protocol MEGAAOSScheduledMeetingEditMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingEditMenuToolbarEvent")))
@interface MEGAAOSScheduledMeetingEditMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingEditMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingEditMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingJoinGuestButton")))
@protocol MEGAAOSScheduledMeetingJoinGuestButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingJoinGuestButtonEvent")))
@interface MEGAAOSScheduledMeetingJoinGuestButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingJoinGuestButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingJoinGuestButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingReminderNotificationJoinButton")))
@protocol MEGAAOSScheduledMeetingReminderNotificationJoinButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingReminderNotificationJoinButtonEvent")))
@interface MEGAAOSScheduledMeetingReminderNotificationJoinButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingReminderNotificationJoinButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingReminderNotificationJoinButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingReminderNotificationMessageButton")))
@protocol MEGAAOSScheduledMeetingReminderNotificationMessageButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingReminderNotificationMessageButtonEvent")))
@interface MEGAAOSScheduledMeetingReminderNotificationMessageButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingReminderNotificationMessageButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingReminderNotificationMessageButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingSettingEnableMeetingLinkButton")))
@protocol MEGAAOSScheduledMeetingSettingEnableMeetingLinkButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingSettingEnableMeetingLinkButtonEvent")))
@interface MEGAAOSScheduledMeetingSettingEnableMeetingLinkButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingSettingEnableMeetingLinkButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingSettingEnableMeetingLinkButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingSettingEnableOpenInviteButton")))
@protocol MEGAAOSScheduledMeetingSettingEnableOpenInviteButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingSettingEnableOpenInviteButtonEvent")))
@interface MEGAAOSScheduledMeetingSettingEnableOpenInviteButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingSettingEnableOpenInviteButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingSettingEnableOpenInviteButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingSettingRecurrenceButton")))
@protocol MEGAAOSScheduledMeetingSettingRecurrenceButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingSettingRecurrenceButtonEvent")))
@interface MEGAAOSScheduledMeetingSettingRecurrenceButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingSettingRecurrenceButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingSettingRecurrenceButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingSettingSendCalendarInviteButton")))
@protocol MEGAAOSScheduledMeetingSettingSendCalendarInviteButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingSettingSendCalendarInviteButtonEvent")))
@interface MEGAAOSScheduledMeetingSettingSendCalendarInviteButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingSettingSendCalendarInviteButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingSettingSendCalendarInviteButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ScheduledMeetingShareMeetingLinkButton")))
@protocol MEGAAOSScheduledMeetingShareMeetingLinkButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduledMeetingShareMeetingLinkButtonEvent")))
@interface MEGAAOSScheduledMeetingShareMeetingLinkButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scheduledMeetingShareMeetingLinkButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSScheduledMeetingShareMeetingLinkButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchAudioFilterPressed")))
@interface MEGAAOSSearchAudioFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchAudioFilterPressedEvent")))
@interface MEGAAOSSearchAudioFilterPressedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchAudioFilterPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchAudioFilterPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchDateAddedDropdownChipPressed")))
@protocol MEGAAOSSearchDateAddedDropdownChipPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedDropdownChipPressedEvent")))
@interface MEGAAOSSearchDateAddedDropdownChipPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedDropdownChipPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedDropdownChipPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastSevenDaysClicked")))
@interface MEGAAOSSearchDateAddedLastSevenDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastSevenDaysClickedEvent")))
@interface MEGAAOSSearchDateAddedLastSevenDaysClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedLastSevenDaysClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedLastSevenDaysClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastThirtyDaysClicked")))
@interface MEGAAOSSearchDateAddedLastThirtyDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastThirtyDaysClickedEvent")))
@interface MEGAAOSSearchDateAddedLastThirtyDaysClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedLastThirtyDaysClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedLastThirtyDaysClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastYearClicked")))
@interface MEGAAOSSearchDateAddedLastYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedLastYearClickedEvent")))
@interface MEGAAOSSearchDateAddedLastYearClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedLastYearClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedLastYearClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedOlderClicked")))
@interface MEGAAOSSearchDateAddedOlderClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedOlderClickedEvent")))
@interface MEGAAOSSearchDateAddedOlderClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedOlderClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedOlderClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedThisYearClicked")))
@interface MEGAAOSSearchDateAddedThisYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedThisYearClickedEvent")))
@interface MEGAAOSSearchDateAddedThisYearClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedThisYearClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedThisYearClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedTodayClicked")))
@interface MEGAAOSSearchDateAddedTodayClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDateAddedTodayClickedEvent")))
@interface MEGAAOSSearchDateAddedTodayClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDateAddedTodayClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDateAddedTodayClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDocsFilterPressed")))
@interface MEGAAOSSearchDocsFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchDocsFilterPressedEvent")))
@interface MEGAAOSSearchDocsFilterPressedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchDocsFilterPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchDocsFilterPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeAudioOptionClicked")))
@interface MEGAAOSSearchFileTypeAudioOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeAudioOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeAudioOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeAudioOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeAudioOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeDocumentsOptionClicked")))
@interface MEGAAOSSearchFileTypeDocumentsOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeDocumentsOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeDocumentsOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeDocumentsOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeDocumentsOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchFileTypeDropdownChipPressed")))
@protocol MEGAAOSSearchFileTypeDropdownChipPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeDropdownChipPressedEvent")))
@interface MEGAAOSSearchFileTypeDropdownChipPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeDropdownChipPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeDropdownChipPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeFolderOptionClicked")))
@interface MEGAAOSSearchFileTypeFolderOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeFolderOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeFolderOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeFolderOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeFolderOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeImagesOptionClicked")))
@interface MEGAAOSSearchFileTypeImagesOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeImagesOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeImagesOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeImagesOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeImagesOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeOtherOptionClicked")))
@interface MEGAAOSSearchFileTypeOtherOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeOtherOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeOtherOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeOtherOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeOtherOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypePdfOptionClicked")))
@interface MEGAAOSSearchFileTypePdfOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypePdfOptionClickedEvent")))
@interface MEGAAOSSearchFileTypePdfOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypePdfOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypePdfOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypePresentationOptionClicked")))
@interface MEGAAOSSearchFileTypePresentationOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypePresentationOptionClickedEvent")))
@interface MEGAAOSSearchFileTypePresentationOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypePresentationOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypePresentationOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeSpreadsheetOptionClicked")))
@interface MEGAAOSSearchFileTypeSpreadsheetOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeSpreadsheetOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeSpreadsheetOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeSpreadsheetOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeSpreadsheetOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeVideoOptionClicked")))
@interface MEGAAOSSearchFileTypeVideoOptionClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFileTypeVideoOptionClickedEvent")))
@interface MEGAAOSSearchFileTypeVideoOptionClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchFileTypeVideoOptionClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchFileTypeVideoOptionClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchImageFilterPressed")))
@interface MEGAAOSSearchImageFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchImageFilterPressedEvent")))
@interface MEGAAOSSearchImageFilterPressedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchImageFilterPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchImageFilterPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchItemSelected")))
@interface MEGAAOSSearchItemSelected : MEGAAOSBase
- (instancetype)initWithSearchItemType:(MEGAAOSSearchItemSelectedSearchItemType *)searchItemType __attribute__((swift_name("init(searchItemType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSSearchItemSelectedSearchItemType *searchItemType __attribute__((swift_name("searchItemType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchItemSelected.SearchItemType")))
@interface MEGAAOSSearchItemSelectedSearchItemType : MEGAAOSKotlinEnum<MEGAAOSSearchItemSelectedSearchItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSSearchItemSelectedSearchItemType *file __attribute__((swift_name("file")));
@property (class, readonly) MEGAAOSSearchItemSelectedSearchItemType *folder __attribute__((swift_name("folder")));
+ (MEGAAOSKotlinArray<MEGAAOSSearchItemSelectedSearchItemType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSSearchItemSelectedSearchItemType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchItemSelectedEvent")))
@interface MEGAAOSSearchItemSelectedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithSearchItemType:(MEGAAOSSearchItemSelectedSearchItemType *)searchItemType __attribute__((swift_name("init(searchItemType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchLastModifiedDropdownChipPressed")))
@protocol MEGAAOSSearchLastModifiedDropdownChipPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedDropdownChipPressedEvent")))
@interface MEGAAOSSearchLastModifiedDropdownChipPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedDropdownChipPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedDropdownChipPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastSevenDaysClicked")))
@interface MEGAAOSSearchLastModifiedLastSevenDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastSevenDaysClickedEvent")))
@interface MEGAAOSSearchLastModifiedLastSevenDaysClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedLastSevenDaysClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedLastSevenDaysClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastThirtyDaysClicked")))
@interface MEGAAOSSearchLastModifiedLastThirtyDaysClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastThirtyDaysClickedEvent")))
@interface MEGAAOSSearchLastModifiedLastThirtyDaysClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedLastThirtyDaysClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedLastThirtyDaysClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastYearClicked")))
@interface MEGAAOSSearchLastModifiedLastYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedLastYearClickedEvent")))
@interface MEGAAOSSearchLastModifiedLastYearClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedLastYearClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedLastYearClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedOlderClicked")))
@interface MEGAAOSSearchLastModifiedOlderClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedOlderClickedEvent")))
@interface MEGAAOSSearchLastModifiedOlderClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedOlderClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedOlderClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedThisYearClicked")))
@interface MEGAAOSSearchLastModifiedThisYearClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedThisYearClickedEvent")))
@interface MEGAAOSSearchLastModifiedThisYearClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedThisYearClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedThisYearClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedTodayClicked")))
@interface MEGAAOSSearchLastModifiedTodayClicked : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchLastModifiedTodayClickedEvent")))
@interface MEGAAOSSearchLastModifiedTodayClickedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchLastModifiedTodayClickedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchLastModifiedTodayClickedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchModeEnablePressed")))
@protocol MEGAAOSSearchModeEnablePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchModeEnablePressedEvent")))
@interface MEGAAOSSearchModeEnablePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchModeEnablePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchModeEnablePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResetFilterPressed")))
@interface MEGAAOSSearchResetFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResetFilterPressedEvent")))
@interface MEGAAOSSearchResetFilterPressedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchResetFilterPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchResetFilterPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchResultGetLinkMenuItem")))
@protocol MEGAAOSSearchResultGetLinkMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultGetLinkMenuItemEvent")))
@interface MEGAAOSSearchResultGetLinkMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchResultGetLinkMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchResultGetLinkMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchResultOpenWithMenuItem")))
@protocol MEGAAOSSearchResultOpenWithMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultOpenWithMenuItemEvent")))
@interface MEGAAOSSearchResultOpenWithMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchResultOpenWithMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchResultOpenWithMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchResultOverflowMenuItem")))
@protocol MEGAAOSSearchResultOverflowMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultOverflowMenuItemEvent")))
@interface MEGAAOSSearchResultOverflowMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchResultOverflowMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchResultOverflowMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchResultSaveToDeviceMenuItem")))
@protocol MEGAAOSSearchResultSaveToDeviceMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultSaveToDeviceMenuItemEvent")))
@interface MEGAAOSSearchResultSaveToDeviceMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchResultSaveToDeviceMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchResultSaveToDeviceMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SearchResultShareMenuItem")))
@protocol MEGAAOSSearchResultShareMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResultShareMenuItemEvent")))
@interface MEGAAOSSearchResultShareMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchResultShareMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchResultShareMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchVideosFilterPressed")))
@interface MEGAAOSSearchVideosFilterPressed : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchVideosFilterPressedEvent")))
@interface MEGAAOSSearchVideosFilterPressedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)searchVideosFilterPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSearchVideosFilterPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SendLinkToChatPressed")))
@protocol MEGAAOSSendLinkToChatPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendLinkToChatPressedEvent")))
@interface MEGAAOSSendLinkToChatPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sendLinkToChatPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSendLinkToChatPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SettingsScreen")))
@protocol MEGAAOSSettingsScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsScreenEvent")))
@interface MEGAAOSSettingsScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)settingsScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSettingsScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ShareLinkBarButtonPressed")))
@protocol MEGAAOSShareLinkBarButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareLinkBarButtonPressedEvent")))
@interface MEGAAOSShareLinkBarButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shareLinkBarButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSShareLinkBarButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ShareLinkPressed")))
@protocol MEGAAOSShareLinkPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareLinkPressedEvent")))
@interface MEGAAOSShareLinkPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shareLinkPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSShareLinkPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SharedItemsScreen")))
@protocol MEGAAOSSharedItemsScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedItemsScreenEvent")))
@interface MEGAAOSSharedItemsScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sharedItemsScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSharedItemsScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ShortcutWidgetAddContactButtonPressed")))
@protocol MEGAAOSShortcutWidgetAddContactButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShortcutWidgetAddContactButtonPressedEvent")))
@interface MEGAAOSShortcutWidgetAddContactButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shortcutWidgetAddContactButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSShortcutWidgetAddContactButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ShortcutWidgetScanDocumentButtonPressed")))
@protocol MEGAAOSShortcutWidgetScanDocumentButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShortcutWidgetScanDocumentButtonPressedEvent")))
@interface MEGAAOSShortcutWidgetScanDocumentButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shortcutWidgetScanDocumentButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSShortcutWidgetScanDocumentButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ShortcutWidgetStartConversationButtonPressed")))
@protocol MEGAAOSShortcutWidgetStartConversationButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShortcutWidgetStartConversationButtonPressedEvent")))
@interface MEGAAOSShortcutWidgetStartConversationButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shortcutWidgetStartConversationButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSShortcutWidgetStartConversationButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ShortcutWidgetUploadFileButtonPressed")))
@protocol MEGAAOSShortcutWidgetUploadFileButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShortcutWidgetUploadFileButtonPressedEvent")))
@interface MEGAAOSShortcutWidgetUploadFileButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)shortcutWidgetUploadFileButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSShortcutWidgetUploadFileButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SignUpButtonOnLoginPagePressed")))
@protocol MEGAAOSSignUpButtonOnLoginPagePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpButtonOnLoginPagePressedEvent")))
@interface MEGAAOSSignUpButtonOnLoginPagePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signUpButtonOnLoginPagePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSignUpButtonOnLoginPagePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SignUpButtonOnUSPPagePressed")))
@protocol MEGAAOSSignUpButtonOnUSPPagePressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpButtonOnUSPPagePressedEvent")))
@interface MEGAAOSSignUpButtonOnUSPPagePressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signUpButtonOnUSPPagePressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSignUpButtonOnUSPPagePressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SignUpScreen")))
@protocol MEGAAOSSignUpScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignUpScreenEvent")))
@interface MEGAAOSSignUpScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)signUpScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSignUpScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SingleAlbumLinkScreen")))
@protocol MEGAAOSSingleAlbumLinkScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SingleAlbumLinkScreenEvent")))
@interface MEGAAOSSingleAlbumLinkScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)singleAlbumLinkScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSingleAlbumLinkScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideShowScreen")))
@protocol MEGAAOSSlideShowScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideShowScreenEvent")))
@interface MEGAAOSSlideShowScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideShowScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideShowScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideshowSettingOrderNewestButton")))
@protocol MEGAAOSSlideshowSettingOrderNewestButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingOrderNewestButtonEvent")))
@interface MEGAAOSSlideshowSettingOrderNewestButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingOrderNewestButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingOrderNewestButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideshowSettingOrderOldestButton")))
@protocol MEGAAOSSlideshowSettingOrderOldestButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingOrderOldestButtonEvent")))
@interface MEGAAOSSlideshowSettingOrderOldestButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingOrderOldestButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingOrderOldestButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideshowSettingOrderShuffleButton")))
@protocol MEGAAOSSlideshowSettingOrderShuffleButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingOrderShuffleButtonEvent")))
@interface MEGAAOSSlideshowSettingOrderShuffleButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingOrderShuffleButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingOrderShuffleButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingRepeatOffButton")))
@interface MEGAAOSSlideshowSettingRepeatOffButton : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingRepeatOffButtonEvent")))
@interface MEGAAOSSlideshowSettingRepeatOffButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingRepeatOffButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingRepeatOffButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingRepeatOnButton")))
@interface MEGAAOSSlideshowSettingRepeatOnButton : MEGAAOSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingRepeatOnButtonEvent")))
@interface MEGAAOSSlideshowSettingRepeatOnButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingRepeatOnButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingRepeatOnButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideshowSettingSpeedFastButton")))
@protocol MEGAAOSSlideshowSettingSpeedFastButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingSpeedFastButtonEvent")))
@interface MEGAAOSSlideshowSettingSpeedFastButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingSpeedFastButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingSpeedFastButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideshowSettingSpeedNormalButton")))
@protocol MEGAAOSSlideshowSettingSpeedNormalButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingSpeedNormalButtonEvent")))
@interface MEGAAOSSlideshowSettingSpeedNormalButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingSpeedNormalButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingSpeedNormalButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SlideshowSettingSpeedSlowButton")))
@protocol MEGAAOSSlideshowSettingSpeedSlowButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlideshowSettingSpeedSlowButtonEvent")))
@interface MEGAAOSSlideshowSettingSpeedSlowButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)slideshowSettingSpeedSlowButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSlideshowSettingSpeedSlowButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SnapshotButtonPressed")))
@protocol MEGAAOSSnapshotButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SnapshotButtonPressedEvent")))
@interface MEGAAOSSnapshotButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)snapshotButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSnapshotButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SpeedOption0_5XPressed")))
@protocol MEGAAOSSpeedOption0_5XPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeedOption0_5XPressedEvent")))
@interface MEGAAOSSpeedOption0_5XPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)speedOption0_5XPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSpeedOption0_5XPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SpeedOption1_5XPressed")))
@protocol MEGAAOSSpeedOption1_5XPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeedOption1_5XPressedEvent")))
@interface MEGAAOSSpeedOption1_5XPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)speedOption1_5XPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSpeedOption1_5XPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SpeedOption2XPressed")))
@protocol MEGAAOSSpeedOption2XPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeedOption2XPressedEvent")))
@interface MEGAAOSSpeedOption2XPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)speedOption2XPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSpeedOption2XPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SpeedSelectedDialog")))
@protocol MEGAAOSSpeedSelectedDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpeedSelectedDialogEvent")))
@interface MEGAAOSSpeedSelectedDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)speedSelectedDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSpeedSelectedDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("StartMeetingNowPressed")))
@protocol MEGAAOSStartMeetingNowPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StartMeetingNowPressedEvent")))
@interface MEGAAOSStartMeetingNowPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)startMeetingNowPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSStartMeetingNowPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscribeButtonHomeBannerPressed")))
@protocol MEGAAOSSubscribeButtonHomeBannerPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscribeButtonHomeBannerPressedEvent")))
@interface MEGAAOSSubscribeButtonHomeBannerPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscribeButtonHomeBannerPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscribeButtonHomeBannerPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscribeButtonPressed")))
@protocol MEGAAOSSubscribeButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscribeButtonPressedEvent")))
@interface MEGAAOSSubscribeButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscribeButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscribeButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscribeButtonSettingsBannerPressed")))
@protocol MEGAAOSSubscribeButtonSettingsBannerPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscribeButtonSettingsBannerPressedEvent")))
@interface MEGAAOSSubscribeButtonSettingsBannerPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscribeButtonSettingsBannerPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscribeButtonSettingsBannerPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionCancellationSurveyCancelSubscriptionButton")))
@protocol MEGAAOSSubscriptionCancellationSurveyCancelSubscriptionButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionCancellationSurveyCancelSubscriptionButtonEvent")))
@interface MEGAAOSSubscriptionCancellationSurveyCancelSubscriptionButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionCancellationSurveyCancelSubscriptionButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionCancellationSurveyCancelSubscriptionButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionCancellationSurveyCancelViewButton")))
@protocol MEGAAOSSubscriptionCancellationSurveyCancelViewButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionCancellationSurveyCancelViewButtonEvent")))
@interface MEGAAOSSubscriptionCancellationSurveyCancelViewButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionCancellationSurveyCancelViewButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionCancellationSurveyCancelViewButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionCancellationSurveyDontCancelButton")))
@protocol MEGAAOSSubscriptionCancellationSurveyDontCancelButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionCancellationSurveyDontCancelButtonEvent")))
@interface MEGAAOSSubscriptionCancellationSurveyDontCancelButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionCancellationSurveyDontCancelButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionCancellationSurveyDontCancelButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionCancellationSurveyScreen")))
@protocol MEGAAOSSubscriptionCancellationSurveyScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionCancellationSurveyScreenEvent")))
@interface MEGAAOSSubscriptionCancellationSurveyScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionCancellationSurveyScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionCancellationSurveyScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionCancelled")))
@protocol MEGAAOSSubscriptionCancelled
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionCancelledEvent")))
@interface MEGAAOSSubscriptionCancelledEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionCancelledEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionCancelledEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionFailed")))
@protocol MEGAAOSSubscriptionFailed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionFailedEvent")))
@interface MEGAAOSSubscriptionFailedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionFailedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionFailedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionScreen")))
@protocol MEGAAOSSubscriptionScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionScreenEvent")))
@interface MEGAAOSSubscriptionScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionSuccessScreen")))
@protocol MEGAAOSSubscriptionSuccessScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionSuccessScreenEvent")))
@interface MEGAAOSSubscriptionSuccessScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionSuccessScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionSuccessScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SubscriptionSuccessful")))
@protocol MEGAAOSSubscriptionSuccessful
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionSuccessfulEvent")))
@interface MEGAAOSSubscriptionSuccessfulEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)subscriptionSuccessfulEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSubscriptionSuccessfulEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SyncFeatureUpgradeDialogCancelButtonPressed")))
@protocol MEGAAOSSyncFeatureUpgradeDialogCancelButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncFeatureUpgradeDialogCancelButtonPressedEvent")))
@interface MEGAAOSSyncFeatureUpgradeDialogCancelButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)syncFeatureUpgradeDialogCancelButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSyncFeatureUpgradeDialogCancelButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SyncFeatureUpgradeDialogDisplayed")))
@protocol MEGAAOSSyncFeatureUpgradeDialogDisplayed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncFeatureUpgradeDialogDisplayedEvent")))
@interface MEGAAOSSyncFeatureUpgradeDialogDisplayedEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)syncFeatureUpgradeDialogDisplayedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSyncFeatureUpgradeDialogDisplayedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SyncFeatureUpgradeDialogUpgradeButtonPressed")))
@protocol MEGAAOSSyncFeatureUpgradeDialogUpgradeButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncFeatureUpgradeDialogUpgradeButtonPressedEvent")))
@interface MEGAAOSSyncFeatureUpgradeDialogUpgradeButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)syncFeatureUpgradeDialogUpgradeButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSyncFeatureUpgradeDialogUpgradeButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SyncListBannerUpgradeButtonPressed")))
@protocol MEGAAOSSyncListBannerUpgradeButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncListBannerUpgradeButtonPressedEvent")))
@interface MEGAAOSSyncListBannerUpgradeButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)syncListBannerUpgradeButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSyncListBannerUpgradeButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("SyncListEmptyStateUpgradeButtonPressed")))
@protocol MEGAAOSSyncListEmptyStateUpgradeButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncListEmptyStateUpgradeButtonPressedEvent")))
@interface MEGAAOSSyncListEmptyStateUpgradeButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)syncListEmptyStateUpgradeButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSSyncListEmptyStateUpgradeButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncOptionSelected")))
@interface MEGAAOSSyncOptionSelected : MEGAAOSBase
- (instancetype)initWithSelectionType:(MEGAAOSSyncOptionSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MEGAAOSSyncOptionSelectedSelectionType *selectionType __attribute__((swift_name("selectionType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncOptionSelected.SelectionType")))
@interface MEGAAOSSyncOptionSelectedSelectionType : MEGAAOSKotlinEnum<MEGAAOSSyncOptionSelectedSelectionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSSyncOptionSelectedSelectionType *syncoptionwifionlyselected __attribute__((swift_name("syncoptionwifionlyselected")));
@property (class, readonly) MEGAAOSSyncOptionSelectedSelectionType *syncoptionwifiandmobileselected __attribute__((swift_name("syncoptionwifiandmobileselected")));
+ (MEGAAOSKotlinArray<MEGAAOSSyncOptionSelectedSelectionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSSyncOptionSelectedSelectionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyncOptionSelectedEvent")))
@interface MEGAAOSSyncOptionSelectedEvent : MEGAAOSBase <MEGAAOSItemSelectedEventIdentifier>
- (instancetype)initWithSelectionType:(MEGAAOSSyncOptionSelectedSelectionType *)selectionType __attribute__((swift_name("init(selectionType:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TermsOfServiceCloseButtonPressed")))
@protocol MEGAAOSTermsOfServiceCloseButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsOfServiceCloseButtonPressedEvent")))
@interface MEGAAOSTermsOfServiceCloseButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)termsOfServiceCloseButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTermsOfServiceCloseButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TermsOfServiceScreen")))
@protocol MEGAAOSTermsOfServiceScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsOfServiceScreenEvent")))
@interface MEGAAOSTermsOfServiceScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)termsOfServiceScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTermsOfServiceScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TestPasswordScreen")))
@protocol MEGAAOSTestPasswordScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TestPasswordScreenEvent")))
@interface MEGAAOSTestPasswordScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)testPasswordScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTestPasswordScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TextEditorHideNodeMenuItem")))
@protocol MEGAAOSTextEditorHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextEditorHideNodeMenuItemEvent")))
@interface MEGAAOSTextEditorHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)textEditorHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTextEditorHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TimelineHideNodeMenuItem")))
@protocol MEGAAOSTimelineHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineHideNodeMenuItemEvent")))
@interface MEGAAOSTimelineHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timelineHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTimelineHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TimelineTab")))
@protocol MEGAAOSTimelineTab
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineTabEvent")))
@interface MEGAAOSTimelineTabEvent : MEGAAOSBase <MEGAAOSTabSelectedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)timelineTabEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTimelineTabEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *screenName __attribute__((swift_name("screenName")));
@property (readonly) NSString *tabName __attribute__((swift_name("tabName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("ToolbarOverflowMenuItem")))
@protocol MEGAAOSToolbarOverflowMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ToolbarOverflowMenuItemEvent")))
@interface MEGAAOSToolbarOverflowMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)toolbarOverflowMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSToolbarOverflowMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TransferOverQuotaDialog")))
@protocol MEGAAOSTransferOverQuotaDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransferOverQuotaDialogEvent")))
@interface MEGAAOSTransferOverQuotaDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transferOverQuotaDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTransferOverQuotaDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("TransferOverQuotaUpgradeAccountButton")))
@protocol MEGAAOSTransferOverQuotaUpgradeAccountButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransferOverQuotaUpgradeAccountButtonEvent")))
@interface MEGAAOSTransferOverQuotaUpgradeAccountButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transferOverQuotaUpgradeAccountButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSTransferOverQuotaUpgradeAccountButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("USPScreen")))
@protocol MEGAAOSUSPScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("USPScreenEvent")))
@interface MEGAAOSUSPScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)uSPScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUSPScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UnlockButtonPressed")))
@protocol MEGAAOSUnlockButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnlockButtonPressedEvent")))
@interface MEGAAOSUnlockButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unlockButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUnlockButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeAccountBuyButtonPressed")))
@protocol MEGAAOSUpgradeAccountBuyButtonPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeAccountBuyButtonPressedEvent")))
@interface MEGAAOSUpgradeAccountBuyButtonPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeAccountBuyButtonPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeAccountBuyButtonPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeAccountCancelled")))
@protocol MEGAAOSUpgradeAccountCancelled
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeAccountCancelledEvent")))
@interface MEGAAOSUpgradeAccountCancelledEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeAccountCancelledEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeAccountCancelledEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeAccountPlanScreen")))
@protocol MEGAAOSUpgradeAccountPlanScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeAccountPlanScreenEvent")))
@interface MEGAAOSUpgradeAccountPlanScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeAccountPlanScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeAccountPlanScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeAccountPurchaseFailed")))
@protocol MEGAAOSUpgradeAccountPurchaseFailed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeAccountPurchaseFailedEvent")))
@interface MEGAAOSUpgradeAccountPurchaseFailedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeAccountPurchaseFailedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeAccountPurchaseFailedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeAccountPurchaseSucceeded")))
@protocol MEGAAOSUpgradeAccountPurchaseSucceeded
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeAccountPurchaseSucceededEvent")))
@interface MEGAAOSUpgradeAccountPurchaseSucceededEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeAccountPurchaseSucceededEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeAccountPurchaseSucceededEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeMyAccount")))
@protocol MEGAAOSUpgradeMyAccount
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeMyAccountEvent")))
@interface MEGAAOSUpgradeMyAccountEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeMyAccountEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeMyAccountEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("UpgradeToProToGetUnlimitedCallsDialog")))
@protocol MEGAAOSUpgradeToProToGetUnlimitedCallsDialog
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpgradeToProToGetUnlimitedCallsDialogEvent")))
@interface MEGAAOSUpgradeToProToGetUnlimitedCallsDialogEvent : MEGAAOSBase <MEGAAOSDialogDisplayedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)upgradeToProToGetUnlimitedCallsDialogEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSUpgradeToProToGetUnlimitedCallsDialogEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerFullScreenPressed")))
@protocol MEGAAOSVideoPlayerFullScreenPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerFullScreenPressedEvent")))
@interface MEGAAOSVideoPlayerFullScreenPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerFullScreenPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerFullScreenPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerGetLinkMenuToolbar")))
@protocol MEGAAOSVideoPlayerGetLinkMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerGetLinkMenuToolbarEvent")))
@interface MEGAAOSVideoPlayerGetLinkMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerGetLinkMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerGetLinkMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerHideNodeMenuItem")))
@protocol MEGAAOSVideoPlayerHideNodeMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerHideNodeMenuItemEvent")))
@interface MEGAAOSVideoPlayerHideNodeMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerHideNodeMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerHideNodeMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerInfoMenuItem")))
@protocol MEGAAOSVideoPlayerInfoMenuItem
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerInfoMenuItemEvent")))
@interface MEGAAOSVideoPlayerInfoMenuItemEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerInfoMenuItemEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerInfoMenuItemEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerIsActivated")))
@protocol MEGAAOSVideoPlayerIsActivated
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerIsActivatedEvent")))
@interface MEGAAOSVideoPlayerIsActivatedEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerIsActivatedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerIsActivatedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerOriginalPressed")))
@protocol MEGAAOSVideoPlayerOriginalPressed
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerOriginalPressedEvent")))
@interface MEGAAOSVideoPlayerOriginalPressedEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerOriginalPressedEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerOriginalPressedEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerRemoveLinkMenuToolbar")))
@protocol MEGAAOSVideoPlayerRemoveLinkMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerRemoveLinkMenuToolbarEvent")))
@interface MEGAAOSVideoPlayerRemoveLinkMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerRemoveLinkMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerRemoveLinkMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerSaveToDeviceMenuToolbar")))
@protocol MEGAAOSVideoPlayerSaveToDeviceMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerSaveToDeviceMenuToolbarEvent")))
@interface MEGAAOSVideoPlayerSaveToDeviceMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerSaveToDeviceMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerSaveToDeviceMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerScreen")))
@protocol MEGAAOSVideoPlayerScreen
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerScreenEvent")))
@interface MEGAAOSVideoPlayerScreenEvent : MEGAAOSBase <MEGAAOSScreenViewEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerScreenEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerScreenEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerSendToChatMenuToolbar")))
@protocol MEGAAOSVideoPlayerSendToChatMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerSendToChatMenuToolbarEvent")))
@interface MEGAAOSVideoPlayerSendToChatMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerSendToChatMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerSendToChatMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("VideoPlayerShareMenuToolbar")))
@protocol MEGAAOSVideoPlayerShareMenuToolbar
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VideoPlayerShareMenuToolbarEvent")))
@interface MEGAAOSVideoPlayerShareMenuToolbarEvent : MEGAAOSBase <MEGAAOSMenuItemEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)videoPlayerShareMenuToolbarEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSVideoPlayerShareMenuToolbarEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString *menuItem __attribute__((swift_name("menuItem")));
@property (readonly) NSString *menuType __attribute__((swift_name("menuType")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("WaitingRoomEnableButton")))
@protocol MEGAAOSWaitingRoomEnableButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomEnableButtonEvent")))
@interface MEGAAOSWaitingRoomEnableButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)waitingRoomEnableButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSWaitingRoomEnableButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("WaitingRoomLeaveButton")))
@protocol MEGAAOSWaitingRoomLeaveButton
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomLeaveButtonEvent")))
@interface MEGAAOSWaitingRoomLeaveButtonEvent : MEGAAOSBase <MEGAAOSButtonPressedEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)waitingRoomLeaveButtonEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSWaitingRoomLeaveButtonEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *buttonName __attribute__((swift_name("buttonName")));
@property (readonly) NSString * _Nullable dialogName __attribute__((swift_name("dialogName")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSString * _Nullable screenName __attribute__((swift_name("screenName")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("WaitingRoomTimeout")))
@protocol MEGAAOSWaitingRoomTimeout
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WaitingRoomTimeoutEvent")))
@interface MEGAAOSWaitingRoomTimeoutEvent : MEGAAOSBase <MEGAAOSGeneralEventIdentifier>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)waitingRoomTimeoutEvent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSWaitingRoomTimeoutEvent *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *eventName __attribute__((swift_name("eventName")));
@property (readonly) NSDictionary<NSString *, id> *info __attribute__((swift_name("info")));
@property (readonly) int32_t uniqueIdentifier __attribute__((swift_name("uniqueIdentifier")));
@end

__attribute__((swift_name("EventSender")))
@protocol MEGAAOSEventSender
@required
- (void)sendEventEventId:(int32_t)eventId message:(NSString *)message viewId:(NSString * _Nullable)viewId __attribute__((swift_name("sendEvent(eventId:message:viewId:)")));
@end

__attribute__((swift_name("ViewIdProvider")))
@protocol MEGAAOSViewIdProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getViewIdentifierWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getViewIdentifier(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tracker")))
@interface MEGAAOSTracker : MEGAAOSBase
- (instancetype)initWithViewIdProvider:(id<MEGAAOSViewIdProvider>)viewIdProvider appIdentifier:(MEGAAOSAppIdentifier *)appIdentifier eventSender:(id<MEGAAOSEventSender>)eventSender __attribute__((swift_name("init(viewIdProvider:appIdentifier:eventSender:)"))) __attribute__((objc_designated_initializer));
- (void)trackEventEventIdentifier:(id<MEGAAOSEventIdentifier>)eventIdentifier __attribute__((swift_name("trackEvent(eventIdentifier:)")));
@end

@interface MEGAAOSJsonPrimitive (Extensions)
@property (readonly) BOOL boolean __attribute__((swift_name("boolean")));
@property (readonly) MEGAAOSBoolean * _Nullable booleanOrNull __attribute__((swift_name("booleanOrNull")));
@property (readonly) NSString * _Nullable contentOrNull __attribute__((swift_name("contentOrNull")));
@property (readonly, getter=double) double double_ __attribute__((swift_name("double_")));
@property (readonly) MEGAAOSDouble * _Nullable doubleOrNull __attribute__((swift_name("doubleOrNull")));
@property (readonly, getter=float) float float_ __attribute__((swift_name("float_")));
@property (readonly) MEGAAOSFloat * _Nullable floatOrNull __attribute__((swift_name("floatOrNull")));
@property (readonly, getter=int) int32_t int_ __attribute__((swift_name("int_")));
@property (readonly) MEGAAOSInt * _Nullable intOrNull __attribute__((swift_name("intOrNull")));
@property (readonly, getter=long) int64_t long_ __attribute__((swift_name("long_")));
@property (readonly) MEGAAOSLong * _Nullable longOrNull __attribute__((swift_name("longOrNull")));
@end

@interface MEGAAOSJsonElement (Extensions)
@property (readonly) NSArray<MEGAAOSJsonElement *> *jsonArray __attribute__((swift_name("jsonArray")));
@property (readonly) MEGAAOSJsonNull *jsonNull __attribute__((swift_name("jsonNull")));
@property (readonly) NSDictionary<NSString *, MEGAAOSJsonElement *> *jsonObject __attribute__((swift_name("jsonObject")));
@property (readonly) MEGAAOSJsonPrimitive *jsonPrimitive __attribute__((swift_name("jsonPrimitive")));
@end

@interface MEGAAOSJsonArrayBuilder (Extensions)
- (BOOL)addValue:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("add(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addValue_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("add(value_:)")));
- (BOOL)addValue__:(id _Nullable)value __attribute__((swift_name("add(value__:)")));
- (BOOL)addValue___:(NSString * _Nullable)value __attribute__((swift_name("add(value___:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="addAllBooleans")
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues:(id)values __attribute__((swift_name("addAll(values:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="addAllNumbers")
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues_:(id)values __attribute__((swift_name("addAll(values_:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="addAllStrings")
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)addAllValues__:(id)values __attribute__((swift_name("addAll(values__:)")));
- (BOOL)addJsonArrayBuilderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("addJsonArray(builderAction:)")));
- (BOOL)addJsonObjectBuilderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("addJsonObject(builderAction:)")));
@end

@interface MEGAAOSJson (Extensions)
- (id _Nullable)decodeFromJsonElementJson:(MEGAAOSJsonElement *)json __attribute__((swift_name("decodeFromJsonElement(json:)")));
- (MEGAAOSJsonElement *)encodeToJsonElementValue:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (MEGAAOSJsonElement *)decodeStringToJsonTreeDeserializer:(id<MEGAAOSDeserializationStrategy>)deserializer source:(NSString *)source __attribute__((swift_name("decodeStringToJsonTree(deserializer:source:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id _Nullable)readJsonElement:(MEGAAOSJsonElement *)element deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer __attribute__((swift_name("readJson(element:deserializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (MEGAAOSJsonElement *)writeJsonValue:(id _Nullable)value serializer:(id<MEGAAOSSerializationStrategy>)serializer __attribute__((swift_name("writeJson(value:serializer:)")));
@end

@interface MEGAAOSJsonObjectBuilder (Extensions)
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("put(key:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("put(key:value_:)")));
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value__:(id _Nullable)value __attribute__((swift_name("put(key:value__:)")));
- (MEGAAOSJsonElement * _Nullable)putKey:(NSString *)key value___:(NSString * _Nullable)value __attribute__((swift_name("put(key:value___:)")));
- (MEGAAOSJsonElement * _Nullable)putJsonArrayKey:(NSString *)key builderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("putJsonArray(key:builderAction:)")));
- (MEGAAOSJsonElement * _Nullable)putJsonObjectKey:(NSString *)key builderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("putJsonObject(key:builderAction:)")));
@end

@interface MEGAAOSAbstractPolymorphicSerializer (Extensions)

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSDeserializationStrategy>)findPolymorphicSerializerDecoder:(id<MEGAAOSCompositeDecoder>)decoder klassName:(NSString * _Nullable)klassName __attribute__((swift_name("findPolymorphicSerializer(decoder:klassName:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
- (id<MEGAAOSSerializationStrategy>)findPolymorphicSerializerEncoder:(id<MEGAAOSEncoder>)encoder value:(id)value __attribute__((swift_name("findPolymorphicSerializer(encoder:value:)")));
@end

@interface MEGAAOSSerializersModule (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSKSerializer>)serializerKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));
- (id<MEGAAOSKSerializer>)serializerType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializer(type:)")));
- (id<MEGAAOSKSerializer> _Nullable)serializerOrNullType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));
- (MEGAAOSSerializersModule *)overwriteWithOther:(MEGAAOSSerializersModule *)other __attribute__((swift_name("overwriteWith(other:)")));
- (MEGAAOSSerializersModule *)plusOther:(MEGAAOSSerializersModule *)other __attribute__((swift_name("plus(other:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<MEGAAOSSerialDescriptor> _Nullable)getContextualDescriptorDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("getContextualDescriptor(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<MEGAAOSSerialDescriptor>> *)getPolymorphicDescriptorsDescriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("getPolymorphicDescriptors(descriptor:)")));
@end

@interface MEGAAOSSerializersModuleBuilder (Extensions)
- (void)contextualSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("contextual(serializer:)")));
- (void)polymorphicBaseClass:(id<MEGAAOSKotlinKClass>)baseClass baseSerializer:(id<MEGAAOSKSerializer> _Nullable)baseSerializer builderAction:(void (^)(MEGAAOSPolymorphicModuleBuilder<id> *))builderAction __attribute__((swift_name("polymorphic(baseClass:baseSerializer:builderAction:)")));
@end

@interface MEGAAOSPolymorphicModuleBuilder (Extensions)
- (void)subclassClazz:(id<MEGAAOSKotlinKClass>)clazz __attribute__((swift_name("subclass(clazz:)")));
- (void)subclassSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("subclass(serializer:)")));
@end

@interface MEGAAOSClassSerialDescriptorBuilder (Extensions)
- (void)elementElementName:(NSString *)elementName annotations:(NSArray<id<MEGAAOSKotlinAnnotation>> *)annotations isOptional:(BOOL)isOptional __attribute__((swift_name("element(elementName:annotations:isOptional:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinBoolean.Companion")))
@interface MEGAAOSKotlinBooleanCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinBooleanCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAAOSKotlinBooleanCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByte.Companion")))
@interface MEGAAOSKotlinByteCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinByteCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int8_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int8_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinByteCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
/* Stripped for KT-43094: __attribute__((swift_name("KotlinChar.Companion"))) */
@interface MEGAAOSKotlinCharCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinCharCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
@property (readonly) int32_t MAX_CODE_POINT __attribute__((swift_name("MAX_CODE_POINT")));
@property (readonly) unichar MAX_HIGH_SURROGATE __attribute__((swift_name("MAX_HIGH_SURROGATE")));
@property (readonly) unichar MAX_LOW_SURROGATE __attribute__((swift_name("MAX_LOW_SURROGATE")));

/**
 * @note annotations
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.9")
*/
@property (readonly) int32_t MAX_RADIX __attribute__((swift_name("MAX_RADIX"))) __attribute__((deprecated("Introduce your own constant with the value of `36")));
@property (readonly) unichar MAX_SURROGATE __attribute__((swift_name("MAX_SURROGATE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) unichar MAX_VALUE __attribute__((swift_name("MAX_VALUE")));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
@property (readonly) int32_t MIN_CODE_POINT __attribute__((swift_name("MIN_CODE_POINT")));
@property (readonly) unichar MIN_HIGH_SURROGATE __attribute__((swift_name("MIN_HIGH_SURROGATE")));
@property (readonly) unichar MIN_LOW_SURROGATE __attribute__((swift_name("MIN_LOW_SURROGATE")));

/**
 * @note annotations
 *   kotlin.DeprecatedSinceKotlin(warningSince="1.9")
*/
@property (readonly) int32_t MIN_RADIX __attribute__((swift_name("MIN_RADIX"))) __attribute__((deprecated("Introduce your own constant with the value of `2`")));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
@property (readonly) int32_t MIN_SUPPLEMENTARY_CODE_POINT __attribute__((swift_name("MIN_SUPPLEMENTARY_CODE_POINT")));
@property (readonly) unichar MIN_SURROGATE __attribute__((swift_name("MIN_SURROGATE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) unichar MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinCharCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDouble.Companion")))
@interface MEGAAOSKotlinDoubleCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinDoubleCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) double MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) double MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) double NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) double NaN __attribute__((swift_name("NaN")));
@property (readonly) double POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinDoubleCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinFloat.Companion")))
@interface MEGAAOSKotlinFloatCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinFloatCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) float MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) float MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) float NEGATIVE_INFINITY __attribute__((swift_name("NEGATIVE_INFINITY")));
@property (readonly) float NaN __attribute__((swift_name("NaN")));
@property (readonly) float POSITIVE_INFINITY __attribute__((swift_name("POSITIVE_INFINITY")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinFloatCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInt.Companion")))
@interface MEGAAOSKotlinIntCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int32_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinIntCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLong.Companion")))
@interface MEGAAOSKotlinLongCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinLongCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int64_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int64_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinLongCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinShort.Companion")))
@interface MEGAAOSKotlinShortCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinShortCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int16_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) int16_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinShortCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
/* Stripped for KT-43094: __attribute__((swift_name("KotlinString.Companion"))) */
@interface MEGAAOSKotlinStringCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinStringCompanion *shared __attribute__((swift_name("shared")));
@end

@interface MEGAAOSKotlinStringCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUByte.Companion")))
@interface MEGAAOSKotlinUByteCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUByteCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint8_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint8_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUByteCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUInt.Companion")))
@interface MEGAAOSKotlinUIntCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUIntCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint32_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint32_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUIntCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinULong.Companion")))
@interface MEGAAOSKotlinULongCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinULongCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint64_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint64_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinULongCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUShort.Companion")))
@interface MEGAAOSKotlinUShortCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUShortCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) uint16_t MAX_VALUE __attribute__((swift_name("MAX_VALUE")));
@property (readonly) uint16_t MIN_VALUE __attribute__((swift_name("MIN_VALUE")));
@property (readonly) int32_t SIZE_BITS __attribute__((swift_name("SIZE_BITS")));
@property (readonly) int32_t SIZE_BYTES __attribute__((swift_name("SIZE_BYTES")));
@end

@interface MEGAAOSKotlinUShortCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface MEGAAOSKotlinUnit : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

@interface MEGAAOSKotlinUnit (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
/* Stripped for KT-43094: __attribute__((swift_name("KotlinDuration.Companion"))) */
@interface MEGAAOSKotlinDurationCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinDurationCompanion *shared __attribute__((swift_name("shared")));
- (int64_t)days:(double)receiver __attribute__((swift_name("days(_:)")));
- (int64_t)days_:(int32_t)receiver __attribute__((swift_name("days(__:)")));
- (int64_t)days__:(int64_t)receiver __attribute__((swift_name("days(___:)")));
- (int64_t)hours:(double)receiver __attribute__((swift_name("hours(_:)")));
- (int64_t)hours_:(int32_t)receiver __attribute__((swift_name("hours(__:)")));
- (int64_t)hours__:(int64_t)receiver __attribute__((swift_name("hours(___:)")));
- (int64_t)microseconds:(double)receiver __attribute__((swift_name("microseconds(_:)")));
- (int64_t)microseconds_:(int32_t)receiver __attribute__((swift_name("microseconds(__:)")));
- (int64_t)microseconds__:(int64_t)receiver __attribute__((swift_name("microseconds(___:)")));
- (int64_t)milliseconds:(double)receiver __attribute__((swift_name("milliseconds(_:)")));
- (int64_t)milliseconds_:(int32_t)receiver __attribute__((swift_name("milliseconds(__:)")));
- (int64_t)milliseconds__:(int64_t)receiver __attribute__((swift_name("milliseconds(___:)")));
- (int64_t)minutes:(double)receiver __attribute__((swift_name("minutes(_:)")));
- (int64_t)minutes_:(int32_t)receiver __attribute__((swift_name("minutes(__:)")));
- (int64_t)minutes__:(int64_t)receiver __attribute__((swift_name("minutes(___:)")));
- (int64_t)nanoseconds:(double)receiver __attribute__((swift_name("nanoseconds(_:)")));
- (int64_t)nanoseconds_:(int32_t)receiver __attribute__((swift_name("nanoseconds(__:)")));
- (int64_t)nanoseconds__:(int64_t)receiver __attribute__((swift_name("nanoseconds(___:)")));
- (int64_t)seconds:(double)receiver __attribute__((swift_name("seconds(_:)")));
- (int64_t)seconds_:(int32_t)receiver __attribute__((swift_name("seconds(__:)")));
- (int64_t)seconds__:(int64_t)receiver __attribute__((swift_name("seconds(___:)")));

/**
 * @note annotations
 *   kotlin.time.ExperimentalTime
*/
- (double)convertValue:(double)value sourceUnit:(MEGAAOSKotlinDurationUnit *)sourceUnit targetUnit:(MEGAAOSKotlinDurationUnit *)targetUnit __attribute__((swift_name("convert(value:sourceUnit:targetUnit:)")));
- (int64_t)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
- (int64_t)parseIsoStringValue:(NSString *)value __attribute__((swift_name("parseIsoString(value:)")));
- (id _Nullable)parseIsoStringOrNullValue:(NSString *)value __attribute__((swift_name("parseIsoStringOrNull(value:)")));
- (id _Nullable)parseOrNullValue:(NSString *)value __attribute__((swift_name("parseOrNull(value:)")));
@property (readonly) int64_t INFINITE __attribute__((swift_name("INFINITE")));
@property (readonly) int64_t ZERO __attribute__((swift_name("ZERO")));
@end

@interface MEGAAOSKotlinDurationCompanion (Extensions)
- (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface MEGAAOSPlatform_iosKt : MEGAAOSBase
+ (id<MEGAAOSPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonKt")))
@interface MEGAAOSJsonKt : MEGAAOSBase
+ (MEGAAOSJson *)JsonFrom:(MEGAAOSJson *)from builderAction:(void (^)(MEGAAOSJsonBuilder *))builderAction __attribute__((swift_name("Json(from:builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementKt")))
@interface MEGAAOSJsonElementKt : MEGAAOSBase
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue:(MEGAAOSBoolean * _Nullable)value __attribute__((swift_name("JsonPrimitive(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonNull *)JsonPrimitiveValue_:(MEGAAOSKotlinNothing * _Nullable)value __attribute__((swift_name("JsonPrimitive(value_:)")));
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue__:(id _Nullable)value __attribute__((swift_name("JsonPrimitive(value__:)")));
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue___:(NSString * _Nullable)value __attribute__((swift_name("JsonPrimitive(value___:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue____:(uint8_t)value __attribute__((swift_name("JsonPrimitive(value____:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue_____:(uint32_t)value __attribute__((swift_name("JsonPrimitive(value_____:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue______:(uint64_t)value __attribute__((swift_name("JsonPrimitive(value______:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonPrimitiveValue_______:(uint16_t)value __attribute__((swift_name("JsonPrimitive(value_______:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (MEGAAOSJsonPrimitive *)JsonUnquotedLiteralValue:(NSString * _Nullable)value __attribute__((swift_name("JsonUnquotedLiteral(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonElementBuildersKt")))
@interface MEGAAOSJsonElementBuildersKt : MEGAAOSBase
+ (NSArray<MEGAAOSJsonElement *> *)buildJsonArrayBuilderAction:(void (^)(MEGAAOSJsonArrayBuilder *))builderAction __attribute__((swift_name("buildJsonArray(builderAction:)")));
+ (NSDictionary<NSString *, MEGAAOSJsonElement *> *)buildJsonObjectBuilderAction:(void (^)(MEGAAOSJsonObjectBuilder *))builderAction __attribute__((swift_name("buildJsonObject(builderAction:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersKt")))
@interface MEGAAOSSerializersKt : MEGAAOSBase
+ (id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)serializerKClass:(id<MEGAAOSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MEGAAOSKSerializer>> *)typeArgumentsSerializers isNullable:(BOOL)isNullable __attribute__((swift_name("serializer(kClass:typeArgumentsSerializers:isNullable:)")));
+ (id<MEGAAOSKSerializer>)serializerType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializer(type:)")));
+ (id<MEGAAOSKSerializer> _Nullable)serializerOrNullType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serializerOrNull(type:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)serializer:(id<MEGAAOSKotlinKClass>)receiver __attribute__((swift_name("serializer(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSKSerializer> _Nullable)serializerOrNull:(id<MEGAAOSKotlinKClass>)receiver __attribute__((swift_name("serializerOrNull(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialFormatKt")))
@interface MEGAAOSSerialFormatKt : MEGAAOSBase
+ (id _Nullable)decodeFromByteArray:(id<MEGAAOSBinaryFormat>)receiver bytes:(MEGAAOSKotlinByteArray *)bytes __attribute__((swift_name("decodeFromByteArray(_:bytes:)")));
+ (id _Nullable)decodeFromHexString:(id<MEGAAOSBinaryFormat>)receiver hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:hex:)")));
+ (id _Nullable)decodeFromHexString:(id<MEGAAOSBinaryFormat>)receiver deserializer:(id<MEGAAOSDeserializationStrategy>)deserializer hex:(NSString *)hex __attribute__((swift_name("decodeFromHexString(_:deserializer:hex:)")));
+ (id _Nullable)decodeFromString:(id<MEGAAOSStringFormat>)receiver string:(NSString *)string __attribute__((swift_name("decodeFromString(_:string:)")));
+ (MEGAAOSKotlinByteArray *)encodeToByteArray:(id<MEGAAOSBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToByteArray(_:value:)")));
+ (NSString *)encodeToHexString:(id<MEGAAOSBinaryFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:value:)")));
+ (NSString *)encodeToHexString:(id<MEGAAOSBinaryFormat>)receiver serializer:(id<MEGAAOSSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToHexString(_:serializer:value:)")));
+ (NSString *)encodeToString:(id<MEGAAOSStringFormat>)receiver value:(id _Nullable)value __attribute__((swift_name("encodeToString(_:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InlineClassDescriptorKt")))
@interface MEGAAOSInlineClassDescriptorKt : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)InlinePrimitiveDescriptorName:(NSString *)name primitiveSerializer:(id<MEGAAOSKSerializer>)primitiveSerializer __attribute__((swift_name("InlinePrimitiveDescriptor(name:primitiveSerializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PluginExceptionsKt")))
@interface MEGAAOSPluginExceptionsKt : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (void)throwArrayMissingFieldExceptionSeenArray:(MEGAAOSKotlinIntArray *)seenArray goldenMaskArray:(MEGAAOSKotlinIntArray *)goldenMaskArray descriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("throwArrayMissingFieldException(seenArray:goldenMaskArray:descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (void)throwMissingFieldExceptionSeen:(int32_t)seen goldenMask:(int32_t)goldenMask descriptor:(id<MEGAAOSSerialDescriptor>)descriptor __attribute__((swift_name("throwMissingFieldException(seen:goldenMask:descriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonInternalDependenciesKt")))
@interface MEGAAOSJsonInternalDependenciesKt : MEGAAOSBase

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (NSSet<NSString *> *)jsonCachedSerialNames:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("jsonCachedSerialNames(_:)"))) __attribute__((unavailable("Should not be used")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleKt")))
@interface MEGAAOSSerializersModuleKt : MEGAAOSBase
@property (class, readonly) MEGAAOSSerializersModule *EmptySerializersModule __attribute__((swift_name("EmptySerializersModule"))) __attribute__((deprecated("Deprecated in the favour of 'EmptySerializersModule()'")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerializersModuleBuildersKt")))
@interface MEGAAOSSerializersModuleBuildersKt : MEGAAOSBase
+ (MEGAAOSSerializersModule *)EmptySerializersModule __attribute__((swift_name("EmptySerializersModule()")));
+ (MEGAAOSSerializersModule *)SerializersModuleBuilderAction:(void (^)(MEGAAOSSerializersModuleBuilder *))builderAction __attribute__((swift_name("SerializersModule(builderAction:)")));
+ (MEGAAOSSerializersModule *)serializersModuleOfKClass:(id<MEGAAOSKotlinKClass>)kClass serializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(kClass:serializer:)")));
+ (MEGAAOSSerializersModule *)serializersModuleOfSerializer:(id<MEGAAOSKSerializer>)serializer __attribute__((swift_name("serializersModuleOf(serializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextAwareKt")))
@interface MEGAAOSContextAwareKt : MEGAAOSBase
+ (id<MEGAAOSKotlinKClass> _Nullable)capturedKClass:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("capturedKClass(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorKt")))
@interface MEGAAOSSerialDescriptorKt : MEGAAOSBase
+ (id)elementDescriptors:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("elementDescriptors(_:)")));
+ (id)elementNames:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("elementNames(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SerialDescriptorsKt")))
@interface MEGAAOSSerialDescriptorsKt : MEGAAOSBase
+ (id<MEGAAOSSerialDescriptor>)nullable:(id<MEGAAOSSerialDescriptor>)receiver __attribute__((swift_name("nullable(_:)")));
+ (id<MEGAAOSSerialDescriptor>)PrimitiveSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAAOSPrimitiveKind *)kind __attribute__((swift_name("PrimitiveSerialDescriptor(serialName:kind:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)SerialDescriptorSerialName:(NSString *)serialName original:(id<MEGAAOSSerialDescriptor>)original __attribute__((swift_name("SerialDescriptor(serialName:original:)")));
+ (id<MEGAAOSSerialDescriptor>)buildClassSerialDescriptorSerialName:(NSString *)serialName typeParameters:(MEGAAOSKotlinArray<id<MEGAAOSSerialDescriptor>> *)typeParameters builderAction:(void (^)(MEGAAOSClassSerialDescriptorBuilder *))builderAction __attribute__((swift_name("buildClassSerialDescriptor(serialName:typeParameters:builderAction:)")));

/**
 * @note annotations
 *   kotlinx.serialization.InternalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)buildSerialDescriptorSerialName:(NSString *)serialName kind:(MEGAAOSSerialKind *)kind typeParameters:(MEGAAOSKotlinArray<id<MEGAAOSSerialDescriptor>> *)typeParameters builder:(void (^)(MEGAAOSClassSerialDescriptorBuilder *))builder __attribute__((swift_name("buildSerialDescriptor(serialName:kind:typeParameters:builder:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)listSerialDescriptor __attribute__((swift_name("listSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)listSerialDescriptorElementDescriptor:(id<MEGAAOSSerialDescriptor>)elementDescriptor __attribute__((swift_name("listSerialDescriptor(elementDescriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)mapSerialDescriptor __attribute__((swift_name("mapSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)mapSerialDescriptorKeyDescriptor:(id<MEGAAOSSerialDescriptor>)keyDescriptor valueDescriptor:(id<MEGAAOSSerialDescriptor>)valueDescriptor __attribute__((swift_name("mapSerialDescriptor(keyDescriptor:valueDescriptor:)")));
+ (id<MEGAAOSSerialDescriptor>)serialDescriptor __attribute__((swift_name("serialDescriptor()")));
+ (id<MEGAAOSSerialDescriptor>)serialDescriptorType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("serialDescriptor(type:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)setSerialDescriptor __attribute__((swift_name("setSerialDescriptor()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSSerialDescriptor>)setSerialDescriptorElementDescriptor:(id<MEGAAOSSerialDescriptor>)elementDescriptor __attribute__((swift_name("setSerialDescriptor(elementDescriptor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuiltinSerializersKt")))
@interface MEGAAOSBuiltinSerializersKt : MEGAAOSBase
+ (id<MEGAAOSKSerializer>)nullable:(id<MEGAAOSKSerializer>)receiver __attribute__((swift_name("nullable(_:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)ArraySerializerKClass:(id<MEGAAOSKotlinKClass>)kClass elementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(kClass:elementSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)ArraySerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ArraySerializer(elementSerializer:)")));
+ (id<MEGAAOSKSerializer>)BooleanArraySerializer __attribute__((swift_name("BooleanArraySerializer()")));
+ (id<MEGAAOSKSerializer>)ByteArraySerializer __attribute__((swift_name("ByteArraySerializer()")));
+ (id<MEGAAOSKSerializer>)CharArraySerializer __attribute__((swift_name("CharArraySerializer()")));
+ (id<MEGAAOSKSerializer>)DoubleArraySerializer __attribute__((swift_name("DoubleArraySerializer()")));
+ (id<MEGAAOSKSerializer>)FloatArraySerializer __attribute__((swift_name("FloatArraySerializer()")));
+ (id<MEGAAOSKSerializer>)IntArraySerializer __attribute__((swift_name("IntArraySerializer()")));
+ (id<MEGAAOSKSerializer>)ListSerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("ListSerializer(elementSerializer:)")));
+ (id<MEGAAOSKSerializer>)LongArraySerializer __attribute__((swift_name("LongArraySerializer()")));
+ (id<MEGAAOSKSerializer>)MapEntrySerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("MapEntrySerializer(keySerializer:valueSerializer:)")));
+ (id<MEGAAOSKSerializer>)MapSerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("MapSerializer(keySerializer:valueSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
+ (id<MEGAAOSKSerializer>)NothingSerializer __attribute__((swift_name("NothingSerializer()")));
+ (id<MEGAAOSKSerializer>)PairSerializerKeySerializer:(id<MEGAAOSKSerializer>)keySerializer valueSerializer:(id<MEGAAOSKSerializer>)valueSerializer __attribute__((swift_name("PairSerializer(keySerializer:valueSerializer:)")));
+ (id<MEGAAOSKSerializer>)SetSerializerElementSerializer:(id<MEGAAOSKSerializer>)elementSerializer __attribute__((swift_name("SetSerializer(elementSerializer:)")));
+ (id<MEGAAOSKSerializer>)ShortArraySerializer __attribute__((swift_name("ShortArraySerializer()")));
+ (id<MEGAAOSKSerializer>)TripleSerializerASerializer:(id<MEGAAOSKSerializer>)aSerializer bSerializer:(id<MEGAAOSKSerializer>)bSerializer cSerializer:(id<MEGAAOSKSerializer>)cSerializer __attribute__((swift_name("TripleSerializer(aSerializer:bSerializer:cSerializer:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UByteArraySerializer __attribute__((swift_name("UByteArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UIntArraySerializer __attribute__((swift_name("UIntArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)ULongArraySerializer __attribute__((swift_name("ULongArraySerializer()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
 *   kotlin.ExperimentalUnsignedTypes
*/
+ (id<MEGAAOSKSerializer>)UShortArraySerializer __attribute__((swift_name("UShortArraySerializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DecodingKt")))
@interface MEGAAOSDecodingKt : MEGAAOSBase
+ (id _Nullable)decodeStructure:(id<MEGAAOSDecoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor block:(id _Nullable (^)(id<MEGAAOSCompositeDecoder>))block __attribute__((swift_name("decodeStructure(_:descriptor:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodingKt")))
@interface MEGAAOSEncodingKt : MEGAAOSBase
+ (void)encodeCollection:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize block:(void (^)(id<MEGAAOSCompositeEncoder>))block __attribute__((swift_name("encodeCollection(_:descriptor:collectionSize:block:)")));
+ (void)encodeCollection:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor collection:(id)collection block:(void (^)(id<MEGAAOSCompositeEncoder>, MEGAAOSInt *, id _Nullable))block __attribute__((swift_name("encodeCollection(_:descriptor:collection:block:)")));
+ (void)encodeStructure:(id<MEGAAOSEncoder>)receiver descriptor:(id<MEGAAOSSerialDescriptor>)descriptor block:(void (^)(id<MEGAAOSCompositeEncoder>))block __attribute__((swift_name("encodeStructure(_:descriptor:block:)")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol MEGAAOSKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol MEGAAOSKotlinSuspendFunction0 <MEGAAOSKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface MEGAAOSKotlinIllegalStateException : MEGAAOSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface MEGAAOSKotlinCancellationException : MEGAAOSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MEGAAOSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MEGAAOSKotlinEnumCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MEGAAOSKotlinArray<T> : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MEGAAOSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MEGAAOSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MEGAAOSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol MEGAAOSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol MEGAAOSKotlinKClass <MEGAAOSKotlinKDeclarationContainer, MEGAAOSKotlinKAnnotatedElement, MEGAAOSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MEGAAOSKotlinNothing : MEGAAOSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface MEGAAOSKotlinByteArray : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MEGAAOSByte *(^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAAOSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol MEGAAOSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol MEGAAOSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol MEGAAOSKotlinAnnotation
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol MEGAAOSKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<MEGAAOSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<MEGAAOSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.6")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinDurationUnit")))
@interface MEGAAOSKotlinDurationUnit : MEGAAOSKotlinEnum<MEGAAOSKotlinDurationUnit *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSKotlinDurationUnit *nanoseconds __attribute__((swift_name("nanoseconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *microseconds __attribute__((swift_name("microseconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *milliseconds __attribute__((swift_name("milliseconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *seconds __attribute__((swift_name("seconds")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *minutes __attribute__((swift_name("minutes")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *hours __attribute__((swift_name("hours")));
@property (class, readonly) MEGAAOSKotlinDurationUnit *days __attribute__((swift_name("days")));
+ (MEGAAOSKotlinArray<MEGAAOSKotlinDurationUnit *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSKotlinDurationUnit *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface MEGAAOSKotlinIntArray : MEGAAOSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(MEGAAOSInt *(^)(MEGAAOSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (MEGAAOSKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface MEGAAOSKotlinByteIterator : MEGAAOSBase <MEGAAOSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MEGAAOSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface MEGAAOSKotlinKTypeProjection : MEGAAOSBase
- (instancetype)initWithVariance:(MEGAAOSKotlinKVariance * _Nullable)variance type:(id<MEGAAOSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MEGAAOSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (MEGAAOSKotlinKTypeProjection *)doCopyVariance:(MEGAAOSKotlinKVariance * _Nullable)variance type:(id<MEGAAOSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<MEGAAOSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) MEGAAOSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface MEGAAOSKotlinIntIterator : MEGAAOSBase <MEGAAOSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (MEGAAOSInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface MEGAAOSKotlinKVariance : MEGAAOSKotlinEnum<MEGAAOSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MEGAAOSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) MEGAAOSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) MEGAAOSKotlinKVariance *out __attribute__((swift_name("out")));
+ (MEGAAOSKotlinArray<MEGAAOSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<MEGAAOSKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface MEGAAOSKotlinKTypeProjectionCompanion : MEGAAOSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MEGAAOSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAAOSKotlinKTypeProjection *)contravariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAAOSKotlinKTypeProjection *)covariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (MEGAAOSKotlinKTypeProjection *)invariantType:(id<MEGAAOSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) MEGAAOSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

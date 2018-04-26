# - Find avs libraries
#
#  AVS_INCLUDE_DIRS - Where to find AVS SDK includes, etc.
#  AVS_LIBRARIES    - List of libraries when using AVS SDK.
#
# Important Notes:
# 1. Add extra libraries here as they become available in the AVS Device SDK
# 2. A copy of this file also needs to be available in WakeWordEngines...
#    cp AutoCoreEngineSDK/cmake/FindAVS.cmake WakeWordEngines/cmake
# 3. Update AVS_VERSION when upgrading to a new version

set(AVS_VERSION 1.4.0)

find_path(AVS_COMMON_INCLUDE_DIR AVSCommon)
find_path(RAPIDJSON_INCLUDE_DIR rapidjson/rapidjson.h)

set(AVS_INCLUDE_DIRS
    ${AVS_COMMON_INCLUDE_DIR}
    ${RAPIDJSON_INCLUDE_DIR}
)

find_library(AVS_ACL_LIBRARY ACL)
find_library(AVS_ADSL_LIBRARY ADSL)
find_library(AVS_AFML_LIBRARY AFML)
find_library(AVS_AIP_LIBRARY AIP)
find_library(AVS_ALERTS_LIBRARY Alerts)
find_library(AVS_AUDIO_PLAYER_LIBRARY AudioPlayer)
find_library(AVS_AUTH_DELEGATE_LIBRARY AuthDelegate)
find_library(AVS_AVS_COMMON_LIBRARY AVSCommon)
find_library(AVS_CERTIFIED_SENDER_LIBRARY CertifiedSender)
find_library(AVS_CONTEXT_MANAGER_LIBRARY ContextManager)
find_library(AVS_DEFAULT_CLIENT_LIBRARY DefaultClient)
find_library(AVS_KWD_LIBRARY KWD)
find_library(AVS_PLAYBACK_CONTROLLER_LIBRARY PlaybackController)
find_library(AVS_PLAYLIST_PARSER_LIBRARY PlaylistParser)
find_library(AVS_SETTINGS_LIBRARY Settings)
find_library(AVS_SPEECH_SYNTHESIZER_LIBRARY SpeechSynthesizer)
find_library(AVS_SQLITE_STORAGE_LIBRARY SQLiteStorage)
find_library(AVS_SYSTEM_LIBRARY AVSSystem)
find_library(AVS_TEMPLATE_RUNTIME_LIBRARY TemplateRuntime)
find_library(AVS_SPEAKER_MANAGER_LIBRARY SpeakerManager)
find_library(AVS_AUDIO_RESOURCES_LIBRARY AudioResources)
find_library(AVS_NOTIFICATIONS_LIBRARY Notifications)

set(AVS_LIBRARIES
    ${AVS_ACL_LIBRARY}
    ${AVS_ADSL_LIBRARY}
    ${AVS_AFML_LIBRARY}
    ${AVS_AIP_LIBRARY}
    ${AVS_ALERTS_LIBRARY}
    ${AVS_AUDIO_PLAYER_LIBRARY}
    ${AVS_AUTH_DELEGATE_LIBRARY}
    ${AVS_AVS_COMMON_LIBRARY}
    ${AVS_CERTIFIED_SENDER_LIBRARY}
    ${AVS_CONTEXT_MANAGER_LIBRARY}
    ${AVS_DEFAULT_CLIENT_LIBRARY}
    ${AVS_KWD_LIBRARY}
    ${AVS_PLAYBACK_CONTROLLER_LIBRARY}
    ${AVS_PLAYLIST_PARSER_LIBRARY}
    ${AVS_SETTINGS_LIBRARY}
    ${AVS_SPEECH_SYNTHESIZER_LIBRARY}
    ${AVS_SQLITE_STORAGE_LIBRARY}
    ${AVS_SYSTEM_LIBRARY}
    ${AVS_TEMPLATE_RUNTIME_LIBRARY}
    ${AVS_SPEAKER_MANAGER_LIBRARY}
    ${AVS_AUDIO_RESOURCES_LIBRARY}
    ${AVS_NOTIFICATIONS_LIBRARY}
)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(AVS
    REQUIRED_VARS AVS_LIBRARIES AVS_INCLUDE_DIRS
    VERSION_VAR AVS_VERSION
)

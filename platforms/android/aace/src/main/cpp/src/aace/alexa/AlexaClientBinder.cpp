/*
 * Copyright 2017-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *     http://aws.amazon.com/apache2.0/
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

// aace/alexa/AlexaClientBinder.cpp
// This is an automatically generated file.

#include "aace/alexa/AlexaClientBinder.h"

void AlexaClientBinder::initialize( JNIEnv* env )
{
    //jclass javaClass = env->GetObjectClass( getJavaObject() );
    m_javaMethod_dialogStateChanged_state = env->GetMethodID( getJavaClass(), "dialogStateChanged", "(Lcom/amazon/aace/alexa/AlexaClient$DialogState;)V" );
    m_javaMethod_authStateChanged_state_error = env->GetMethodID( getJavaClass(), "authStateChanged", "(Lcom/amazon/aace/alexa/AlexaClient$AuthState;Lcom/amazon/aace/alexa/AlexaClient$AuthError;)V" );
    m_javaMethod_connectionStatusChanged_status_reason = env->GetMethodID( getJavaClass(), "connectionStatusChanged", "(Lcom/amazon/aace/alexa/AlexaClient$ConnectionStatus;Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;)V" );

    // DialogState
    jclass dialogStateEnumClass = env->FindClass( "com/amazon/aace/alexa/AlexaClient$DialogState" );
    m_enum_DialogState_IDLE = NativeLib::FindEnum( env, dialogStateEnumClass, "IDLE", "Lcom/amazon/aace/alexa/AlexaClient$DialogState;" );
    m_enum_DialogState_LISTENING = NativeLib::FindEnum( env, dialogStateEnumClass, "LISTENING", "Lcom/amazon/aace/alexa/AlexaClient$DialogState;" );
    m_enum_DialogState_THINKING = NativeLib::FindEnum( env, dialogStateEnumClass, "THINKING", "Lcom/amazon/aace/alexa/AlexaClient$DialogState;" );
    m_enum_DialogState_SPEAKING = NativeLib::FindEnum( env, dialogStateEnumClass, "SPEAKING", "Lcom/amazon/aace/alexa/AlexaClient$DialogState;" );

    // AuthState
    jclass authStateEnumClass = env->FindClass( "com/amazon/aace/alexa/AlexaClient$AuthState" );
    m_enum_AuthState_UNINITIALIZED = NativeLib::FindEnum( env, authStateEnumClass, "UNINITIALIZED", "Lcom/amazon/aace/alexa/AlexaClient$AuthState;" );
    m_enum_AuthState_REFRESHED = NativeLib::FindEnum( env, authStateEnumClass, "REFRESHED", "Lcom/amazon/aace/alexa/AlexaClient$AuthState;" );
    m_enum_AuthState_EXPIRED = NativeLib::FindEnum( env, authStateEnumClass, "EXPIRED", "Lcom/amazon/aace/alexa/AlexaClient$AuthState;" );
    m_enum_AuthState_UNRECOVERABLE_ERROR = NativeLib::FindEnum( env, authStateEnumClass, "UNRECOVERABLE_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$AuthState;" );

    // AuthError
    jclass authErrorEnumClass = env->FindClass( "com/amazon/aace/alexa/AlexaClient$AuthError" );
    m_enum_AuthError_NO_ERROR = NativeLib::FindEnum( env, authErrorEnumClass, "NO_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_UNKNOWN_ERROR = NativeLib::FindEnum( env, authErrorEnumClass, "UNKNOWN_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_AUTHORIZATION_FAILED = NativeLib::FindEnum( env, authErrorEnumClass, "AUTHORIZATION_FAILED", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_UNAUTHORIZED_CLIENT = NativeLib::FindEnum( env, authErrorEnumClass, "UNAUTHORIZED_CLIENT", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_SERVER_ERROR = NativeLib::FindEnum( env, authErrorEnumClass, "SERVER_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_INVALID_REQUEST = NativeLib::FindEnum( env, authErrorEnumClass, "INVALID_REQUEST", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_AUTHORIZATION_EXPIRED = NativeLib::FindEnum( env, authErrorEnumClass, "AUTHORIZATION_EXPIRED", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );
    m_enum_AuthError_UNSUPPORTED_GRANT_TYPE = NativeLib::FindEnum( env, authErrorEnumClass, "UNSUPPORTED_GRANT_TYPE", "Lcom/amazon/aace/alexa/AlexaClient$AuthError;" );

    // ConnectionStatus
    jclass connectionStatusEnumClass = env->FindClass( "com/amazon/aace/alexa/AlexaClient$ConnectionStatus" );
    m_enum_ConnectionStatus_DISCONNECTED = NativeLib::FindEnum( env, connectionStatusEnumClass, "DISCONNECTED", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionStatus;" );
    m_enum_ConnectionStatus_PENDING = NativeLib::FindEnum( env, connectionStatusEnumClass, "PENDING", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionStatus;" );
    m_enum_ConnectionStatus_CONNECTED = NativeLib::FindEnum( env, connectionStatusEnumClass, "CONNECTED", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionStatus;" );

    // ConnectionChangedReason
    jclass connectionChangedReasonEnumClass = env->FindClass( "com/amazon/aace/alexa/AlexaClient$ConnectionChangedReason" );
    m_enum_ConnectionChangedReason_ACL_CLIENT_REQUEST = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "ACL_CLIENT_REQUEST", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_ACL_DISABLED = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "ACL_DISABLED", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_DNS_TIMEDOUT = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "DNS_TIMEDOUT", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_CONNECTION_TIMEDOUT = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "CONNECTION_TIMEDOUT", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_CONNECTION_THROTTLED = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "CONNECTION_THROTTLED", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_INVALID_AUTH = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "INVALID_AUTH", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_PING_TIMEDOUT = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "PING_TIMEDOUT", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_WRITE_TIMEDOUT = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "WRITE_TIMEDOUT", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_READ_TIMEDOUT = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "READ_TIMEDOUT", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_FAILURE_PROTOCOL_ERROR = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "FAILURE_PROTOCOL_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_INTERNAL_ERROR = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "INTERNAL_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_SERVER_INTERNAL_ERROR = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "SERVER_INTERNAL_ERROR", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_SERVER_SIDE_DISCONNECT = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "SERVER_SIDE_DISCONNECT", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
    m_enum_ConnectionChangedReason_SERVER_ENDPOINT_CHANGED = NativeLib::FindEnum( env, connectionChangedReasonEnumClass, "SERVER_ENDPOINT_CHANGED", "Lcom/amazon/aace/alexa/AlexaClient$ConnectionChangedReason;" );
}

void AlexaClientBinder::dialogStateChanged( aace::alexa::AlexaClient::DialogState state )
{
    if( getJavaObject() != nullptr && m_javaMethod_dialogStateChanged_state != nullptr )
    {
        ThreadContext context;

        if( context.isValid() ) {
            context.getEnv()->CallVoidMethod( getJavaObject(), m_javaMethod_dialogStateChanged_state, convert( state ) );
        }
    }
}

void AlexaClientBinder::authStateChanged( aace::alexa::AlexaClient::AuthState state, aace::alexa::AlexaClient::AuthError error )
{
    if( getJavaObject() != nullptr && m_javaMethod_authStateChanged_state_error != nullptr )
    {
        ThreadContext context;

        if( context.isValid() ) {
            context.getEnv()->CallVoidMethod( getJavaObject(), m_javaMethod_authStateChanged_state_error, convert( state ), convert( error ) );
        }
    }
}

void AlexaClientBinder::connectionStatusChanged( aace::alexa::AlexaClient::ConnectionStatus status, aace::alexa::AlexaClient::ConnectionChangedReason reason )
{
    if( getJavaObject() != nullptr && m_javaMethod_connectionStatusChanged_status_reason != nullptr )
    {
        ThreadContext context;

        if( context.isValid() ) {
            context.getEnv()->CallVoidMethod( getJavaObject(), m_javaMethod_connectionStatusChanged_status_reason, convert( status ), convert( reason ) );
        }
    }
}

jobject AlexaClientBinder::convert( aace::alexa::AlexaClient::DialogState state )
{
    switch( state )
    {
        case aace::alexa::AlexaClient::DialogState::IDLE:
            return m_enum_DialogState_IDLE.get();
        case aace::alexa::AlexaClient::DialogState::LISTENING:
            return m_enum_DialogState_LISTENING.get();
        case aace::alexa::AlexaClient::DialogState::THINKING:
            return m_enum_DialogState_THINKING.get();
        case aace::alexa::AlexaClient::DialogState::SPEAKING:
            return m_enum_DialogState_SPEAKING.get();
    }
}

/*
aace::alexa::AlexaClient::DialogState AlexaClientBinder::convertDialogState( jobject obj )
{
    JNIEnv* env = NativeLib::getJNIEnv();

    if( env->IsSameObject( obj, m_enum_DialogState_IDLE.get() ) ) {
        return aace::alexa::AlexaClient::DialogState::IDLE;
    }
    else if( env->IsSameObject( obj, m_enum_DialogState_LISTENING.get() ) ) {
        return aace::alexa::AlexaClient::DialogState::LISTENING;
    }
    else if( env->IsSameObject( obj, m_enum_DialogState_THINKING.get() ) ) {
        return aace::alexa::AlexaClient::DialogState::THINKING;
    }
    else if( env->IsSameObject( obj, m_enum_DialogState_SPEAKING.get() ) ) {
        return aace::alexa::AlexaClient::DialogState::SPEAKING;
    }
    else {
        return aace::alexa::AlexaClient::DialogState::SPEAKING; // anything for undefined?
    }
}
 */

jobject AlexaClientBinder::convert( aace::alexa::AuthProviderEngineInterface::AuthState state )
{
    switch( state )
    {
        case aace::alexa::AuthProviderEngineInterface::AuthState::UNINITIALIZED:
            return m_enum_AuthState_UNINITIALIZED.get();
        case aace::alexa::AuthProviderEngineInterface::AuthState::REFRESHED:
            return m_enum_AuthState_REFRESHED.get();
        case aace::alexa::AuthProviderEngineInterface::AuthState::EXPIRED:
            return m_enum_AuthState_EXPIRED.get();
        case aace::alexa::AuthProviderEngineInterface::AuthState::UNRECOVERABLE_ERROR:
            return m_enum_AuthState_UNRECOVERABLE_ERROR.get();
    }
}

/*
aace::alexa::AuthProviderEngineInterface::AuthState AlexaClientBinder::convertAuthState( jobject obj )
{
    JNIEnv* env = NativeLib::getJNIEnv();

    if( env->IsSameObject( obj, m_enum_AuthState_UNINITIALIZED ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthState::UNINITIALIZED;
    }
    else if( env->IsSameObject( obj, m_enum_AuthState_REFRESHED ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthState::REFRESHED;
    }
    else if( env->IsSameObject( obj, m_enum_AuthState_EXPIRED ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthState::EXPIRED;
    }
    else if( env->IsSameObject( obj, m_enum_AuthState_UNRECOVERABLE_ERROR ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthState::UNRECOVERABLE_ERROR;
    }
    else {
        return aace::alexa::AuthProviderEngineInterface::AuthState::UNRECOVERABLE_ERROR; // anything for undefined?
    }
}
 */

jobject AlexaClientBinder::convert( aace::alexa::AuthProviderEngineInterface::AuthError error )
{
    switch( error )
    {
        case aace::alexa::AuthProviderEngineInterface::AuthError::NO_ERROR:
            return m_enum_AuthError_NO_ERROR.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::UNKNOWN_ERROR:
            return m_enum_AuthError_UNKNOWN_ERROR.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::AUTHORIZATION_FAILED:
            return m_enum_AuthError_AUTHORIZATION_FAILED.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::UNAUTHORIZED_CLIENT:
            return m_enum_AuthError_UNAUTHORIZED_CLIENT.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::SERVER_ERROR:
            return m_enum_AuthError_SERVER_ERROR.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::INVALID_REQUEST:
            return m_enum_AuthError_INVALID_REQUEST.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::AUTHORIZATION_EXPIRED:
            return m_enum_AuthError_AUTHORIZATION_EXPIRED.get();
        case aace::alexa::AuthProviderEngineInterface::AuthError::UNSUPPORTED_GRANT_TYPE:
            return m_enum_AuthError_UNSUPPORTED_GRANT_TYPE.get();
    }
}

/*
aace::alexa::AuthProviderEngineInterface::AuthError AlexaClientBinder::convertAuthError( jobject obj )
{
    JNIEnv* env = NativeLib::getJNIEnv();

    if( env->IsSameObject( obj, m_enum_AuthError_NO_ERROR ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::NO_ERROR;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_UNKNOWN_ERROR ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::UNKNOWN_ERROR;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_AUTHORIZATION_FAILED ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::AUTHORIZATION_FAILED;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_UNAUTHORIZED_CLIENT ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::UNAUTHORIZED_CLIENT;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_SERVER_ERROR ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::SERVER_ERROR;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_INVALID_REQUEST ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::INVALID_REQUEST;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_AUTHORIZATION_EXPIRED ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::AUTHORIZATION_EXPIRED;
    }
    else if( env->IsSameObject( obj, m_enum_AuthError_UNSUPPORTED_GRANT_TYPE ) ) {
        return aace::alexa::AuthProviderEngineInterface::AuthError::UNSUPPORTED_GRANT_TYPE;
    }
    else {
        return aace::alexa::AuthProviderEngineInterface::AuthError::UNSUPPORTED_GRANT_TYPE; // anything for undefined?
    }
}
*/

jobject AlexaClientBinder::convert( aace::alexa::AlexaClient::ConnectionStatus status )
{
    switch( status )
    {
        case aace::alexa::AlexaClient::ConnectionStatus::DISCONNECTED:
            return m_enum_ConnectionStatus_DISCONNECTED.get();
        case aace::alexa::AlexaClient::ConnectionStatus::PENDING:
            return m_enum_ConnectionStatus_PENDING.get();
        case aace::alexa::AlexaClient::ConnectionStatus::CONNECTED:
            return m_enum_ConnectionStatus_CONNECTED.get();
    }
}

/*
aace::alexa::AlexaClient::ConnectionStatus AlexaClientBinder::convertConnectionStatus( jobject obj )
{
    JNIEnv* env = NativeLib::getJNIEnv();

    if( env->IsSameObject( obj, m_enum_ConnectionStatus_DISCONNECTED ) ) {
        return aace::alexa::AlexaClient::ConnectionStatus::DISCONNECTED;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionStatus_PENDING ) ) {
        return aace::alexa::AlexaClient::ConnectionStatus::PENDING;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionStatus_CONNECTED ) ) {
        return aace::alexa::AlexaClient::ConnectionStatus::CONNECTED;
    }
    else {
        return aace::alexa::AlexaClient::ConnectionStatus::CONNECTED; // anything for undefined?
    }
}
*/

jobject AlexaClientBinder::convert( aace::alexa::AlexaClient::ConnectionChangedReason reason )
{
    switch( reason )
    {
        case aace::alexa::AlexaClient::ConnectionChangedReason::ACL_CLIENT_REQUEST:
            return m_enum_ConnectionChangedReason_ACL_CLIENT_REQUEST.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::ACL_DISABLED:
            return m_enum_ConnectionChangedReason_ACL_DISABLED.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::DNS_TIMEDOUT:
            return m_enum_ConnectionChangedReason_DNS_TIMEDOUT.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::CONNECTION_TIMEDOUT:
            return m_enum_ConnectionChangedReason_CONNECTION_TIMEDOUT.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::CONNECTION_THROTTLED:
            return m_enum_ConnectionChangedReason_CONNECTION_THROTTLED.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::INVALID_AUTH:
            return m_enum_ConnectionChangedReason_INVALID_AUTH.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::PING_TIMEDOUT:
            return m_enum_ConnectionChangedReason_PING_TIMEDOUT.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::WRITE_TIMEDOUT:
            return m_enum_ConnectionChangedReason_WRITE_TIMEDOUT.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::READ_TIMEDOUT:
            return m_enum_ConnectionChangedReason_READ_TIMEDOUT.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::FAILURE_PROTOCOL_ERROR:
            return m_enum_ConnectionChangedReason_FAILURE_PROTOCOL_ERROR.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::INTERNAL_ERROR:
            return m_enum_ConnectionChangedReason_INTERNAL_ERROR.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_INTERNAL_ERROR:
            return m_enum_ConnectionChangedReason_SERVER_INTERNAL_ERROR.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_SIDE_DISCONNECT:
            return m_enum_ConnectionChangedReason_SERVER_SIDE_DISCONNECT.get();
        case aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_ENDPOINT_CHANGED:
            return m_enum_ConnectionChangedReason_SERVER_ENDPOINT_CHANGED.get();
    }
}

/*
aace::alexa::AlexaClient::ConnectionChangedReason AlexaClientBinder::convertConnectionChangedReason( jobject obj )
{
    JNIEnv* env = NativeLib::getJNIEnv();

    if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_ACL_CLIENT_REQUEST ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::ACL_CLIENT_REQUEST;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_ACL_DISABLED ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::ACL_DISABLED;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_DNS_TIMEDOUT ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::DNS_TIMEDOUT;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_CONNECTION_TIMEDOUT ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::CONNECTION_TIMEDOUT;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_CONNECTION_THROTTLED ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::CONNECTION_THROTTLED;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_INVALID_AUTH ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::INVALID_AUTH;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_PING_TIMEDOUT ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::PING_TIMEDOUT;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_WRITE_TIMEDOUT ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::WRITE_TIMEDOUT;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_READ_TIMEDOUT ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::READ_TIMEDOUT;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_FAILURE_PROTOCOL_ERROR ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::FAILURE_PROTOCOL_ERROR;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_INTERNAL_ERROR ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::INTERNAL_ERROR;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_SERVER_INTERNAL_ERROR ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_INTERNAL_ERROR;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_SERVER_SIDE_DISCONNECT ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_SIDE_DISCONNECT;
    }
    else if( env->IsSameObject( obj, m_enum_ConnectionChangedReason_SERVER_ENDPOINT_CHANGED ) ) {
        return aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_ENDPOINT_CHANGED;
    }
    else {
        return aace::alexa::AlexaClient::ConnectionChangedReason::SERVER_ENDPOINT_CHANGED; // anything for undefined?
    }
}
*/

// JNI
#define ALEXACLIENT(cptr) ((AlexaClientBinder *) cptr)

extern "C" {

}

// END OF FILE

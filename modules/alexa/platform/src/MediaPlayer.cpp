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

#include "AACE/Alexa/MediaPlayer.h"

namespace aace {
namespace alexa {

bool MediaPlayer::isRepeating() {
    return m_mediaPlayerEngineInterface != nullptr && m_mediaPlayerEngineInterface->isRepeating();
}

void MediaPlayer::playbackStarted() {
    if( m_mediaPlayerEngineInterface != nullptr ) {
        m_mediaPlayerEngineInterface->onPlaybackStarted();
    }
}
    
void MediaPlayer::playbackFinished() {
    if( m_mediaPlayerEngineInterface != nullptr ) {
        m_mediaPlayerEngineInterface->onPlaybackFinished();
    }
}

void MediaPlayer::playbackPaused() {
    if( m_mediaPlayerEngineInterface != nullptr ) {
        m_mediaPlayerEngineInterface->onPlaybackPaused();
    }
}

void MediaPlayer::playbackResumed() {
    if( m_mediaPlayerEngineInterface != nullptr ) {
        m_mediaPlayerEngineInterface->onPlaybackResumed();
    }
}

void MediaPlayer::playbackStopped() {
    if( m_mediaPlayerEngineInterface != nullptr ) {
        m_mediaPlayerEngineInterface->onPlaybackStopped();
    }
}

void MediaPlayer::playbackError( const ErrorType& type, const std::string& error ) {
    if( m_mediaPlayerEngineInterface != nullptr ) {
        m_mediaPlayerEngineInterface->onPlaybackError( static_cast<aace::alexa::MediaPlayerEngineInterface::ErrorType>( type ), error );
    }
}

ssize_t MediaPlayer::read( char* data, const size_t size ) {
    return m_mediaPlayerEngineInterface != nullptr ? m_mediaPlayerEngineInterface->read( data, size ) : 0;
}

void MediaPlayer::setEngineInterface( std::shared_ptr<aace::alexa::MediaPlayerEngineInterface> mediaPlayerEngineInterface ) {
    m_mediaPlayerEngineInterface = mediaPlayerEngineInterface;
}

} // aace::alexa
} // aac

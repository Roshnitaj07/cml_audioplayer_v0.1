#ifndef _CML_ERROR_CODES_H_
#define _CML_ERROR_CODES_H_
#include<stdio.h>
#include<stdlib.h>
#include "CML_types.h"
#include "cml_error_codes.h"

typedef enum 
{
    /* The number of .wav AudioFiles given as input exceeded the maximum acceptable range (i.e 10000 .wav files)*/
    E_CML_AUDIOFILE_RANGE_EXCEEDED=-21, 

    /* The number of .wav files within the .txt file (Playlist) exceeded the maximum acceptable range (i.e 10000 .wav files)*/
    E_CML_CANNOT_CREATE_PLAYLIST_EXCEEDED_AUDIO_RANGE, 

    /*Playlist/ AudioFile path not provided*/
    E_CML_INVALID_FILE_FORMAT,   

    /*The extension of the file can be either .txt or .wav only.*/
    E_CML_INVALID_FILE_EXTENSION ,

        /*No arguments provided.*/
        E_CML_NO_ARGUMENTS, 

    /*The number arguments passed is not within the permissible range.*/
    E_CML_INVALID_NUMBER_OF_ARGUMENTS,

    /*The arguments passed are invalid.*/
    E_CML_INVALID_ARGUMENTS_PASSED, 

    /* Path to the .wav file does not exist */
    CML_FILE_NOT_FOUND,

    /*Path to the .txt file does not exist*/
    E_CML_PLAYLIST_NOT_FOUND, 

    /*Cannot play previous audio when only one audio (.wav file) is available*/
    E_CML_PREVIOUS_INVALID_FOR_SINGLE_AUDIO, 

    /*Cannot play next audio when only one audio (.wav file) is available*/
    E_CML_NEXT_INVALID_FOR_SINGLE_AUDIO, 

    /* Cannot play the next audio when the audio (.wav file) being played is the last audio file in the Playlist.*/
    E_CML_NEXT_INVALID_FOR_LAST_AUDIO, 

    /*Cannot play the previous audio when the audio (.wav file) being played is the last audio file in the Playlist.*/
    E_CML_PREVIOUS_INVALID_FOR_FIRST_AUDIO, 

    /*The seek value provided exceeds the duration of the audio.*/
    E_CML_INVALID_SEEKVALUE_EXCEEDED_DURATION, 

    /* Reached the beginning of audio*/
    E_CML_CANNOT_SEEKBACKWARD,

    /* Reached the end of audio */
    E_CML_CANNOT_SEEKFORWARD,

    /*Cannot pause audio when Playback is stopped.*/
    E_CML_CANNOT_PAUSE_IN_STOP_STATE, 

    /*Cannot increase the volume when Playback is stopped.*/
    E_CML_CANNOT_INCREASE_VOLUME_IN_STOP_STATE, 

    /*Cannot decrease the volume when Playback is stopped*/
    E_CML_CANNOT_DECREASE_VOLUME_IN_STOP_STATE,

    /*The key pressed is invalid.*/
    E_CML_INVALID_KEY_PRESSED, 

    /* Cannot decrease the volume below the minimum permissible level.*/
    E_CML_MIN_VOLUME_ATTAINED, 

    /* Cannot decrease the volume beyond the maximum permissible  level.*/
    E_CML_MAX_VOLUME_ATTAINED, 

    E_CML_FILE_NOT_FOUND,

    /* Playback stopped due to end of Playlist*/
    E_CML_END_OF_PLAYLIST,

    /* Cannot play the audio(.wav file)  since it is corrupted.*/
    E_CML_CORRUPTED_AUDIO_FILE, 

    /*Cannot play the audio(.wav file)  since the playlist (.txt file)  is corrupted.*/
    E_CML_CORRUPTED_PLAYLIST, 

    /* Play  next AudioFile for single input .wav file*/
    E_CML_UNABLE_TO_PLAY_NEXT_FILE_NOT_PRESENT,

    /* Play previous AudioFile for single input .wav file.*/
    E_CML_UNABLE_TO_PLAY_PREV_FILE_NOT_PRESENT,

    /*Invalid path for .wav files.*/
    E_CML_INVALID_PATH_TO_FILE,

    /* if audio file does not exists.*/
    E_CML_FILE_DOES_NOT_EXIST,

    /* if playlist does not contain any .wav files*/
    E_CML_PLAYLIST_IS_EMPTY,

    /*if invalid keyInput is given other than specified keyInputs.
      if any input is given other mentioned arguments.*/
    E_CML_INVALID_KEY,

    /*playlist containg .wav files without any paths*/
    E_CML_FILE_PATH_NOT_SPECIFIED,

    /*Playlist with  .wav files but 1 or 2 files without .wav extension
      Invalid type of input file other than .wav extension*/
    E_CML_INVALID_FILE_EXTENSION,

    /* Arguments passed are not correct order for shuffle i.e < path/file.wav –s or path/file.txt-- s>*/
    E_CML_WRONG_ORDER_OF_ARGUMENTS,

    /* ALSA Cannot pause */
    E_CML_ERROR_PAUSE,

    /* Last track */
    E_CML_ERROR_LAST_TRACK,

    /* First track */
    E_CML_ERROR_FIRST_TRACK,

    /* Cannot stop */
    E_CML_ERROR_STOP,

    /* ALSA Cannot resume */
    E_CML_ERROR_RESUME,

    /*Error while creating playlist*/
    E_CML_ERROR_CREATING_PLAYLIST,

    /*Error during Shuffle operation*/
    E_CML_ERROR_IN_SHUFFLE,

    /*Failure in creating thread*/
    E_CML_THREAD_CREATION_FAILED,

    /*Error in allocating memory*/
    E_CML_MEMORY_NOT_ALLOCATED,

    /*Pause operation successful*/
    E_CML_SONG_PAUSED,

    /*Resume operation successful*/
    E_CML_SONG_RESUMED,

    /*Successful Seek to operation*/
    E_CML_SEEK_TO_SUCCESSFUL,

    /*Successful Seek to operation*/
    E_CML_SEEK_FORWARD_SUCCESSFUL,

    /*Successful Seek to operation*/
    E_CML_SEEK_BACKWARD_SUCCESSFUL,

    /*Valid File Extension*/

    E_CML_VALID_FILE_EXTENSION,
    E_CML_INVALIED_PATH_TO_FILE,
            
            /*if no audio file name is given*/
    E_CML_WAV_FILE_NOT_SPECIFIED,
           
            /*if playlist name is  not given.*/
    E_CML_PLAYLIST_NOT_SPECIFIED,
            
            /* if audio file does not exists.*/
   E_CML_FILE_DOES_NOT_EXISTS,
           
            /* if playlist does not contain any .wav files*/
   E_CML_PLAYLIST_DOES_NOT_HAVE_FILES,

   E_CML_ERROR_MAX_VOL,
            
            /* Volume at min */
  E_CML_ERROR_MIN_VOL,
  E_CML_TIME_INVALID,
  E_CML_ERROR_OPEN_DEVICE, 
           ;
            /* ALSA could not set hardware parameters */
        E_CML_ERROR_HW_PARAM,
            
            /* Invalid file */
        E_CML_FILE_INVALID, 
           
            /* Cannot open file */
         E_CML_ERROR_OPEN_FILE,
            ;
            /* Cannot read file */
         E_CML_ERROR_READ_FILE,
           
            /* Underrun */
         E_CML_ERROR_UNDER_RUN, 
            
            /* Cannot write to device */
        E_CML_ERROR_WRITE,
            
            /* Short write */
         E_CML_ERROR_SHORT_WRITE,

         /*if seek previous time is less than the initial duration of audio*/
        E_CML_SEEK_TIME_INVALID,

        /*Playlist with  .wav files but 1 or 2 files without .wav extension
              Invalid type of input file other than .wav extension*/
         E_CML_INVALIED_FILE_EXTENSION,

         /* Multiple .wav files as arguments seperated by more than single space.
               Multiple .txt files as arguments saperated by more than single space.*/
        E_CML_SINGLE_SPACE_USED,
            
    /* Success case */
    E_CML_SUCCESS = 0
}eRetType;

//const CML_CHAR* cml_perror(eRetType estate);
#endif /*CML_error_codes_h*/



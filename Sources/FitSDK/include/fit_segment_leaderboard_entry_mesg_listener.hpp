////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Garmin Canada Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2020 Garmin Canada Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 21.32Release
// Tag = production/akw/21.32.00-0-g756ff70
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_SEGMENT_LEADERBOARD_ENTRY_MESG_LISTENER_HPP)
#define FIT_SEGMENT_LEADERBOARD_ENTRY_MESG_LISTENER_HPP

#include "fit_segment_leaderboard_entry_mesg.hpp"

namespace fit
{

class SegmentLeaderboardEntryMesgListener
{
public:
    virtual ~SegmentLeaderboardEntryMesgListener() {}
    virtual void OnMesg(SegmentLeaderboardEntryMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_SEGMENT_LEADERBOARD_ENTRY_MESG_LISTENER_HPP)

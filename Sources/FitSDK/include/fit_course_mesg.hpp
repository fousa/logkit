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


#if !defined(FIT_COURSE_MESG_HPP)
#define FIT_COURSE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class CourseMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Sport = 4;
       static const FIT_UINT8 Name = 5;
       static const FIT_UINT8 Capabilities = 6;
       static const FIT_UINT8 SubSport = 7;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    CourseMesg(void) : Mesg(Profile::MESG_COURSE)
    {
    }

    CourseMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sport field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSportValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sport field
    ///////////////////////////////////////////////////////////////////////
    FIT_SPORT GetSport(void) const
    {
        return GetFieldENUMValue(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSport(FIT_SPORT sport)
    {
        SetFieldENUMValue(4, sport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of name field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsNameValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns name field
    ///////////////////////////////////////////////////////////////////////
    FIT_WSTRING GetName(void) const
    {
        return GetFieldSTRINGValue(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set name field
    ///////////////////////////////////////////////////////////////////////
    void SetName(FIT_WSTRING name)
    {
        SetFieldSTRINGValue(5, name, 0);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of capabilities field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsCapabilitiesValid() const
    {
        const Field* field = GetField(6);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns capabilities field
    ///////////////////////////////////////////////////////////////////////
    FIT_COURSE_CAPABILITIES GetCapabilities(void) const
    {
        return GetFieldUINT32ZValue(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set capabilities field
    ///////////////////////////////////////////////////////////////////////
    void SetCapabilities(FIT_COURSE_CAPABILITIES capabilities)
    {
        SetFieldUINT32ZValue(6, capabilities, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of sub_sport field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsSubSportValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns sub_sport field
    ///////////////////////////////////////////////////////////////////////
    FIT_SUB_SPORT GetSubSport(void) const
    {
        return GetFieldENUMValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set sub_sport field
    ///////////////////////////////////////////////////////////////////////
    void SetSubSport(FIT_SUB_SPORT subSport)
    {
        SetFieldENUMValue(7, subSport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_COURSE_MESG_HPP)

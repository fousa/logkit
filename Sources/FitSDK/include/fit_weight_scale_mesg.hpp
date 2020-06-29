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


#if !defined(FIT_WEIGHT_SCALE_MESG_HPP)
#define FIT_WEIGHT_SCALE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class WeightScaleMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Timestamp = 253;
       static const FIT_UINT8 Weight = 0;
       static const FIT_UINT8 PercentFat = 1;
       static const FIT_UINT8 PercentHydration = 2;
       static const FIT_UINT8 VisceralFatMass = 3;
       static const FIT_UINT8 BoneMass = 4;
       static const FIT_UINT8 MuscleMass = 5;
       static const FIT_UINT8 BasalMet = 7;
       static const FIT_UINT8 PhysiqueRating = 8;
       static const FIT_UINT8 ActiveMet = 9;
       static const FIT_UINT8 MetabolicAge = 10;
       static const FIT_UINT8 VisceralFatRating = 11;
       static const FIT_UINT8 UserProfileIndex = 12;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    WeightScaleMesg(void) : Mesg(Profile::MESG_WEIGHT_SCALE)
    {
    }

    WeightScaleMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of timestamp field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsTimestampValid() const
    {
        const Field* field = GetField(253);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    FIT_DATE_TIME GetTimestamp(void) const
    {
        return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set timestamp field
    // Units: s
    ///////////////////////////////////////////////////////////////////////
    void SetTimestamp(FIT_DATE_TIME timestamp)
    {
        SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of weight field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsWeightValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns weight field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetWeight(void) const
    {
        return GetFieldFLOAT32Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set weight field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    void SetWeight(FIT_FLOAT32 weight)
    {
        SetFieldFLOAT32Value(0, weight, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of percent_fat field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPercentFatValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns percent_fat field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPercentFat(void) const
    {
        return GetFieldFLOAT32Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set percent_fat field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    void SetPercentFat(FIT_FLOAT32 percentFat)
    {
        SetFieldFLOAT32Value(1, percentFat, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of percent_hydration field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPercentHydrationValid() const
    {
        const Field* field = GetField(2);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns percent_hydration field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetPercentHydration(void) const
    {
        return GetFieldFLOAT32Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set percent_hydration field
    // Units: %
    ///////////////////////////////////////////////////////////////////////
    void SetPercentHydration(FIT_FLOAT32 percentHydration)
    {
        SetFieldFLOAT32Value(2, percentHydration, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of visceral_fat_mass field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsVisceralFatMassValid() const
    {
        const Field* field = GetField(3);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns visceral_fat_mass field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetVisceralFatMass(void) const
    {
        return GetFieldFLOAT32Value(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set visceral_fat_mass field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    void SetVisceralFatMass(FIT_FLOAT32 visceralFatMass)
    {
        SetFieldFLOAT32Value(3, visceralFatMass, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of bone_mass field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBoneMassValid() const
    {
        const Field* field = GetField(4);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns bone_mass field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetBoneMass(void) const
    {
        return GetFieldFLOAT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set bone_mass field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    void SetBoneMass(FIT_FLOAT32 boneMass)
    {
        SetFieldFLOAT32Value(4, boneMass, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of muscle_mass field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMuscleMassValid() const
    {
        const Field* field = GetField(5);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns muscle_mass field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetMuscleMass(void) const
    {
        return GetFieldFLOAT32Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set muscle_mass field
    // Units: kg
    ///////////////////////////////////////////////////////////////////////
    void SetMuscleMass(FIT_FLOAT32 muscleMass)
    {
        SetFieldFLOAT32Value(5, muscleMass, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of basal_met field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsBasalMetValid() const
    {
        const Field* field = GetField(7);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns basal_met field
    // Units: kcal/day
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetBasalMet(void) const
    {
        return GetFieldFLOAT32Value(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set basal_met field
    // Units: kcal/day
    ///////////////////////////////////////////////////////////////////////
    void SetBasalMet(FIT_FLOAT32 basalMet)
    {
        SetFieldFLOAT32Value(7, basalMet, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of physique_rating field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsPhysiqueRatingValid() const
    {
        const Field* field = GetField(8);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns physique_rating field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetPhysiqueRating(void) const
    {
        return GetFieldUINT8Value(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set physique_rating field
    ///////////////////////////////////////////////////////////////////////
    void SetPhysiqueRating(FIT_UINT8 physiqueRating)
    {
        SetFieldUINT8Value(8, physiqueRating, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of active_met field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsActiveMetValid() const
    {
        const Field* field = GetField(9);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns active_met field
    // Units: kcal/day
    // Comment: ~4kJ per kcal, 0.25 allows max 16384 kcal
    ///////////////////////////////////////////////////////////////////////
    FIT_FLOAT32 GetActiveMet(void) const
    {
        return GetFieldFLOAT32Value(9, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set active_met field
    // Units: kcal/day
    // Comment: ~4kJ per kcal, 0.25 allows max 16384 kcal
    ///////////////////////////////////////////////////////////////////////
    void SetActiveMet(FIT_FLOAT32 activeMet)
    {
        SetFieldFLOAT32Value(9, activeMet, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of metabolic_age field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsMetabolicAgeValid() const
    {
        const Field* field = GetField(10);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns metabolic_age field
    // Units: years
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetMetabolicAge(void) const
    {
        return GetFieldUINT8Value(10, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set metabolic_age field
    // Units: years
    ///////////////////////////////////////////////////////////////////////
    void SetMetabolicAge(FIT_UINT8 metabolicAge)
    {
        SetFieldUINT8Value(10, metabolicAge, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of visceral_fat_rating field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsVisceralFatRatingValid() const
    {
        const Field* field = GetField(11);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns visceral_fat_rating field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT8 GetVisceralFatRating(void) const
    {
        return GetFieldUINT8Value(11, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set visceral_fat_rating field
    ///////////////////////////////////////////////////////////////////////
    void SetVisceralFatRating(FIT_UINT8 visceralFatRating)
    {
        SetFieldUINT8Value(11, visceralFatRating, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of user_profile_index field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsUserProfileIndexValid() const
    {
        const Field* field = GetField(12);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns user_profile_index field
    // Comment: Associates this weight scale message to a user.  This corresponds to the index of the user profile message in the weight scale file.
    ///////////////////////////////////////////////////////////////////////
    FIT_MESSAGE_INDEX GetUserProfileIndex(void) const
    {
        return GetFieldUINT16Value(12, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set user_profile_index field
    // Comment: Associates this weight scale message to a user.  This corresponds to the index of the user profile message in the weight scale file.
    ///////////////////////////////////////////////////////////////////////
    void SetUserProfileIndex(FIT_MESSAGE_INDEX userProfileIndex)
    {
        SetFieldUINT16Value(12, userProfileIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

};

} // namespace fit

#endif // !defined(FIT_WEIGHT_SCALE_MESG_HPP)

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


#if !defined(FIT_SLAVE_DEVICE_MESG_HPP)
#define FIT_SLAVE_DEVICE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class SlaveDeviceMesg : public Mesg
{
public:
    class FieldDefNum final
    {
    public:
       static const FIT_UINT8 Manufacturer = 0;
       static const FIT_UINT8 Product = 1;
       static const FIT_UINT8 Invalid = FIT_FIELD_NUM_INVALID;
    };

    SlaveDeviceMesg(void) : Mesg(Profile::MESG_SLAVE_DEVICE)
    {
    }

    SlaveDeviceMesg(const Mesg &mesg) : Mesg(mesg)
    {
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of manufacturer field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsManufacturerValid() const
    {
        const Field* field = GetField(0);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns manufacturer field
    ///////////////////////////////////////////////////////////////////////
    FIT_MANUFACTURER GetManufacturer(void) const
    {
        return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set manufacturer field
    ///////////////////////////////////////////////////////////////////////
    void SetManufacturer(FIT_MANUFACTURER manufacturer)
    {
        SetFieldUINT16Value(0, manufacturer, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of product field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsProductValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid();
    }

    ///////////////////////////////////////////////////////////////////////
    // Returns product field
    ///////////////////////////////////////////////////////////////////////
    FIT_UINT16 GetProduct(void) const
    {
        return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set product field
    ///////////////////////////////////////////////////////////////////////
    void SetProduct(FIT_UINT16 product)
    {
        SetFieldUINT16Value(1, product, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of favero_product field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsFaveroProductValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_FAVERO_PRODUCT ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_FAVERO_PRODUCT);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns favero_product field
    ///////////////////////////////////////////////////////////////////////
    FIT_FAVERO_PRODUCT GetFaveroProduct(void) const
    {
        return GetFieldUINT16Value(1, 0, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_FAVERO_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set favero_product field
    ///////////////////////////////////////////////////////////////////////
    void SetFaveroProduct(FIT_FAVERO_PRODUCT faveroProduct)
    {
        SetFieldUINT16Value(1, faveroProduct, 0, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_FAVERO_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Checks the validity of garmin_product field
    // Returns FIT_TRUE if field is valid
    ///////////////////////////////////////////////////////////////////////
    FIT_BOOL IsGarminProductValid() const
    {
        const Field* field = GetField(1);
        if( FIT_NULL == field )
        {
            return FIT_FALSE;
        }

        if( !CanSupportSubField( field, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_GARMIN_PRODUCT ) )
        {
            return FIT_FALSE;
        }

        return field->IsValueValid(0, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }


    ///////////////////////////////////////////////////////////////////////
    // Returns garmin_product field
    ///////////////////////////////////////////////////////////////////////
    FIT_GARMIN_PRODUCT GetGarminProduct(void) const
    {
        return GetFieldUINT16Value(1, 0, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }

    ///////////////////////////////////////////////////////////////////////
    // Set garmin_product field
    ///////////////////////////////////////////////////////////////////////
    void SetGarminProduct(FIT_GARMIN_PRODUCT garminProduct)
    {
        SetFieldUINT16Value(1, garminProduct, 0, (FIT_UINT16) Profile::SLAVE_DEVICE_MESG_PRODUCT_FIELD_GARMIN_PRODUCT);
    }

};

} // namespace fit

#endif // !defined(FIT_SLAVE_DEVICE_MESG_HPP)

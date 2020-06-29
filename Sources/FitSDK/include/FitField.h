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


#if !defined(FIT_FIELD_H)
#define FIT_FIELD_H

#include "fit.hpp"
#include "fit_mesg_definition.hpp"

@interface FitField : NSObject
- (FIT_UINT8) Write:(FILE*) file forField:(const fit::FieldBase *)field;
@end

#endif /* FIT_FIELD_H */

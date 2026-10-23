/* sub_6078A168
 * address: 0x6078A168   size: 580   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6078A168(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _BOOL4 v4; // r1
  _BOOL4 result; // r0
  int v6; // r0
  int v7; // r0
  _BOOL4 v8; // r1
  int v9; // r0
  int v10; // r0
  _BOOL4 v11; // r1
  int v12; // r0
  int v13; // r0

  v2 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v2 = dword_60C99DEC + 16;
  if ( FIELD_U8(v2, 20) && FIELD_S32(v2, 24) >= 1 )
  {
    v3 = a1[8];
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 1) != 0 )
    {
      if ( !v3 )
        goto LABEL_11;
    }
    else if ( !v3 || (FIELD_U8(v3, 1219) & 8) != 0 )
    {
      goto LABEL_11;
    }
    v4 = sub_6075EE0C(v3);
    result = 1;
    if ( v4 )
      return result;
  }
LABEL_11:
  v6 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v6 = dword_60C99DEC + 16;
  if ( FIELD_U8(v6, 92) && FIELD_S32(v6, 96) >= 1 )
  {
    v7 = a1[9];
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 2) != 0 )
    {
      if ( !v7 )
        goto LABEL_21;
    }
    else if ( !v7 || (FIELD_U8(v7, 1219) & 8) != 0 )
    {
      goto LABEL_21;
    }
    v8 = sub_6075EE0C(v7);
    result = 1;
    if ( v8 )
      return result;
  }
LABEL_21:
  v9 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v9 = dword_60C99DEC + 16;
  if ( FIELD_U8(v9, 164) && FIELD_S32(v9, 168) >= 1 )
  {
    v10 = a1[10];
    if ( (FIELD_U8(dword_60C9CF0C, 1404) & 4) != 0 )
    {
      if ( !v10 )
        goto LABEL_31;
    }
    else if ( !v10 || (FIELD_U8(v10, 1219) & 8) != 0 )
    {
      goto LABEL_31;
    }
    v11 = sub_6075EE0C(v10);
    result = 1;
    if ( v11 )
      return result;
  }
LABEL_31:
  v12 = dword_60C99DD4 + 272;
  if ( !dword_60C99DD4 )
    v12 = dword_60C99DEC + 16;
  if ( !FIELD_U8(v12, 236) || FIELD_S32(v12, 240) < 1 )
    return 0;
  v13 = a1[11];
  if ( (FIELD_U8(dword_60C9CF0C, 1404) & 8) == 0 )
  {
    if ( !v13 || (FIELD_U8(v13, 1219) & 8) != 0 )
      return 0;
    return sub_6075EE0C(v13);
  }
  if ( v13 )
    return sub_6075EE0C(v13);
  return 0;
}

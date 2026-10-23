/* sub_604183EC
 * address: 0x604183EC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604183EC(int result)
{
  float v1; // s0
  float v2; // s6
  float v3; // s2
  float v4; // s4
  int v5; // r2
  float v6; // s6
  float v7; // s4
  float v8; // s2
  float v9; // s0

  v1 = *(float *)result;
  v2 = FIELD_F32(result, 16);
  v3 = FIELD_F32(result, 4);
  v4 = *(float *)result;
  if ( v2 >= *(float *)result )
  {
    v4 = FIELD_F32(result, 16);
    if ( v2 > v3 )
      v4 = FIELD_F32(result, 4);
  }
  FIELD_F32(result, 16) = v4;
  v5 = FIELD_U32(result, 24);
  FIELD_U32(result, 24) = v5 & 0xFFFFFFEB;
  if ( (v5 & 2) != 0 )
  {
    FIELD_U32(result, 24) = v5 & 0xFFFFFFE9;
    return result;
  }
  if ( (v5 & 0x21) != 0x20 )
  {
    if ( v1 == v3 )
    {
      if ( (v5 & 1) != 0 )
      {
        FIELD_U32(result, 24) = v5 & 0xFFFFFFE3 | 0xC;
        return result;
      }
    }
    else
    {
      v6 = FIELD_F32(result, 20);
      if ( v6 == 0.0 )
        return result;
      v7 = v6 + v4;
      FIELD_F32(result, 16) = v7;
      if ( (v5 & 1) != 0 )
      {
        if ( v6 >= 0.0 )
        {
          if ( v7 < v3 )
            return result;
          FIELD_U32(result, 24) = v5 & 0xFFFFFFE3 | 0xC;
          v9 = v3 - FIELD_F32(result, 8);
          if ( v9 <= 0.0 )
          {
            FIELD_F32(result, 16) = v3;
            return result;
          }
          do
            v7 = v7 - v9;
          while ( v7 >= v3 );
        }
        else
        {
          if ( v7 > v1 )
            return result;
          FIELD_U32(result, 24) = v5 & 0xFFFFFFE3 | 0xC;
          v8 = FIELD_F32(result, 12) - v1;
          if ( v8 <= 0.0 )
          {
            FIELD_F32(result, 16) = v1;
            return result;
          }
          do
            v7 = v7 + v8;
          while ( v7 <= v1 );
        }
        FIELD_F32(result, 16) = v7;
        return result;
      }
      if ( v7 >= v3 )
      {
        FIELD_F32(result, 16) = v3;
      }
      else
      {
        if ( v7 > v1 )
          return result;
        FIELD_F32(result, 16) = v1;
      }
    }
    FIELD_U32(result, 24) = v5 & 0xFFFFFFCB | 0x30;
  }
  return result;
}

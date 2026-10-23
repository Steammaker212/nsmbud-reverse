/* sub_606ADA80
 * address: 0x606ADA80   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606ADA80(int result, float a2, float a3)
{
  int v3; // r3
  int v4; // r12
  int v5; // r2
  float v6; // s2
  float v7; // s2
  float v8; // s2

  v3 = FIELD_U8(result, 6);
  v4 = FIELD_U8(result, 4);
  v5 = FIELD_U8(result, 5);
  FIELD_U8(result, 5) = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
  }
  else if ( !v5 )
  {
    v5 = 0;
    if ( v4 == 1 )
      goto LABEL_5;
    goto LABEL_8;
  }
  FIELD_U8(result, 6) = v5;
  if ( v4 == 1 )
  {
LABEL_5:
    if ( v5 )
      return result;
    FIELD_U8(result, 4) = 2;
    goto LABEL_14;
  }
LABEL_8:
  if ( v5 )
  {
    FIELD_U8(result, 4) = 1;
    return result;
  }
  if ( v4 != 2 )
  {
    if ( !v4 )
      *(float *)result = a2;
    return result;
  }
LABEL_14:
  v6 = *(float *)result;
  if ( *(float *)result >= a2 )
  {
    v8 = v6 - a3;
    if ( v8 > a2 )
    {
      *(float *)result = v8;
      return result;
    }
  }
  else
  {
    v7 = v6 + a3;
    if ( v7 < a2 )
    {
      *(float *)result = v7;
      return result;
    }
  }
  FIELD_U8(result, 4) = 0;
  *(float *)result = a2;
  return result;
}

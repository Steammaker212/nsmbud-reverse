/* sub_60999730
 * address: 0x60999730   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60999730(int a1)
{
  int v1; // r1
  int result; // r0
  int v3; // r2
  int v4; // r1
  int v5; // r4
  int v6; // r1
  int v7; // r2
  int v8; // r2
  int v9; // r1

  v1 = FIELD_U32(a1, 16);
  if ( !v1 )
    return 0;
  if ( FIELD_U8(v1, 33) == 1
    || (v3 = FIELD_U32(v1, 16)) != 0 && FIELD_U8(v3, 33) == 1
    || (FIELD_U8(a1, 33) = FIELD_U8(a1, 33) == 0,
        FIELD_U8(v1, 33) = FIELD_U8(v1, 33) == 0,
        *(_BYTE *)(FIELD_U32(a1, 20) + 33) = *(_BYTE *)(FIELD_U32(a1, 20) + 33) == 0,
        v4 = FIELD_U32(a1, 20),
        (v5 = FIELD_U32(v4, 16)) == 0)
    || FIELD_U8(v5, 33) != 1 )
  {
    v5 = a1;
  }
  else
  {
    FIELD_U32(v4, 16) = FIELD_U32(v5, 20);
    FIELD_U32(v5, 20) = v4;
    FIELD_U8(v5, 33) = FIELD_U8(v4, 33);
    FIELD_U8(v4, 33) = 1;
    FIELD_U32(a1, 20) = v5;
    FIELD_U32(a1, 20) = FIELD_U32(v5, 16);
    FIELD_U32(v5, 16) = a1;
    FIELD_U8(v5, 33) = FIELD_U8(a1, 33);
    FIELD_U8(a1, 33) = 1;
    FIELD_U8(v5, 33) = FIELD_U8(v5, 33) == 0;
    *(_BYTE *)(FIELD_U32(v5, 16) + 33) = *(_BYTE *)(FIELD_U32(v5, 16) + 33) == 0;
    *(_BYTE *)(FIELD_U32(v5, 20) + 33) = *(_BYTE *)(FIELD_U32(v5, 20) + 33) == 0;
  }
  result = sub_60999730(FIELD_U32(v5, 16));
  FIELD_U32(v5, 16) = result;
  v6 = FIELD_U32(v5, 20);
  if ( v6 && FIELD_U8(v6, 33) == 1 )
  {
    FIELD_U32(v5, 20) = FIELD_U32(v6, 16);
    FIELD_U32(v6, 16) = v5;
    FIELD_U8(v6, 33) = FIELD_U8(v5, 33);
    FIELD_U8(v5, 33) = 1;
    result = FIELD_U32(v6, 16);
  }
  else
  {
    v6 = v5;
  }
  if ( !result || FIELD_U8(result, 33) != 1 )
    return v6;
  v7 = FIELD_U32(result, 16);
  if ( v7 && FIELD_U8(v7, 33) == 1 )
  {
    FIELD_U32(v6, 16) = FIELD_U32(result, 20);
    FIELD_U32(result, 20) = v6;
    FIELD_U8(result, 33) = FIELD_U8(v6, 33);
    FIELD_U8(v6, 33) = 1;
    v8 = FIELD_U32(result, 16);
    if ( !v8 || FIELD_U8(v8, 33) != 1 )
      return result;
  }
  else
  {
    v8 = result;
    result = v6;
  }
  v9 = FIELD_U32(result, 20);
  if ( v9 )
  {
    if ( FIELD_U8(v9, 33) == 1 )
    {
      FIELD_U8(result, 33) = FIELD_U8(result, 33) == 0;
      FIELD_U8(v8, 33) = FIELD_U8(v8, 33) == 0;
      *(_BYTE *)(FIELD_U32(result, 20) + 33) = *(_BYTE *)(FIELD_U32(result, 20) + 33) == 0;
    }
  }
  return result;
}

/* sub_601E6EA8
 * address: 0x601E6EA8   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E6EA8(_BYTE *a1)
{
  int v2; // r5
  int result; // r0
  char v4; // r1
  _BYTE *v5; // r5
  int v6; // t1
  char v7; // r1
  _BYTE *v8; // r5
  char v9; // t1
  int v10; // r2
  int v11; // r1
  bool v12; // zf
  unsigned __int8 v13; // r0

  v2 = dword_60CC6D78;
  sub_601DB4AC();
  if ( FIELD_U8(v2, 109032) )
  {
    if ( FIELD_U8(v2, 109040) )
    {
      FIELD_U8(v2, 109038) = 3;
      LOWORD(result) = -22033;
      v4 = 0;
    }
    else
    {
      result = v2 + 109039;
      v7 = FIELD_U8(v2, 109039) + 1;
      if ( v7 != 3 )
      {
        *(_BYTE *)result = v7;
        return result;
      }
      *(_BYTE *)result = 0;
      LOWORD(result) = -22034;
      v4 = 3;
    }
    HIWORD(result) = 1;
    *(_BYTE *)(v2 + result) = v4;
    v9 = FIELD_U8(v2, 109036);
    v8 = (_BYTE *)(v2 + 109036);
    v8[1] = v9;
    *v8 = -1;
    a1[65] = 1;
    return 1;
  }
  else if ( FIELD_U8(v2, 109037) == 255 )
  {
    result = FIELD_U32(v2, 428);
    v10 = result;
    if ( result != 1 )
      v10 = 0;
    if ( v10 | (result == 4) )
    {
      v11 = FIELD_U32(v2, 440);
      v12 = v11 == 0;
      if ( !v11 )
        v12 = FIELD_U32(v2, 448) == 2;
      if ( v12 )
      {
        v12 = result == 1;
        v13 = 1;
        if ( v12 )
          v13 = 4;
        result = sub_6019A628(v13, 0);
        if ( !result )
        {
          result = sub_601DB000();
          a1[64] = 1;
        }
      }
    }
  }
  else
  {
    v6 = FIELD_U8(v2, 109038);
    v5 = (_BYTE *)(v2 + 109038);
    result = sub_601DB080();
    if ( v6 )
    {
      result = (unsigned __int8)*v5;
      if ( !*v5 )
      {
        result = 1;
        a1[63] = 1;
      }
    }
  }
  return result;
}

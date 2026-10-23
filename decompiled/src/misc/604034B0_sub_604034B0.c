/* sub_604034B0
 * address: 0x604034B0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604034B0(int result, int a2)
{
  int v3; // r4
  int v4; // r0
  float v5; // r8
  float v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r7
  int v10; // r5
  _BYTE v11[8]; // [sp+0h] [bp-28h] BYREF
  float v12[8]; // [sp+8h] [bp-20h] BYREF

  v3 = result;
  if ( a2 )
  {
    v4 = FIELD_U32(result, 376);
    if ( v4 == 2 )
    {
      v4 = 3;
    }
    else
    {
      if ( v4 != 3 )
      {
        v5 = FIELD_F32(v3, 380);
        v6 = FIELD_F32(v3, 384);
        if ( v4 < 8 )
        {
          if ( v4 != 6 )
            goto LABEL_7;
          v7 = FIELD_U32(v3, 504);
          v4 = 6;
          v8 = 15;
          if ( v7 != 9 )
            goto LABEL_8;
        }
        else
        {
          v12[0] = FIELD_F32(v3, 2548);
          v8 = sub_60814F00(v12) + 1;
        }
LABEL_11:
        v9 = FIELD_U32(v3, 180);
        FIELD_U32(v3, 180) = -1;
        v10 = *(_DWORD *)(a2 + 4 * v8);
        v12[0] = v5;
        v12[1] = v6;
        sub_60024400((int)v11, v12);
        result = sub_608141A0(v3 + 56, v10, v11, 0);
        FIELD_U32(v3, 180) = v9;
        return result;
      }
      v4 = 2;
    }
    v5 = FIELD_F32(v3, 380);
    v6 = FIELD_F32(v3, 384);
LABEL_7:
    v7 = FIELD_U32(v3, 504);
LABEL_8:
    if ( v7 == 3 )
      v4 += 16;
    v8 = v4;
    goto LABEL_11;
  }
  return result;
}

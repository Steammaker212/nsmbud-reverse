/* sub_601B2A1C
 * address: 0x601B2A1C   size: 372   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B2A1C(int a1)
{
  int v2; // r5
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  float v6; // r1
  float v7; // r2
  unsigned int v8; // r7
  float v9; // s0
  int result; // r0
  float v11; // s2
  float v12; // s4
  float v13; // s16
  float v14; // s4
  float v15; // s2
  float v16; // s2
  float v17[12]; // [sp+0h] [bp-30h] BYREF

  v2 = a1 + 1044;
  if ( FIELD_U32(a1, 1044) == -1 )
    goto LABEL_9;
  v3 = FIELD_U32(a1, 1048);
  v4 = v3 == -1;
  if ( v3 != -1 )
    v4 = FIELD_U32(a1, 1052) == -1;
  if ( v4 )
  {
LABEL_9:
    result = *(_DWORD *)(sub_601E0040(a1 + 1032) + 4);
    FIELD_U32(a1, 1152) = result;
  }
  else
  {
    v5 = sub_601E0040(v2);
    v6 = *(float *)v5;
    v7 = FIELD_F32(v5, 4);
    v17[2] = FIELD_F32(v5, 8);
    v17[0] = v6;
    v17[1] = v7;
    v8 = sub_6019B64C((float *)(a1 + 944), v17);
    if ( v8 == 6 )
    {
      sub_601DFFE4(a1 + 1032);
      sub_601DFFE4(v2);
    }
    if ( (FIELD_U8(a1, 1123) & 1) != 0 )
    {
      v11 = FIELD_F32(a1, 952) - FIELD_F32(a1, 88);
      v12 = FIELD_F32(a1, 944) - FIELD_F32(a1, 80);
      v13 = sqrtf((float)(v11 * v11) + (float)(v12 * v12));
      v14 = FIELD_F32(a1, 952) - FIELD_F32(a1, 964);
      v15 = FIELD_F32(a1, 944) - FIELD_F32(a1, 956);
      v16 = v13 / sqrtf((float)(v14 * v14) + (float)(v15 * v15));
      if ( v16 >= 0.0 )
      {
        if ( v16 > 1.0 )
          v16 = 1.0;
      }
      else
      {
        v16 = 0.0;
      }
      v9 = FIELD_F32(a1, 948) + (float)(v16 * (float)(FIELD_F32(a1, 960) - FIELD_F32(a1, 948)));
    }
    else
    {
      v9 = sub_60168F2C(a1, (float *)(a1 + 944), v17, v8);
    }
    FIELD_F32(a1, 1152) = v9;
    return a1 + 1152;
  }
  return result;
}

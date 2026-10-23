/* sub_6093BB54
 * address: 0x6093BB54   size: 328   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6093BB54(int a1, int a2, int a3, float32x2_t *a4, float a5, float32x2_t *a6)
{
  _DWORD *v9; // r7
  int v10; // r5
  int v11; // r0
  int result; // r0
  int v13; // r5
  int v14; // r4
  int v15; // r6
  __int64 v16; // r0
  float v17[4]; // [sp+10h] [bp-50h] BYREF
  float v18; // [sp+20h] [bp-40h]
  float v19; // [sp+24h] [bp-3Ch]
  float v20; // [sp+28h] [bp-38h]
  int v21; // [sp+2Ch] [bp-34h]
  float v22; // [sp+30h] [bp-30h]
  float v23; // [sp+34h] [bp-2Ch]
  float v24; // [sp+38h] [bp-28h]
  int v25; // [sp+3Ch] [bp-24h]

  v9 = (_DWORD *)dword_60CD0A0C;
  v10 = dword_60CD0A28;
  if ( FIELD_U32(dword_60CD0B60, 20) )
    v11 = **(_DWORD **)(dword_60CD0B60 + 28);
  else
    v11 = 0;
  v17[3] = *(float *)a2;
  v21 = FIELD_U32(a2, 4);
  v25 = FIELD_U32(a2, 8);
  v17[0] = a5 + a5;
  v18 = (float)(a5 + a5) * 0.0;
  v22 = v18;
  v17[1] = v18;
  v19 = a5 + a5;
  v23 = v18;
  v17[2] = v18;
  v20 = v18;
  v24 = a5 + a5;
  sub_6091DD8C(v11, a1);
  sub_60922278(v10 + 2040, a1);
  sub_6093AE84(a1, (int)v17, a4, a6, a3, a3, (unsigned __int32 *)&dword_60B3B974);
  result = 4504;
  v13 = v9[1126];
  if ( v13 )
  {
    v14 = FIELD_U32(a1, 192);
    v15 = v9[1122];
    v16 = dword_60CC746C(v9 + 1128);
    return dword_60CC7874(v14, v15, v9[1121], v13, v16, HIDWORD(v16));
  }
  return result;
}

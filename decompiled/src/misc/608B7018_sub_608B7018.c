/* sub_608B7018
 * address: 0x608B7018   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B7018(int a1, int a2, int *a3)
{
  void *v6; // r11
  int *v7; // r0
  int result; // r0
  int v9; // r6
  int v10; // r4
  void *v11; // r5
  _DWORD *v12; // r0
  int v13; // [sp+4h] [bp-5Ch]
  int v14; // [sp+8h] [bp-58h]
  int v15; // [sp+Ch] [bp-54h]
  int v16; // [sp+10h] [bp-50h]
  int v17; // [sp+14h] [bp-4Ch]
  int v18; // [sp+18h] [bp-48h]
  int v19; // [sp+1Ch] [bp-44h]
  int v20; // [sp+20h] [bp-40h]
  int v21; // [sp+24h] [bp-3Ch]
  int v22; // [sp+28h] [bp-38h]
  int v23; // [sp+2Ch] [bp-34h]
  int v24; // [sp+30h] [bp-30h]
  int v25; // [sp+34h] [bp-2Ch]

  v6 = sub_608C3B10();
  v7 = (int *)sub_608C2698(v6, 76, 1);
  v7[1] = 21;
  v7[4] = a1 + 448;
  v13 = FIELD_U32(a2, 4);
  v14 = FIELD_U32(a2, 8);
  v15 = FIELD_U32(a2, 12);
  v16 = FIELD_U32(a2, 16);
  v17 = FIELD_U32(a2, 20);
  v18 = FIELD_U32(a2, 24);
  v19 = FIELD_U32(a2, 28);
  v20 = FIELD_U32(a2, 32);
  v21 = FIELD_U8(a2, 36)
      | (FIELD_U8(a2, 37) << 8)
      | ((FIELD_U8(a2, 38) | (FIELD_U8(a2, 39) << 8)) << 16);
  v22 = *a3;
  v23 = a3[3];
  v24 = a3[4];
  v25 = a3[5];
  v7 += 5;
  *v7 = *(_DWORD *)a2;
  v7[1] = v13;
  v7[2] = v14;
  v7[3] = v15;
  v7 += 4;
  *v7 = v16;
  v7[1] = v17;
  v7[2] = v18;
  v7[3] = v19;
  v7[4] = v20;
  v7 += 5;
  *v7 = v21;
  v7[1] = v22;
  v7[2] = v23;
  v7[3] = v24;
  v7[4] = v25;
  result = sub_608C2C1C(v6);
  v9 = a3[2];
  if ( v9 >= 1 )
  {
    v10 = a3[1];
    v11 = sub_608C3B10();
    v12 = (_DWORD *)sub_608C2698(v11, 28, 1);
    v12[1] = 22;
    v12[4] = a1 + 448;
    v12[5] = v10;
    v12[6] = v9;
    result = sub_608C2C1C(v11);
  }
  FIELD_U8(a1, 446) = 1;
  return result;
}

/* sub_60897044
 * address: 0x60897044   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60897044(_DWORD *a1, _DWORD **a2)
{
  unsigned int v4; // r2
  __int64 v5; // r0
  int v6; // r7
  _DWORD *v7; // r6
  int v8; // r5
  int v9; // r3
  int *v10; // r3
  int v11; // r7
  int *v12; // r1
  _DWORD *v13; // r1
  _DWORD *v15; // [sp+8h] [bp-50h] BYREF
  _DWORD *v16; // [sp+Ch] [bp-4Ch]
  int v17; // [sp+10h] [bp-48h]
  int v18; // [sp+14h] [bp-44h]
  _DWORD *v19; // [sp+18h] [bp-40h] BYREF
  _DWORD *v20; // [sp+1Ch] [bp-3Ch]
  _DWORD *v21; // [sp+20h] [bp-38h]
  int v22; // [sp+24h] [bp-34h]
  int v23; // [sp+28h] [bp-30h]
  int v24; // [sp+2Ch] [bp-2Ch]
  int v25; // [sp+30h] [bp-28h]
  int v26; // [sp+34h] [bp-24h]

  a1[92] = a2[5];
  a1[93] = a2[6];
  v4 = (unsigned int)(a2[4] - 8);
  v5 = 613566757LL * (v4 >> 2);
  a1[101] = v4 / 0x1C;
  LODWORD(v5) = a2[3];
  if ( v4 >= 0x1C )
  {
    v6 = 0;
    HIDWORD(v5) *= 28;
    do
    {
      v7 = (_DWORD *)(v5 + v6);
      v8 = v5 + v6 + 12;
      v9 = v5 + v6 + 20;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = v8;
      v7[4] = v8;
      v7[5] = v9;
      v7[6] = v9;
      *(_DWORD *)(v5 + v6) = 2;
      v6 += 28;
    }
    while ( HIDWORD(v5) != v6 );
  }
  a1[99] = v5;
  a1[105] = v5;
  while ( 1 )
  {
    v12 = (int *)a1[95];
    if ( v12 == a1 + 94 )
      break;
    v10 = (int *)v12[1];
    v11 = *v10;
    *(_DWORD *)(*v12 + 4) = v10;
    *v10 = *v12;
    FIELD_U32(v11, 4) = v12;
    *v12 = v11;
  }
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  sub_6083D5C0(&v19);
  v19 = a2[1];
  sub_6083650C();
  v13 = a2[6];
  v21 = a2[5];
  v20 = v13;
  sub_60836538((int)(a1 + 20), *a2, &v19);
  v18 = 0;
  v17 = 0;
  v16 = 0;
  v15 = 0;
  sub_6083D5B0(&v15);
  v16 = a2[2];
  v15 = a2[6];
  sub_608353C0((int)(a1 + 2), *a2, &v15, a1 + 20, 0);
  a1[104] = sub_608352A0(*a2, (int)&v15);
  a1[92] = sub_608354C4((int)(a1 + 2));
  a1[102] = 0;
  a1[103] = 0;
  a1[98] = 2;
  sub_60835528((int)(a1 + 2), (int)(a1 + 106));
  return 1;
}

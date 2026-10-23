/* sub_608548E4
 * address: 0x608548E4   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608548E4(int a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v8; // r4
  unsigned int v9; // r7
  int v10; // r4
  unsigned int v11; // r0
  int v12; // r4
  _DWORD *v13; // r0
  _WORD *v14; // r0
  int v15; // [sp+8h] [bp-50h]
  int v16; // [sp+Ch] [bp-4Ch]
  int v17; // [sp+10h] [bp-48h] BYREF
  int v18; // [sp+14h] [bp-44h]
  int v19; // [sp+18h] [bp-40h]
  int v20; // [sp+1Ch] [bp-3Ch]
  int v21; // [sp+20h] [bp-38h]
  int v22; // [sp+24h] [bp-34h]
  int v23; // [sp+28h] [bp-30h]
  int v24; // [sp+2Ch] [bp-2Ch]

  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  sub_6083D5B0(&v17);
  v18 = 8;
  v8 = sub_608352A0(a2, (int)&v17);
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  sub_6083D5C0(&v17);
  v17 = 34;
  v15 = sub_60836514();
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  sub_6083D5B0(&v17);
  v18 = 4;
  v9 = sub_608352A0(a2, (int)&v17);
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  sub_6083D5C0(&v17);
  v17 = 34;
  if ( !a3 )
    a4 = 0;
  v10 = (v8 + 31) & -v8;
  v16 = v10 + a4;
  v11 = sub_6083650C();
  if ( !a3 )
  {
    if ( v9 < v11 )
      v9 = v11;
    v12 = (v10 + v15 + 11) & -v15;
    FIELD_U32(a1, 40) = sub_60855BA4(v12, v9);
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    v20 = 0;
    v19 = 0;
    v18 = 0;
    v17 = 0;
    sub_6083D5C0(&v17);
    a3 = (_DWORD *)(a1 + 72);
    v17 = 34;
    v19 = FIELD_U32(a1, 40);
    v18 = v12;
    sub_60836538(a1 + 72, a2, &v17);
  }
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  sub_6083D5B0(&v17);
  v18 = 4;
  v17 = 32;
  sub_608353C0(a1 + 360, a2, &v17, a3, a4);
  sub_60835528(a1 + 360, a1 + 432);
  v13 = (_DWORD *)sub_608354C4(a1 + 360);
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 1065353216;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 1065353216;
  v13[6] = 1065353216;
  v13[7] = 1065353216;
  nullsub_66();
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  sub_6083D5B0(&v17);
  v18 = 8;
  v17 = 12;
  sub_608353C0(a1 + 448, a2, &v17, a3, v16);
  sub_60835528(a1 + 448, a1 + 520);
  v14 = (_WORD *)sub_608354C4(a1 + 448);
  *v14 = 1;
  v14[1] = 0;
  v14[2] = 3;
  v14[3] = 0;
  v14[4] = 2;
  v14[5] = 3;
  nullsub_66();
}

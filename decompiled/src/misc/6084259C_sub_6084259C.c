/* sub_6084259C
 * address: 0x6084259C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084259C(int a1, _DWORD *a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r0
  _DWORD *v10; // r6
  int v11; // r0
  int v12; // r0
  _DWORD *v13; // r6
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r6
  int v17; // r0
  int v19; // [sp+8h] [bp-28h] BYREF
  int v20; // [sp+Ch] [bp-24h]
  int v21; // [sp+10h] [bp-20h]
  int v22; // [sp+14h] [bp-1Ch]

  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  sub_6084396C(&v19);
  v6 = sub_608352A0(a2, (int)&v19);
  sub_60847820(a3, v6);
  v7 = (_DWORD *)sub_6084783C(a3);
  v8 = sub_60847844(a3);
  sub_608353C0(a1 + 80, a2, &v19, v7, v8);
  sub_6084784C(a3, v19);
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  sub_6084396C(&v19);
  v9 = sub_608352A0(a2, (int)&v19);
  sub_60847820(a3, v9);
  v10 = (_DWORD *)sub_6084783C(a3);
  v11 = sub_60847844(a3);
  sub_608353C0(a1 + 152, a2, &v19, v10, v11);
  sub_6084784C(a3, v19);
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  sub_6084396C(&v19);
  v12 = sub_608352A0(a2, (int)&v19);
  sub_60847820(a3, v12);
  v13 = (_DWORD *)sub_6084783C(a3);
  v14 = sub_60847844(a3);
  sub_608353C0(a1 + 224, a2, &v19, v13, v14);
  sub_6084784C(a3, v19);
  v22 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  sub_6084396C(&v19);
  v15 = sub_608352A0(a2, (int)&v19);
  sub_60847820(a3, v15);
  v16 = (_DWORD *)sub_6084783C(a3);
  v17 = sub_60847844(a3);
  sub_608353C0(a1 + 296, a2, &v19, v16, v17);
  return sub_6084784C(a3, v19);
}

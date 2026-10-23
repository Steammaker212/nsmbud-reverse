/* sub_6071E9D0
 * address: 0x6071E9D0   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071E9D0(int *a1, _DWORD *a2)
{
  float *v4; // r6
  float v5; // s16
  float v6; // s0
  _DWORD *v7; // r6
  int v8; // r1
  _DWORD *v9; // r5
  int v10; // t1
  float v12[51]; // [sp+4h] [bp-CCh] BYREF

  sub_6090B260(a1 + 1366, a2[10]);
  v4 = (float *)a2[7];
  v5 = (*(float (__fastcall **)(float *))(*(_DWORD *)v4 + 16))(v4);
  v6 = (*(float (__fastcall **)(float *, float))(*(_DWORD *)v4 + 20))(v4, v5);
  sub_6090C77C(v12, v5, v6, -v4[39], -v4[40], v4[41], v4[42]);
  v7 = a1 + 1190;
  if ( sub_6071B2AC(TilesetMgr_instance, FIELD_U8(LevelInfo_instance, 18), 2u) )
    sub_604157F4(a1 + 2556, a2[10], 0, v12, a1[1190]);
  sub_6091ADF4(a1 + 1192, a2[10]);
  sub_6091AE0C(a1 + 1280, a2[10]);
  sub_6091ADF4(a1 + 1104, a2[10]);
  v10 = a1[1278];
  v9 = a1 + 1278;
  v8 = v10;
  if ( v10 )
  {
    sub_6093EA98(dword_60CD09F8, v8);
    *v9 = 0;
  }
  if ( *v7 )
  {
    sub_6093EA98(dword_60CD09F8, *v7);
    *v7 = 0;
  }
  sub_6090B260(a2[3], a2[10]);
  return nullsub_113(v12);
}

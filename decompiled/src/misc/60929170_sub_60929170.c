/* sub_60929170
 * address: 0x60929170   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60929170(int a1, int a2, float *a3, int a4, int a5)
{
  float v8; // r1
  float v9; // r2
  float v10; // s16
  int v11; // s1
  int v12; // s2
  int v13; // s3
  int v14; // s1
  int v15; // s2
  int v16; // s3
  int v17; // s1
  int v18; // s2
  int v19; // s3
  float v20; // s8
  float v21; // s6
  float v23[12]; // [sp+10h] [bp-90h] BYREF
  _DWORD v24[4]; // [sp+40h] [bp-60h] BYREF
  _DWORD v25[4]; // [sp+50h] [bp-50h] BYREF
  _DWORD v26[4]; // [sp+60h] [bp-40h] BYREF
  float v27; // [sp+70h] [bp-30h] BYREF
  float v28; // [sp+74h] [bp-2Ch]
  float v29; // [sp+78h] [bp-28h]

  v8 = FIELD_F32(a1, 288);
  v9 = FIELD_F32(a1, 292);
  v27 = FIELD_F32(a1, 284);
  v28 = v8;
  v29 = v9;
  v10 = FIELD_F32(a1, 268);
  v26[0] = sub_6090B1D8((float *)(a1 + 184), v10);
  v26[1] = v11;
  v26[2] = v12;
  v26[3] = v13;
  v25[0] = sub_6090B1D8((float *)(a1 + 212), v10);
  v25[1] = v14;
  v25[2] = v15;
  v25[3] = v16;
  v24[0] = sub_6090B1D8((float *)(a1 + 240), v10);
  v24[1] = v17;
  v24[2] = v18;
  v24[3] = v19;
  if ( FIELD_U8(a1, 308) )
  {
    sub_601B59CC(v23, a3);
    v20 = v28;
    v21 = v27;
    v27 = (float)((float)(v28 * v23[1]) + (float)(v27 * v23[0])) + (float)(v29 * v23[2]);
    v28 = (float)((float)(v28 * v23[5]) + (float)(v21 * v23[4])) + (float)(v29 * v23[6]);
    v29 = (float)((float)(v20 * v23[9]) + (float)(v21 * v23[8])) + (float)(v29 * v23[10]);
  }
  return sub_609232EC(a1, a2, a5, (int)&v27, (int)v26, (int)v25, (int)v24);
}

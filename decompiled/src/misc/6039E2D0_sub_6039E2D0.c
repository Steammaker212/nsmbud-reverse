/* sub_6039E2D0
 * address: 0x6039E2D0   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039E2D0(int a1, float *a2, int r2_0)
{
  char v3; // r12
  int v7; // r7
  float v8; // s0
  char *v9; // r1
  float v10; // s4
  float v11; // s6
  TileCheck *v12; // r0
  int v13; // r0
  bool v14; // zf
  TileCheck_Result v16; // [sp+8h] [bp-A8h] BYREF
  TileCheck v17; // [sp+30h] [bp-80h] BYREF
  TileCheck_Param v18; // [sp+7Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-28h] BYREF
  Vec2 a3; // [sp+90h] [bp-20h] BYREF

  if ( ((unsigned int)&dword_60C97694[1] & ~(1614406392 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C97694[1]) )
  {
    unk_60C976B8 = 1065353216;
    unk_60C976BC = 0;
    unk_60C976C0 = -1082130432;
    dword_60C976C4 = 0;
    dword_60C976C8 = 0;
    unk_60C976CC = 1065353216;
    unk_60C976D0 = 0;
    unk_60C976D4 = -1082130432;
    _cxa_guard_release(&dword_60C97694[1]);
  }
  v7 = 0;
  a3.x = FIELD_F32(a1, 6416);
  v8 = FIELD_F32(a1, 6420);
  v18.field_0 = 0;
  v9 = &byte_60C97690[8 * r2_0];
  v10 = *((float *)v9 + 10);
  v11 = *((float *)v9 + 11);
  a3.y = v8 + 8.0;
  positionOffset.x = a3.x + (float)(v10 * 160.0);
  positionOffset.y = (float)(v8 + 8.0) + (float)(v11 * 160.0);
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v12 = TileCheck_ctor(&v17, &v18);
  v16.field_C = 0;
  v16.field_10 = 0;
  v13 = TileCheck_check(v12, &v16, &a3, &positionOffset, byte_60AFDF90[r2_0]);
  v14 = v13 == 1;
  if ( v13 == 1 )
    v14 = LOWORD(v16.field_18) == 0x10;
  if ( v14 )
  {
    v7 = 1;
    *a2 = v16.field_4;
    a2[1] = v16.field_8;
  }
  return v7;
}

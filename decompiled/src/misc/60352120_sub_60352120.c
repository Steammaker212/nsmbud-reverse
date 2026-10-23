/* sub_60352120
 * address: 0x60352120   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60352120(int a1, unsigned int a2)
{
  unsigned int v3; // r7
  unsigned int v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  unsigned int v7; // r11
  float v8; // s20
  int v9; // r6
  int v10; // r4
  float v11; // s22
  float v12; // s22
  _DWORD *v13; // r8
  char v14; // r12
  unsigned int v15; // r4
  int v16; // r0
  unsigned int v17; // r1
  int *v18; // [sp+1Ch] [bp-104h]
  unsigned int v19; // [sp+28h] [bp-F8h]
  int v21; // [sp+44h] [bp-DCh]
  Vec2 positionOffset; // [sp+48h] [bp-D8h] BYREF
  Vec2 a3; // [sp+50h] [bp-D0h] BYREF
  TileCheck_Result v24; // [sp+58h] [bp-C8h] BYREF
  TileCheck v25; // [sp+80h] [bp-A0h] BYREF
  TileCheck_Param v26; // [sp+CCh] [bp-54h] BYREF

  if ( a2 )
  {
    v3 = 0;
    v21 = FIELD_U32(a1, 80) & 1 | FIELD_U32(a1, 20) & 0x100 | 0x10000000;
    v4 = FIELD_U32(a1, 80) ^ 1;
    v5 = 0;
    if ( v4 < 2 )
      v5 = v4;
    v6 = v4 & 1;
    v19 = v5;
    v7 = FIELD_U32(a1, 8);
    v8 = flt_60AF20D0[v6];
    v18 = &dword_60AF1FF8[v6];
    do
    {
      v9 = FIELD_S32(a1, 112);
      v10 = FIELD_U32(a1, 116);
      v11 = FIELD_F32(a1, 108);
      v24.field_C = 0;
      v24.field_10 = 0;
      *(_WORD *)&v26.field_0 = 0;
      a3.x = v11;
      a3.y = *(float *)&v9 + 8.0;
      v12 = v11 - (float)((float)((float)v3 + 1.0) * v8);
      positionOffset.x = v12;
      positionOffset.y = *(float *)&v9 + 8.0;
      v26.field_2 = FIELD_U8(a1, 86);
      v26.field_3 = FIELD_U8(a1, 87);
      v26.field_4 = 0;
      v26.field_8 = 0;
      TileCheck_ctor(&v25, &v26);
      if ( TileCheck_check(&v25, &v24, &a3, &positionOffset, 15) == 1 )
      {
        v9 = FIELD_S32(a1, 112);
        v10 = FIELD_U32(a1, 116);
        v12 = v24.field_4 + (float)((float)*v18 * 8.0);
      }
      memset(&v25.field_8, 0, 36);
      *(_DWORD *)&v25.field_0 = v21;
      v25.field_4 = 1;
      v25.field_C = (int)Profile__get(0x28Cu);
      *(float *)&v25.field_10 = v12;
      v25.field_14 = v9;
      v25.field_18 = v10;
      LOBYTE(v25.field_20) = 0;
      v13 = ActorMgr__create((void *)ActorMgr__instance, (ActorBuildInfo *)&v25, 0);
      if ( ((unsigned int)dword_60C94FF8 & ~(1614095156 << v14) & 1) == 0 && _cxa_guard_acquire(dword_60C94FF8) )
      {
        dword_60C94FF4 = (int)&off_60BC04AC;
        _cxa_guard_release(dword_60C94FF8);
      }
      if ( !v13 || !(*(int (__fastcall **)(_DWORD *, int *))*v13)(v13, &dword_60C94FF4) )
        break;
      v13[1576] = FIELD_U32(a1, 6304);
      (*(void (__fastcall **)(_DWORD *, int *))(*v13 + 192))(v13, &dword_60C94F7C);
      v15 = v13[2];
      v16 = sub_60351954(v7);
      v17 = FIELD_U32(a1, 80);
      ++v3;
      if ( v17 >= 2 )
        v17 = 0;
      *(_DWORD *)(v16 + 4 * v17 + 6308) = v15;
      v13[v19 + 1577] = v7;
      v7 = v15;
    }
    while ( v3 < a2 );
  }
}

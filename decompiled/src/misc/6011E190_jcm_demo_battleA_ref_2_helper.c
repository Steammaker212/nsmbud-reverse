/* jcm_demo_battleA_ref_2_helper
 * address: 0x6011E190   size: 816   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jcm_demo_battleA_ref_2_helper(int a1)
{
  char v1; // r12
  float v3; // r0
  float v4; // r1
  TileCheck *v5; // r0
  float v6; // r0
  float v7; // r1
  TileCheck *v8; // r0
  float v9; // r0
  float v10; // r1
  TileCheck *v11; // r0
  float v12; // r0
  float v13; // r1
  TileCheck *v14; // r0
  int result; // r0
  TileCheck_Result v16; // [sp+8h] [bp-A8h] BYREF
  TileCheck v17; // [sp+30h] [bp-80h] BYREF
  TileCheck_Param v18; // [sp+7Ch] [bp-34h] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-28h] BYREF
  Vec2 a3[4]; // [sp+90h] [bp-20h] BYREF

  if ( ((unsigned int)algn_60C86DC4 & ~(1611784624 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C86DC4) )
  {
    dword_60C86DC0 = FIELD_U32(dword_60CC6484, 112);
    _cxa_guard_release((__guard *)algn_60C86DC4);
  }
  if ( ((unsigned int)algn_60C86DCC & ~(1611784704 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C86DCC) )
  {
    dword_60C86DC8 = FIELD_U32(dword_60CC6484, 124);
    _cxa_guard_release((__guard *)algn_60C86DCC);
  }
  if ( ((unsigned int)algn_60C86DD4 & ~(1611784788 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C86DD4) )
  {
    *(float *)&dword_60C86DD0 = *(float *)&dword_60C86DC0 + FIELD_F32(dword_60CC6484, 104);
    _cxa_guard_release((__guard *)algn_60C86DD4);
  }
  if ( ((unsigned int)algn_60C86DDC & ~(1611784880 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C86DDC) )
  {
    *(float *)&dword_60C86DD8 = *(float *)&dword_60C86DC8 - FIELD_F32(dword_60CC6484, 108);
    _cxa_guard_release((__guard *)algn_60C86DDC);
  }
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  *(_WORD *)&v18.field_0 = 0;
  a3[0].x = v3;
  a3[0].y = v4;
  positionOffset.x = v3;
  LODWORD(positionOffset.y) = dword_60C86DC8;
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v5 = TileCheck_ctor(&v17, &v18);
  v16.field_C = 0;
  v16.field_10 = 0;
  TileCheck_check(v5, &v16, a3, &positionOffset, 15);
  FIELD_F32(a1, 8844) = v16.field_8;
  v6 = FIELD_F32(a1, 108);
  v7 = FIELD_F32(a1, 112);
  *(_WORD *)&v18.field_0 = 0;
  a3[0].x = v6;
  a3[0].y = v7;
  positionOffset.x = v6;
  LODWORD(positionOffset.y) = dword_60C86DD8;
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v8 = TileCheck_ctor(&v17, &v18);
  v16.field_C = 0;
  v16.field_10 = 0;
  TileCheck_check(v8, &v16, a3, &positionOffset, 15);
  FIELD_F32(a1, 8848) = v16.field_8;
  v9 = FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 112);
  *(_WORD *)&v18.field_0 = 0;
  a3[0].x = v9;
  a3[0].y = v10;
  LODWORD(positionOffset.x) = dword_60C86DC0;
  positionOffset.y = v10;
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v11 = TileCheck_ctor(&v17, &v18);
  v16.field_C = 0;
  v16.field_10 = 0;
  TileCheck_check(v11, &v16, a3, &positionOffset, 15);
  FIELD_F32(a1, 8836) = v16.field_4;
  v12 = FIELD_F32(a1, 108);
  v13 = FIELD_F32(a1, 112);
  *(_WORD *)&v18.field_0 = 0;
  a3[0].x = v12;
  a3[0].y = v13;
  LODWORD(positionOffset.x) = dword_60C86DD0;
  positionOffset.y = v13;
  v18.field_2 = FIELD_U8(a1, 86);
  v18.field_3 = FIELD_U8(a1, 87);
  v18.field_4 = 0;
  v18.field_8 = 0;
  v14 = TileCheck_ctor(&v17, &v18);
  v16.field_C = 0;
  v16.field_10 = 0;
  TileCheck_check(v14, &v16, a3, &positionOffset, 15);
  result = LODWORD(v16.field_4);
  FIELD_F32(a1, 8840) = v16.field_4;
  return result;
}

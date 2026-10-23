/* sub_602D1B04
 * address: 0x602D1B04   size: 608   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602D1B04(int a1, float a2)
{
  unsigned int v4; // r0
  int v5; // r5
  int (__fastcall ***v6)(_DWORD, int *); // r6
  char v7; // r12
  float v8; // s2
  float v9; // s6
  float v10; // s0
  float v11; // s4
  float v12; // s24
  float v13; // s26
  float v14; // s22
  float v15; // s20
  TileCheck *v16; // r0
  int v17; // r0
  float v18; // s0
  float v19; // s24
  float v20; // s22
  float v21; // s20
  float v22; // s0
  float v23; // s0
  float v24; // s0
  float v25; // s2
  float v26; // s4
  float v27; // s6
  float v28; // s8
  float v29; // s10
  float result; // s0
  TileCheck_Result v31; // [sp+8h] [bp-D0h] BYREF
  TileCheck v32; // [sp+30h] [bp-A8h] BYREF
  TileCheck_Param v33; // [sp+7Ch] [bp-5Ch] BYREF
  Vec2 positionOffset; // [sp+88h] [bp-50h] BYREF
  Vec2 a3; // [sp+90h] [bp-48h] BYREF

  v4 = sub_6000F7B8(FIELD_F32(a1, 68) - FIELD_F32(a1, 56), FIELD_F32(a1, 76) - FIELD_F32(a1, 64));
  v5 = 0;
  FIELD_U32(a1, 20) = 0;
  FIELD_U32(a1, 24) = v4 ^ 0x80000000;
  FIELD_U32(a1, 28) = 0;
  v6 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 80));
  if ( ((unsigned int)&dword_60C7B364 & ~(1613568888 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v6 )
  {
    v5 = (**v6)(v6, &StageActor_RTTI);
    if ( v5 )
      v5 = (int)v6;
  }
  v8 = FIELD_F32(a1, 60);
  v9 = FIELD_F32(a1, 72);
  v10 = FIELD_F32(a1, 56);
  v11 = FIELD_F32(a1, 68);
  v12 = FIELD_F32(a1, 64);
  v13 = FIELD_F32(a1, 76);
  *(_WORD *)&v33.field_0 = 0;
  v14 = (float)(v8 + v9) * 0.5;
  v15 = (float)(v10 + v11) * 0.5;
  a3.x = v15;
  positionOffset.x = v15;
  a3.y = v14 + 20.0;
  positionOffset.y = v14 + -32.0;
  v33.field_2 = FIELD_U8(v5, 86);
  v33.field_3 = FIELD_U8(v5, 87);
  v33.field_4 = 0;
  v33.field_8 = 0;
  v16 = TileCheck_ctor(&v32, &v33);
  v31.field_C = 0;
  v31.field_10 = 0;
  v17 = TileCheck_check(v16, &v31, &a3, &positionOffset, 8);
  v18 = (float)(v12 + v13) * 0.5;
  if ( v17 == 1 )
  {
    if ( v31.field_20 )
    {
      if ( *(_DWORD *)(v31.field_20 + 224) )
        v14 = v31.field_8;
    }
    else
    {
      v14 = v31.field_8;
    }
  }
  v19 = v15 - FIELD_F32(a1, 56);
  v20 = v14 - FIELD_F32(a1, 60);
  v21 = v18 - FIELD_F32(a1, 64);
  v22 = sqrtf((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v21 * v21));
  if ( v22 > 0.0 )
  {
    v23 = 1.0 / v22;
    v21 = v21 * v23;
    v20 = v20 * v23;
    v19 = v19 * v23;
  }
  v24 = FIELD_F32(a1, 56);
  v25 = FIELD_F32(a1, 60);
  v26 = FIELD_F32(a1, 64);
  v27 = v24 + (float)(v19 * a2);
  v28 = v25 + (float)(v20 * a2);
  v29 = v26 + (float)(v21 * a2);
  FIELD_F32(a1, 68) = v27;
  FIELD_F32(a1, 72) = v28;
  FIELD_F32(a1, 76) = v29;
  FIELD_F32(a1, 8) = (float)(v27 + v24) * 0.5;
  result = (float)(v29 + v26) * 0.5;
  FIELD_F32(a1, 12) = (float)(v28 + v25) * 0.5;
  FIELD_F32(a1, 16) = result;
  return result;
}

/* SE_EMY_MAMEKURIBO_CLING_ref
 * address: 0x60251AB0   size: 972   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_EMY_MAMEKURIBO_CLING_ref(int a1)
{
  char v1; // r12
  int v3; // r1
  unsigned int v4; // r0
  char *v5; // r10
  int v6; // r5
  float v7; // s20
  float v8; // s16
  float v9; // s18
  int v10; // r0
  float v11; // s0
  float v12; // s2
  unsigned int v13; // r0
  float *v14; // r1
  float v15; // s6
  int v16; // r8
  float v17; // r1
  int v18; // r6
  int v19; // r7
  int v20; // r6
  _BYTE *v21; // r9
  bool v22; // zf
  int v23; // r7
  char v24; // r12
  int v25; // r0
  Vec2 out; // [sp+8h] [bp-50h] BYREF
  Vec3 position; // [sp+10h] [bp-48h] BYREF

  v3 = 0;
  v5 = (char *)(a1 + 6356);
  v4 = FIELD_U8(a1, 6356);
  if ( v4 < 4 )
    v3 = (char)v4;
  v6 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32);
  if ( ((unsigned int)&dword_60C7B374 & ~(1613044480 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( !v6 || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) != 1 )
    return;
  v7 = FIELD_F32(v6, 108);
  v8 = FIELD_F32(v6, 112);
  v9 = FIELD_F32(v6, 116);
  FIELD_F32(a1, 6308) = FIELD_F32(a1, 6312) + FIELD_F32(a1, 6308);
  v10 = sub_6075F950(v6);
  v11 = FIELD_F32(a1, 6308);
  v12 = fabsf((float)(FIELD_F32(v10, 4) + -4.0) - v8);
  if ( v11 >= v12 )
    goto LABEL_11;
  if ( v11 < 0.0 )
  {
    v12 = 0.0;
LABEL_11:
    FIELD_F32(a1, 6308) = v12;
    FIELD_U32(a1, 6360) ^= 1u;
    FIELD_F32(a1, 6312) = -FIELD_F32(a1, 6312);
    v11 = v12;
  }
  v13 = FIELD_U32(a1, 6352) + 0x4000000;
  FIELD_U32(a1, 6352) = v13;
  FIELD_U32(a1, 160) += 0x4000000;
  v14 = (float *)((char *)sinLutTable + ((v13 >> 20) & 0xFF0));
  v15 = (float)(v13 & 0xFFFFFF);
  FIELD_F32(a1, 108) = v7 + (float)((float)(v14[2] + (float)((float)(v15 * v14[3]) * 0.000000059605)) * 8.0);
  FIELD_F32(a1, 116) = v9 + (float)((float)(*v14 + (float)((float)(v15 * v14[1]) * 0.000000059605)) * 8.0);
  FIELD_F32(a1, 112) = v8 + v11;
  v16 = sub_60760184(v6);
  sub_60760164(v6);
  v17 = FIELD_F32(a1, 112);
  v18 = FIELD_U32(a1, 8);
  v19 = Global_BasicSoundActor1;
  position.x = FIELD_F32(a1, 108);
  position.y = v17;
  mapPositionToScreen(&out, &position);
  j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v19, "SE_EMY_MAMEKURIBO_CLING", v18, &out, 0);
  v20 = 1;
  FIELD_U8(a1, 6364) = 0;
  v21 = (_BYTE *)(a1 + 6364);
  if ( v16 > 8 )
    v20 = 3;
  if ( (unsigned int)(v16 - 4) < 5 )
    v20 = 2;
  v22 = (FIELD_U8(v6, 1205) & 0x40) == 0;
  if ( (FIELD_U8(v6, 1205) & 0x40) == 0 )
    v22 = (FIELD_U8(v6, 1218) & 0x40) == 0;
  if ( !v22 )
    *v21 = 3;
  v23 = sub_607B7028(v6);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613045044 << v24) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v23
    && (**(int (__fastcall ***)(int, int *))v23)(v23, &dword_60C7B378) == 1
    && (FIELD_U8(v23, 1212) & 0x40) != 0 )
  {
    *v21 = 1;
  }
  if ( (FIELD_U8(v6, 1210) & 2) != 0 )
    *v21 = 1;
  if ( sub_607869D0(v6 + 688) || sub_60253194(a1, v6) == 1 )
  {
    if ( sub_60254000(dword_60C8DFBC, FIELD_U32(a1, 8), v16, FIELD_U16(a1, 6348), *v5) == 1
      || (v25 = FIELD_U32(a1, 6320) + 1, FIELD_U32(a1, 6320) = v25, v25 >= v20) )
    {
      *v21 = 1;
    }
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1204))(v6) == 1 )
  {
    *v21 = 2;
  }
  else if ( !*v21 )
  {
    return;
  }
  SE_EMY_MAMEKURIBO_DEAD_ref_253344(a1, v6);
}

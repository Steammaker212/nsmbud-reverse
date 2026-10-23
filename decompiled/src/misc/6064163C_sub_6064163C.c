/* sub_6064163C
 * address: 0x6064163C   size: 1004   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064163C(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r0
  float *v4; // r9
  int v5; // r0
  float v6; // s0
  int v7; // r0
  float v8; // s0
  int v9; // r0
  int v10; // r1
  StateMgr *v11; // r0
  int *v12; // r1
  int v13; // r1
  int *v14; // r1
  int v15; // r0
  int v16; // s0
  bool v17; // zf
  int result; // r0
  SolidOnTopColliderInfo a5; // [sp+0h] [bp-58h] BYREF
  float v20[16]; // [sp+18h] [bp-40h] BYREF

  if ( Actor__getProfileId((Actor *)a1) == 219 )
    FIELD_U8(a1, 7030) = 1;
  sub_606429F0(a1 + 144, a1 + 116);
  v2 = FIELD_U32(a1, 20);
  FIELD_U32(a1, 7024) = HIBYTE(v2);
  if ( HIBYTE(v2) )
    FIELD_U8(a1, 7028) = 1;
  if ( (v2 & 1) != 0 )
    FIELD_U8(a1, 7029) = 1;
  v3 = FIELD_U32(a1, 24);
  FIELD_U32(a1, 7020) = (v2 >> 8) & 0xF;
  v4 = (float *)(a1 + 7008);
  v5 = (v3 >> 8) & 0xF;
  if ( !v5 )
    v5 = 4;
  FIELD_U32(a1, 7004) = v5;
  v6 = (float)v5 * 16.0;
  *v4 = v6;
  FIELD_U32(a1, 6324) = v5;
  FIELD_F32(a1, 6264) = v6 * -0.5;
  FIELD_U32(a1, 6268) = 0;
  FIELD_U32(a1, 6272) = 0;
  v7 = v2 & 0xF000;
  if ( (v2 & 0xF000) != 0 )
    v7 = 1;
  FIELD_U32(a1, 6328) = v7;
  FIELD_U32(a1, 6300) = 0;
  FIELD_U32(a1, 6304) = 0;
  FIELD_U32(a1, 6308) = 0;
  ((void (__fastcall *)(int))loc_60645374)(a1 + 6104);
  sub_60639254(a1 + 6952);
  FIELD_F32(a1, 144) = (float)FIELD_S32(a1, 7004) * 0.5;
  v8 = *v4;
  memset(&a5, 0, 16);
  v20[0] = v8 * -0.5;
  v20[1] = 8.0;
  v20[2] = v8 * 0.5;
  v20[3] = 8.0;
  a5.points = (Vec2 *)v20;
  a5.rotation = 0;
  SolidOnTopCollider_init((SolidOnTopCollider *)(a1 + 6360), (StageActor *)a1, &a5);
  FIELD_U32(a1, 6532) = 0;
  FIELD_U32(a1, 6536) = 0;
  if ( (v2 & 0x10) != 0 )
    ColliderBase_setSurfaceType((ColliderBase *)(a1 + 6360), 1);
  if ( (FIELD_U8(a1, 7030) || FIELD_U8(dword_60CC6D8C, 17)) && (FIELD_U8(a1, 24) & 0x10) != 0 )
    FIELD_U32(a1, 6584) = 4;
  if ( FIELD_U8(dword_60CC6D8C, 17) && Actor__getProfileId((Actor *)a1) == 218 && (FIELD_U8(a1, 26) & 0x10) != 0 )
    FIELD_U32(a1, 6684) = sub_60641A6C;
  v9 = (FIELD_U32(a1, 24) >> 28) & 1;
  FIELD_U32(a1, 7016) = v9;
  FIELD_U32(a1, 6984) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6988) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6992) = FIELD_U32(a1, 116);
  if ( v9 )
  {
    if ( FIELD_U64(EventMgr__instance, 16) )
    {
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
      sub_6063938C(a1 + 6952);
      v13 = (v2 >> 20) & 3;
      FIELD_U8(a1, 7012) = v13;
      v11 = (StateMgr *)(a1 + 6084);
      if ( v13 )
        v12 = &dword_60CB59D0;
      else
        v12 = &dword_60CB59F0;
    }
    else
    {
      v11 = (StateMgr *)(a1 + 6084);
      v12 = &dword_60CB59B0;
    }
  }
  else
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
    sub_6063938C(a1 + 6952);
    v10 = (v2 >> 20) & 3;
    FIELD_U8(a1, 7012) = v10;
    v11 = (StateMgr *)(a1 + 6084);
    if ( v10 )
      v12 = &dword_60CB59D0;
    else
      v12 = &dword_60CB59F0;
  }
  StateMgr__changeState(v11, (StateBase *)v12);
  sub_60645448(a1 + 6104, a1 + 108);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  v14 = dword_60641A60;
  LOWORD(v15) = 0;
  if ( !FIELD_U8(a1, 7030) )
    v14 = &dword_60641A60[1];
  HIWORD(v15) = 17536;
  v16 = *v14;
  FIELD_U32(a1, 500) = v15;
  FIELD_U32(a1, 504) = v16;
  FIELD_U32(a1, 508) = v15;
  FIELD_U32(a1, 512) = v16;
  FIELD_U32(a1, 6996) = v15;
  FIELD_U32(a1, 7000) = v16;
  v17 = Actor__getProfileId((Actor *)a1) == 218;
  result = 1;
  if ( v17 )
    FIELD_U8(a1, 534) = 0;
  return result;
}

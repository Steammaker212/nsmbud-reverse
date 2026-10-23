/* sub_600FE268
 * address: 0x600FE268   size: 576   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FE268(int a1)
{
  float v2; // r2
  float v3; // r0
  float v4; // r1
  int result; // r0
  int v6; // r0
  Actor *v7; // r5
  StateMgr *p_heap; // r0
  StateBase *v9; // r1
  int v10; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+Ch] [bp-2Ch] BYREF
  Vec2 out; // [sp+18h] [bp-20h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 116);
  v3 = FIELD_F32(a1, 9332);
  position.x = FIELD_F32(a1, 9328);
  position.y = v3;
  position.z = v2;
  EffectWrapper_update((EffectWrapper *)(a1 + 9784), 1066, &position, 0, (Vec3 *)(a1 + 144));
  FIELD_U32(a1, 160) += 596523264;
  v4 = FIELD_F32(a1, 112);
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&out, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CROWN_DOWNATTACK", &out, 0);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    v6 = sub_6014B69C(a1 + 648);
    if ( v6 )
    {
      v7 = *(Actor **)(v6 + 144);
      if ( Actor__getProfileId(v7) == 269 )
      {
        p_heap = (StateMgr *)&v7[76].heap;
        v9 = (StateBase *)&unk_60C862E4;
LABEL_11:
        StateMgr__changeState(p_heap, v9);
        return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F34);
      }
      if ( Actor__getProfileId(v7) == 270 )
      {
        p_heap = (StateMgr *)&v7[76].heap;
        v9 = (StateBase *)&unk_60C86150;
        goto LABEL_11;
      }
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F34);
  }
  out.x = FIELD_F32(a1, 112);
  ((void (__fastcall *)(int *, Vec2 *, int, _DWORD))checkLiquidCollisions)(
    &v10,
    &out,
    a1 + 108,
    FIELD_U8(a1, 86));
  if ( (unsigned int)(v10 - 3) > 1 )
  {
    result = dword_60CC6484;
    if ( (float)(FIELD_F32(dword_60CC6484, 132) + -16.0) > FIELD_F32(a1, 112) )
      return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F74);
  }
  else
  {
    position.x = FIELD_F32(a1, 108);
    position.y = out.x;
    position.z = 4500.0;
    StageActor__createWaterSplash((StageActor *)a1, (Vec2 *)&position, 1068, 14, "SE_PLY_SPLASH_LAVA");
    position.x = FIELD_F32(a1, 108);
    position.y = out.x;
    TileMgr_splashRelated(TileMgr_instance, &position, 5);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85F74);
  }
  return result;
}

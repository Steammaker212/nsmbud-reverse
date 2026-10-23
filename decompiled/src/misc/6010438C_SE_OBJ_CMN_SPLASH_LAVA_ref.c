/* SE_OBJ_CMN_SPLASH_LAVA_ref
 * address: 0x6010438C   size: 832   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_CMN_SPLASH_LAVA_ref(int a1)
{
  float v2; // s0
  float v3; // r0
  float v4; // s18
  float v5; // r1
  int v6; // r0
  float v7; // r1
  int v8; // r5
  char v9; // r12
  _DWORD *i; // r5
  int (__fastcall ***v11)(_DWORD, int *); // r6
  StateMethodExecuter *result; // r0
  Vec3 position; // [sp+8h] [bp-60h] BYREF
  int v14; // [sp+14h] [bp-54h] BYREF
  float v15[3]; // [sp+18h] [bp-50h] BYREF
  float v16; // [sp+24h] [bp-44h] BYREF
  Vec2 out; // [sp+28h] [bp-40h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v2;
  if ( FIELD_U8(a1, 6704) )
  {
    v3 = FIELD_F32(a1, 116);
    v4 = FIELD_F32(a1, 6592) * 0.5;
    v15[0] = v4 + FIELD_F32(a1, 108);
    v15[1] = v2;
    v15[2] = v3;
    ((void (__fastcall *)(int *, float *, float *, _DWORD))checkLiquidCollisions)(
      &v14,
      &v16,
      v15,
      FIELD_U8(a1, 86));
    if ( (unsigned int)(v14 - 3) <= 1 )
    {
      position.x = (float)(v4 * 0.5) + v15[0];
      position.y = v16;
      TileMgr_splashRelated(TileMgr_instance, &position, 14);
      position.x = v15[0] - (float)(v4 * 0.5);
      position.y = v16;
      TileMgr_splashRelated(TileMgr_instance, &position, 14);
      position.x = v15[0];
      position.y = v16;
      TileMgr_splashRelated(TileMgr_instance, &position, 15);
      v5 = v16;
      v6 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 6772) = FIELD_F32(a1, 108) + FIELD_F32(a1, 6596);
      FIELD_F32(a1, 6776) = v5;
      FIELD_U32(a1, 6780) = v6;
      sub_602375C4((EffectData *)(a1 + 6708), 1221, (Vec3 *)(a1 + 6772), 0, 0);
      position.x = (float)FIELD_S32(a1, 6684) + 2.0;
      position.y = 1.0;
      position.z = 1.0;
      sub_60236290(a1 + 6708, &position);
      v7 = FIELD_F32(a1, 112);
      v8 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v7;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v8, "SE_OBJ_CMN_SPLASH_LAVA", &out.x, 0);
      FIELD_U8(a1, 6704) = 0;
      for ( i = *(_DWORD **)(a1 + 6360); i; i = (_DWORD *)i[1] )
      {
        if ( *i )
        {
          v11 = *(int (__fastcall ****)(_DWORD, int *))(*i + 2196);
          if ( ((unsigned int)&dword_60C8619C & ~(1611679164 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C8619C) )
          {
            dword_60C86198 = (int)&off_60BC00D4;
            _cxa_guard_release(&dword_60C8619C);
          }
          if ( v11 && (**v11)(v11, &dword_60C86198) == 1 )
            sub_6062CEB0(v11);
        }
      }
    }
  }
  if ( sub_60235E50(a1 + 6708) == 1 )
    EffectData_update((EffectData *)(a1 + 6708), (Vec3 *)(a1 + 6772), 0, 0);
  FIELD_U32(a1, 156) += dword_60C861A8;
  FIELD_U32(a1, 164) += dword_60C861AC;
  result = (StateMethodExecuter *)dword_60CC6484;
  if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(dword_60CC6484, 132) + -192.0) )
  {
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 164) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C860F0);
  }
  return result;
}

/* SE_OBJ_CMN_SPLASH_LAVA_ref_105AE0
 * address: 0x60105AE0   size: 840   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_OBJ_CMN_SPLASH_LAVA_ref_105AE0(int a1)
{
  float v2; // s0
  float v3; // r0
  float v4; // s18
  int v5; // r5
  float v6; // r1
  int v7; // r0
  float v8; // r1
  int v9; // r5
  char v10; // r12
  _DWORD *i; // r5
  int (__fastcall ***v12)(_DWORD, int *); // r6
  StateMethodExecuter *result; // r0
  Vec3 position; // [sp+8h] [bp-60h] BYREF
  int v15; // [sp+14h] [bp-54h] BYREF
  float v16[3]; // [sp+18h] [bp-50h] BYREF
  float v17; // [sp+24h] [bp-44h] BYREF
  Vec2 out; // [sp+28h] [bp-40h] BYREF

  CollisionActor__handleGravity((CollisionActor *)a1);
  v2 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v2;
  if ( FIELD_U8(a1, 6692) )
  {
    v3 = FIELD_F32(a1, 116);
    v4 = FIELD_F32(a1, 6192) * 0.5;
    v16[0] = v4 + FIELD_F32(a1, 108);
    v16[1] = v2;
    v16[2] = v3;
    ((void (__fastcall *)(int *, float *, float *, _DWORD))checkLiquidCollisions)(
      &v15,
      &v17,
      v16,
      FIELD_U8(a1, 86));
    if ( (unsigned int)(v15 - 3) <= 1 )
    {
      FIELD_U8(a1, 6692) = 0;
      v5 = TileMgr_instance;
      position.x = (float)(v4 * 0.5) + v16[0];
      position.y = v17;
      TileMgr_splashRelated(TileMgr_instance, &position, 14);
      position.x = v16[0] - (float)(v4 * 0.5);
      position.y = v17;
      TileMgr_splashRelated(v5, &position, 14);
      position.x = v16[0];
      position.y = v17;
      TileMgr_splashRelated(v5, &position, 15);
      v6 = v17;
      v7 = FIELD_U32(a1, 116);
      FIELD_F32(a1, 6760) = FIELD_F32(a1, 108) + FIELD_F32(a1, 6196);
      FIELD_F32(a1, 6764) = v6;
      FIELD_U32(a1, 6768) = v7;
      sub_602375C4((EffectData *)(a1 + 6696), 1221, (Vec3 *)(a1 + 6760), 0, 0);
      position.x = (float)FIELD_S32(a1, 6188) + 2.0;
      position.y = 1.0;
      position.z = 1.0;
      sub_60236290(a1 + 6696, &position);
      v8 = FIELD_F32(a1, 112);
      v9 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v8;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v9, "SE_OBJ_CMN_SPLASH_LAVA", &out.x, 0);
      for ( i = *(_DWORD **)(a1 + 6456); i; i = (_DWORD *)i[1] )
      {
        if ( *i )
        {
          v12 = *(int (__fastcall ****)(_DWORD, int *))(*i + 2196);
          if ( ((unsigned int)&dword_60C8619C & ~(1611685144 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8619C) )
          {
            dword_60C86198 = (int)&off_60BC00D4;
            _cxa_guard_release(&dword_60C8619C);
          }
          if ( v12 && (**v12)(v12, &dword_60C86198) == 1 )
            sub_6062CEB0(v12);
        }
      }
    }
  }
  if ( sub_60235E50(a1 + 6696) == 1 )
    EffectData_update((EffectData *)(a1 + 6696), (Vec3 *)(a1 + 6760), 0, 0);
  FIELD_U32(a1, 156) += dword_60C86258;
  FIELD_U32(a1, 164) += dword_60C8625C;
  result = (StateMethodExecuter *)dword_60CC6484;
  if ( FIELD_F32(a1, 112) < (float)(FIELD_F32(dword_60CC6484, 132) + -192.0) )
  {
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 160) = 0;
    FIELD_U32(a1, 164) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C861B0);
  }
  return result;
}

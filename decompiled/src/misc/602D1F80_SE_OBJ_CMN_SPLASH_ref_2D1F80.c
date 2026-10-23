/* SE_OBJ_CMN_SPLASH_ref_2D1F80
 * address: 0x602D1F80   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_CMN_SPLASH_ref_2D1F80(int a1)
{
  int result; // r0
  int (__fastcall ***v3)(_DWORD, int *); // r5
  char v4; // r12
  int v5; // r0
  float v6; // r1
  int v7; // r5
  _DWORD v8[2]; // [sp+4h] [bp-3Ch] BYREF
  Vec3 v9; // [sp+Ch] [bp-34h] BYREF
  int v10; // [sp+18h] [bp-28h] BYREF
  float v11; // [sp+1Ch] [bp-24h] BYREF
  Vec2 out; // [sp+20h] [bp-20h] BYREF
  Vec3 position; // [sp+28h] [bp-18h] BYREF

  result = FIELD_U8(a1, 116);
  if ( !result )
  {
    v3 = (int (__fastcall ***)(_DWORD, int *))ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 80));
    if ( ((unsigned int)&dword_60C7B364 & ~(1613569992 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v5 = 0;
    if ( v3 )
    {
      v5 = (**v3)(v3, &StageActor_RTTI);
      if ( v5 )
        v5 = (int)v3;
    }
    v11 = 0.0;
    ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
      &v10,
      &v11,
      a1 + 8,
      FIELD_U8(v5, 86));
    result = v10;
    if ( v10 )
    {
      FIELD_U8(a1, 116) = 1;
      v9.x = FIELD_F32(a1, 8);
      v9.y = v11;
      v9.z = 6500.0;
      EffectData_create(860, &v9, 0, 0);
      v8[0] = LODWORD(v9.x);
      v8[1] = LODWORD(v9.y);
      TileMgr_splashRelated(TileMgr_instance, v8, 23);
      v6 = FIELD_F32(a1, 12);
      v7 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 8);
      position.y = v6;
      mapPositionToScreen(&out, &position);
      return BasicSoundActor1_playSound(v7, "SE_OBJ_CMN_SPLASH", (int)&out, 0);
    }
  }
  return result;
}

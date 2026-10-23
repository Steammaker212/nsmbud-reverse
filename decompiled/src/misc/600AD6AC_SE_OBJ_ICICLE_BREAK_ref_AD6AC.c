/* SE_OBJ_ICICLE_BREAK_ref_AD6AC
 * address: 0x600AD6AC   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_ICICLE_BREAK_ref_AD6AC(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  float v5; // r1
  int v6; // r5
  unsigned int v8; // r1
  int v9; // r5
  char v10; // r12
  Vec3 v11; // [sp+4h] [bp-2Ch] BYREF
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C82EAC & ~(1611323080 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
  {
    dword_60C82EA8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82EAC);
  }
  v4 = 0;
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C82EA8) == 1 )
  {
    if ( FIELD_U8(v3, 6108) )
    {
      sub_600AEAC4(v3);
      v5 = FIELD_F32(v3, 112);
      v11.x = FIELD_F32(v3, 108);
      v11.y = v5;
      v11.z = 4500.0;
      EffectData_create(1055, &v11, 0, 0);
      v6 = Global_BasicSoundActor2;
      position.x = v11.x;
      position.y = v11.y;
      mapPositionToScreen(&out, &position);
      BasicSoundActor2_play(v6, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
    }
    else
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 104))(v3);
      v8 = FIELD_U32(v3, 7088);
      if ( v8 )
      {
        v9 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v8);
        if ( ((unsigned int)&dword_60C7B364 & ~(1611323416 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        if ( v9 && (**(int (__fastcall ***)(int, int *))v9)(v9, &StageActor_RTTI) == 1 )
          FIELD_U8(v9, 19) = 1;
      }
    }
    v4 = 1;
    FIELD_U8(v3, 19) = 1;
  }
  return v4;
}

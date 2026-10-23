/* SE_OBJ_WINDOW_FALL_ref
 * address: 0x60066438   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_WINDOW_FALL_ref(int a1)
{
  char v1; // r12
  int result; // r0
  _DWORD *v4; // r7
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r5
  float v8; // r0
  int v9; // r0
  bool v10; // cc
  int v11; // r5
  Vec2 out; // [sp+8h] [bp-28h] BYREF
  Vec3 position; // [sp+10h] [bp-20h] BYREF

  v4 = (_DWORD *)(a1 + 6108);
  result = FIELD_U32(a1, 6108);
  if ( result == 2 )
  {
    v9 = FIELD_U32(a1, 6104);
    v10 = v9 <= 1;
    result = v9 - 1;
    FIELD_U32(a1, 6104) = result;
    if ( v10 )
    {
      v11 = FIELD_U32(EnemyCounterMaybe_instance, 24);
      if ( ((unsigned int)&dword_60C81200 & ~(1611031900 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
      {
        dword_60C811FC = (int)&off_60BC210C;
        _cxa_guard_release(&dword_60C81200);
      }
      if ( v11 && (**(int (__fastcall ***)(int, int *))v11)(v11, &dword_60C811FC) == 1 )
        FIELD_U8(v11, 6218) = 1;
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C8121C);
    }
  }
  else if ( result == 1 )
  {
    j_ModelWrapper_updateAnims(FIELD_U32(a1, 6100));
    v5 = *(_DWORD *)(FIELD_U32(a1, 6100) + 12);
    v6 = *(_DWORD *)(FIELD_U32(a1, 6100) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6100) + 8) > v6 )
      v5 += 4 * v6;
    result = *(unsigned __int8 *)(*(_DWORD *)v5 + 28);
    if ( (result & 0x20) != 0 )
    {
      v7 = Global_BasicSoundActor1;
      v8 = FIELD_F32(a1, 6116);
      position.x = FIELD_F32(a1, 6112);
      position.y = v8;
      mapPositionToScreen(&out, &position);
      BasicSoundActor1_playSound(v7, "SE_OBJ_WINDOW_FALL", (int)&out, 0);
      AreaRumbleMgr_rumble(AreaRumbleMgr_instance, 6, 3, 0, 0);
      *v4 = 2;
      FIELD_U32(a1, 6104) = 60;
      return 6104;
    }
  }
  return result;
}

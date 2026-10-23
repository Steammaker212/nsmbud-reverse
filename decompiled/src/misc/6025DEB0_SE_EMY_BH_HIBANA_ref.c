/* SE_EMY_BH_HIBANA_ref
 * address: 0x6025DEB0   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BH_HIBANA_ref(int a1)
{
  int result; // r0
  _DWORD *v3; // r7
  int v4; // r5
  float v5; // r1
  int v6; // r9
  int v7; // r6
  StateBase *CurrentState; // r0
  int v9; // r5
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  result = FIELD_U16(a1, 6364) & 0x2C;
  if ( result == 4 )
  {
    v3 = (_DWORD *)(a1 + 6456);
    result = FIELD_U32(a1, 6456);
    if ( result >= 1 )
    {
      v4 = result - 1;
      *v3 = result - 1;
      result = sub_60273514(a1);
      if ( result == 1 )
      {
        v5 = FIELD_F32(a1, 112);
        v6 = FIELD_U32(a1, 8);
        v7 = Global_BasicSoundActor1;
        position.x = FIELD_F32(a1, 108);
        position.y = v5;
        mapPositionToScreen(&out, &position);
        result = j_SE_OBJ_FIRE_CANNON_BLAZE_ref_2_helper(v7, "SE_EMY_BH_HIBANA", v6, &out, 0);
        if ( !v4 )
        {
          *v3 = -1;
          CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
          v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
          result = (*((int (**)(void))stru_60C8E1CC._.vtable + 2))();
          if ( v9 != result )
            return (*(int (__fastcall **)(int, State *))(*(_DWORD *)a1 + 192))(a1, &stru_60C8E1CC);
        }
      }
    }
  }
  return result;
}

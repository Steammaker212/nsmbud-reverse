/* SE_EMY_DOWN_ref_2C51E8
 * address: 0x602C51E8   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2C51E8(int a1, float *a2)
{
  StateBase *CurrentState; // r0
  int v5; // r6
  float v6; // r1
  int v7; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 != (*(int (**)(void))(dword_60C91608 + 8))() && FIELD_U8(a1, 6327) )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v6;
    mapPositionToScreen(&out, &position);
    sub_60813810(v7, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
    FIELD_U32(a1, 6336) = *a2 >= FIELD_F32(a1, 108);
    FIELD_U8(a1, 6328) = 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C915E4);
  }
  return 1;
}

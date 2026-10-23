/* SE_EMY_DOWN_ref_2C4E8C
 * address: 0x602C4E8C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_2C4E8C(int a1, int a2, float *a3)
{
  int v3; // r4
  StateBase *CurrentState; // r0
  int v6; // r6
  float v7; // r1
  int v8; // r6
  Vec2 out; // [sp+8h] [bp-30h] BYREF
  Vec3 position; // [sp+10h] [bp-28h] BYREF

  v3 = FIELD_U32(a2, 64);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
  v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v6 != (*(int (**)(void))(dword_60C91608 + 8))() && FIELD_U8(v3, 6327) )
  {
    v7 = FIELD_F32(v3, 112);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(v3, 108);
    position.y = v7;
    mapPositionToScreen(&out, &position);
    sub_60813810(v8, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
    FIELD_U32(v3, 6336) = *a3 >= FIELD_F32(v3, 108);
    FIELD_U8(v3, 6328) = 1;
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60C915E4);
  }
  return 1;
}

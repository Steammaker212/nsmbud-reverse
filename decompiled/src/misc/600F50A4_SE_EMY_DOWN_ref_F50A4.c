/* SE_EMY_DOWN_ref_F50A4
 * address: 0x600F50A4   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_F50A4(int a1)
{
  float v2; // r1
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  float v7; // r1
  int v8; // r5
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  if ( !FIELD_U8(a1, 6220)
    && ((CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
         v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
         v4 == (*(int (**)(void))(dword_60C85AD8 + 8))())
     || (v5 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
         v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5),
         v6 == (*(int (**)(void))(dword_60C85AF8 + 8))())) )
  {
    FIELD_U32(a1, 120) = dword_60AF6084[FIELD_U32(a1, 6308)];
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C85B18);
    v7 = FIELD_F32(a1, 112);
    v8 = Global_BasicSoundActor1;
    position.x = FIELD_F32(a1, 108);
    position.y = v7;
    mapPositionToScreen(&out, &position);
    sub_60813810(v8, (int)"SE_EMY_DOWN", (int)&out, 1, 0);
  }
  else
  {
    v2 = FIELD_F32(a1, 112);
    position.x = FIELD_F32(a1, 108);
    position.y = v2;
    SE_SYS_ref_2(SoundSystem_instance, &position, 3);
  }
  return 1;
}

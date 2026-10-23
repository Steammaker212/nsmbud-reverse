/* SE_EMY_DOWN_ref_3B565C
 * address: 0x603B565C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_DOWN_ref_3B565C(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r9
  StateBase *CurrentState; // r0
  int v9; // r5
  int v11; // r5
  float v12; // r0
  unsigned int v13; // r5
  _BOOL4 v14; // r0
  char v15; // r3
  Vec2 v16; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v6 = 0;
  v7 = FIELD_U32(a3, 64);
  if ( v7 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v9 == (*(int (**)(void))(dword_60C98060 + 8))() )
    {
      if ( FIELD_U32(a3, 140) == 7 )
        return (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a1 + 292))(a1, a2, a3);
      v11 = Global_BasicSoundActor1;
      v12 = FIELD_F32(a1, 112);
      position.x = FIELD_F32(a1, 108);
      position.y = v12;
      mapPositionToScreen(&v16, &position);
      BasicSoundActor1_playSound(v11, "SE_EMY_DOWN", (int)&v16, 0);
      sub_602A38A4(a1, (float *)(a1 + 108));
      v13 = FIELD_U8(v7, 84);
      v14 = sub_6000ADDC(a1, v7);
      v15 = -1;
      if ( v13 < 4 )
        v15 = 1;
      sub_602A6024(a1, v14, v13, v15);
      return 1;
    }
  }
  return v6;
}

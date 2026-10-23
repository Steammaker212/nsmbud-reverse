/* SE_EMY_FISHBONE_BREAK_ref_2
 * address: 0x602B14EC   size: 712   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_FISHBONE_BREAK_ref_2(int a1, float a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r7
  StateBase *CurrentState; // r0
  int v7; // r7
  int v8; // r0
  bool v9; // zf
  float v10; // r1
  int v11; // r5
  bool v13; // zf
  StateBase *v14; // r0
  int v15; // r5
  int v16; // r0
  int v17; // r2
  Vec2 v18; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v3 = a1 + 648;
  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  v4 = FIELD_U32(a1, 2872);
  if ( (v4 & 1) != 0
    || (v4 & 0x10400) == 0x400
    || (v4 & 0x440000) != 0 && (v4 & 0x10000000) == 0
    || (v5 = 1, (v4 & 0x880000) != 0) && (v4 & 0x20000000) == 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v7 == (*(int (**)(void))(dword_60C90C14 + 8))() )
      goto LABEL_13;
    v8 = FIELD_U32(a1, 2872);
    if ( (v8 & 0x10401) == 0x401 )
      goto LABEL_13;
    v9 = (v8 & 0x20000000) == 0;
    if ( (v8 & 0x20000000) == 0 )
      v9 = (v8 & 0x440000) != 0 && (v8 & 0x10000000) == 0 && (v8 & 0x880000) != 0;
    if ( v9
      || (v8 & 1) != 0 && FIELD_U16(a1, 5952) != 0x1F
      || (v8 & 0x10400) == 0x400 && FIELD_U16(a1, 5944) != 0x1F )
    {
      goto LABEL_13;
    }
    v13 = (v8 & 0x10000000) == 0;
    if ( (v8 & 0x10000000) == 0 )
      v13 = (v8 & 0x440000) != 0;
    if ( v13 && FIELD_U16(a1, 5928) != 0x1F
      || (v8 & 0x880000) != 0 && (v8 & 0x20000000) == 0 && FIELD_U16(a1, 5936) != 0x1F )
    {
LABEL_13:
      v10 = FIELD_F32(a1, 112);
      v11 = Global_BasicSoundActor1;
      position.x = FIELD_F32(a1, 108);
      position.y = v10;
      mapPositionToScreen(&v18, &position);
      v5 = 0;
      BasicSoundActor1_playSound(v11, "SE_EMY_FISHBONE_BREAK", (int)&v18, 0);
      sub_602A6024(a1, FIELD_U32(a1, 80), -1, -1);
    }
    else if ( FIELD_U16(a1, 5952) == 0x1F
           || FIELD_U16(a1, 5944) == 0x1F
           || (v5 = 1, *(_WORD *)(v3 + 8 * FIELD_U32(a1, 80) + 5280) == 0x1F) )
    {
      v14 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v15 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v14, 0x0) + 2))(v14);
      v5 = 1;
      if ( v15 == (*(int (**)(void))(dword_60C90BD4 + 8))() )
      {
        v16 = FIELD_U32(a1, 80);
        v17 = -1073741824;
        if ( !v16 )
          v17 = 0x40000000;
        if ( FIELD_U32(a1, 160) == v17 )
          FIELD_U32(a1, 80) = v16 ^ 1;
      }
    }
  }
  return v5;
}

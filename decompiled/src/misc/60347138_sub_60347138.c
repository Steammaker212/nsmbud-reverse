/* sub_60347138
 * address: 0x60347138   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60347138(int a1, int a2, float *a3)
{
  int v4; // r4
  int v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r7
  _BOOL4 v8; // r0
  int v9; // s0
  int v10; // r10
  int v11; // r6

  v4 = FIELD_U32(a2, 64);
  v5 = 0;
  if ( sub_6034891C() == 1 )
  {
    sub_602A3EFC(v4 + 6380, 24, 0.0625);
    CurrentState = StateMgr__getCurrentState((StateMgr *)(v4 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    v5 = 1;
    if ( v7 != (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
    {
      v5 = 1;
      v8 = *a3 >= FIELD_F32(v4, 108);
      FIELD_U32(v4, 80) = v8;
      v9 = byte_60AFE3F4[v8];
      FIELD_U32(v4, 160) = Enemy_CommonRotations[v8];
      FIELD_F32(v4, 120) = (float)v9 * 0.75;
      FIELD_U32(v4, 124) = 1075838976;
      FIELD_U32(v4, 128) = 0;
      if ( FIELD_U8(v4, 6054) )
        FIELD_U32(v4, 124) = 1067450368;
      FIELD_U32(v4, 6364) = 511;
      FIELD_U32(v4, 6368) = 1;
      v10 = **(_DWORD **)(FIELD_U32(v4, 6356) + 12);
      SkeletalAnim_play(v10, FIELD_U32(v4, 6352), (int)&dword_60C94A70);
      AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), dword_60C94A80);
      v11 = **(_DWORD **)(FIELD_U32(v4, 6356) + 20);
      TexAnim_play(v11, FIELD_U32(v4, 6352), &dword_60C94A78);
      AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), dword_60C94A80);
      FIELD_U8(v4, 6372) = 0;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 192))(v4, &dword_60C94988);
    }
  }
  return v5;
}

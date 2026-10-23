/* sub_602C4AB0
 * address: 0x602C4AB0   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C4AB0(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r5
  int v4; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U8(a1, 6325) = 1;
  FIELD_U8(a1, 6334) = 2;
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))() )
  {
    v4 = FIELD_U32(a1, 6304);
    v6[0] = &sead__SafeStringBase__vtable;
    v6[1] = "dead";
    sub_60421AE4(v4, v6, 1);
  }
  FIELD_U8(a1, 6324) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_F32(a1, 120) = flt_60AF1EA0[FIELD_U32(a1, 6336)];
  FIELD_U32(a1, 124) = 1056964608;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1077936128;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1115684864;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 164) = 0;
  FIELD_U32(a1, 6308) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6312) = FIELD_U32(a1, 112);
  FIELD_U32(a1, 6316) = FIELD_U32(a1, 116);
  FIELD_U8(a1, 6333) = 1;
  return 6333;
}

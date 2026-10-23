/* sub_603CC07C
 * address: 0x603CC07C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603CC07C(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r5
  float result; // s0
  float v7; // s16
  int v8; // [sp+4h] [bp-1Ch] BYREF

  if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 == (*(int (**)(void))(dword_60C9890C + 8))()
      || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
          v5 == (*(int (**)(void))(dword_60C9896C + 8))()) )
    {
      v7 = FIELD_F32(a1, 11888);
      ((void (__fastcall *)(int *, int, int, _DWORD))checkLiquidCollisions)(
        &v8,
        a1 + 11888,
        a1 + 108,
        FIELD_U8(a1, 86));
      if ( v8 == 1 )
      {
        result = FIELD_F32(a1, 112) + (float)(FIELD_F32(a1, 11888) - v7);
        FIELD_F32(a1, 112) = result;
      }
    }
  }
  return result;
}

/* sub_60617C5C
 * address: 0x60617C5C   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60617C5C(int a1)
{
  StateMgr *v2; // r5
  StateBase *CurrentState; // r0
  int v4; // r6
  StateBase *v5; // r0
  int v6; // r5
  char v7; // r12
  int (__fastcall ***v8)(_DWORD, int *); // r5
  unsigned int v9; // r0
  unsigned int v11; // [sp+4h] [bp-24h] BYREF
  float v12[8]; // [sp+8h] [bp-20h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v2);
  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v4 != (*(int (**)(void))(dword_60CBACC0 + 8))() )
  {
    v5 = StateMgr__getCurrentState(v2);
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v5, 0x0) + 2))(v5);
    if ( v6 != (*(int (**)(void))(dword_60CBACE0 + 8))() )
    {
      v11 = 0;
      v8 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 56);
      if ( ((unsigned int)&dword_60CB3358 & ~(1617001728 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60CB3358) )
      {
        dword_60CB3354 = (int)&off_60C1028C;
        _cxa_guard_release(&dword_60CB3358);
      }
      if ( v8 && (**v8)(v8, &dword_60CB3354) == 1 )
        sub_60616DF8((int)v8, v12, &v11, FIELD_U32(a1, 7180));
      v9 = v11;
      FIELD_F32(a1, 108) = v12[0];
      FIELD_F32(a1, 112) = v12[1];
      FIELD_U32(a1, 164) = v9 + 0x40000000;
    }
  }
  if ( FIELD_U8(a1, 7097) )
  {
    FIELD_U32(a1, 6356) = FIELD_U32(a1, 164);
    ShapedCollider_execute((ColliderBase *)(a1 + 6112));
  }
  sub_606C7B7C(a1, 0.0);
  sub_606C7C4C(a1);
  return 1;
}

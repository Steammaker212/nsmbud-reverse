/* sub_602D1074
 * address: 0x602D1074   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D1074(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  StateBase *CurrentState; // r0
  int v5; // r5

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)dword_60C91A60 & ~(1613566092 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C91A60) )
  {
    dword_60C91A5C = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C91A60);
  }
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C91A5C) == 1 && FIELD_S32(v3, 6588) <= 0 )
    {
      FIELD_U32(v3, 6588) = 5;
      FIELD_U32(v3, 6400) = 1;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
      v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v5 == (*(int (**)(void))(dword_60C919F8 + 8))() )
      {
        FIELD_U32(v3, 80) ^= 1u;
        FIELD_U16(v3, 6572) = 75;
      }
    }
  }
  return 1;
}

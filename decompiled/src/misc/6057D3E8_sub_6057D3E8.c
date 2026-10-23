/* sub_6057D3E8
 * address: 0x6057D3E8   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6057D3E8(int a1, int a2)
{
  char v2; // r12
  int v3; // r4
  int v4; // r5
  StateBase *CurrentState; // r0
  int v6; // r6

  v3 = FIELD_U32(a2, 144);
  if ( ((unsigned int)dword_60CAEE80 & ~(1616368640 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAEE80) )
  {
    dword_60CAEE7C = (int)&off_60BD48EC;
    _cxa_guard_release(dword_60CAEE80);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60CAEE7C) == 1 )
    {
      v4 = 1;
      if ( !sub_6057D26C(v3) )
      {
        CurrentState = StateMgr__getCurrentState((StateMgr *)(v3 + 6084));
        v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
        if ( v6 != (*(int (**)(void))(dword_60CAED48 + 8))() )
        {
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 192))(v3, &dword_60CAED48);
          v4 = 1;
          FIELD_U32(v3, 124) = 0;
          FIELD_U32(v3, 164) = 0;
          FIELD_U8(v3, 7548) = 1;
          FIELD_U8(v3, 7321) = 1;
          FIELD_U32(v3, 6456) = 0;
        }
      }
    }
  }
  return v4;
}

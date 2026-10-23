/* sub_6073EDF4
 * address: 0x6073EDF4   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6073EDF4(int a1, int a2)
{
  char v2; // r12
  int v5; // r7
  int v6; // r6
  StateBase *CurrentState; // r0
  int v8; // r6

  if ( FIELD_U32(a2, 136) == 9 )
  {
    v5 = FIELD_U32(a1, 64);
    v6 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60CBE26C & ~(1618210340 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CBE26C) )
    {
      dword_60CBE268 = (int)&off_60BDBC48;
      _cxa_guard_release(&dword_60CBE26C);
    }
    if ( v6 && (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60CBE268) == 1 )
    {
      CurrentState = StateMgr__getCurrentState((StateMgr *)(v6 + 6292));
      v8 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v8 == (*(int (**)(void))(dword_60CBE130 + 8))() )
        FIELD_F32(v5, 108) = FIELD_F32(v5, 108) + (float)(*(float *)(a1 + 4 * FIELD_U32(a2, 136) + 176) * 0.2);
    }
  }
}

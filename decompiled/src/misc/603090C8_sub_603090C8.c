/* sub_603090C8
 * address: 0x603090C8   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603090C8(int a1, int a2, int a3)
{
  char v3; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r4

  v5 = *(int (__fastcall ****)(_DWORD, int *))(a3 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613795556 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v5 )
  {
    if ( (**v5)(v5, &StageActor_RTTI) == 1 )
      sub_60309174(a1, v5, 0);
  }
}

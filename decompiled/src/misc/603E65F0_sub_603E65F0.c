/* sub_603E65F0
 * address: 0x603E65F0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E65F0(int a1, int a2)
{
  char v2; // r12
  unsigned int v4; // r0

  if ( ((unsigned int)&dword_60C7B364 & ~(1614702088 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( a2
    && (**(int (__fastcall ***)(int, int *))a2)(a2, &StageActor_RTTI) == 1
    && (v4 = FIELD_U8(a2, 533), v4 <= 4)
    && ((1 << v4) & 0x16) != 0 )
  {
    return 1;
  }
  else
  {
    return FIELD_U32(dword_60C96478, 104) == a2;
  }
}

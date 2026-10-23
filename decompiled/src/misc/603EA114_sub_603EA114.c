/* sub_603EA114
 * address: 0x603EA114   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603EA114(int a1, int a2)
{
  char v2; // r12
  int v5; // r0
  bool v6; // zf

  if ( ((unsigned int)&dword_60C7B364 & ~(1614717232 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( !a2 )
    return FIELD_U32(a1, 28) == a2;
  v5 = (**(int (__fastcall ***)(int, int *))a2)(a2, &StageActor_RTTI);
  v6 = v5 == 1;
  if ( v5 == 1 )
    v6 = FIELD_U8(a2, 533) == 1;
  return v6 || FIELD_U32(a1, 28) == a2;
}

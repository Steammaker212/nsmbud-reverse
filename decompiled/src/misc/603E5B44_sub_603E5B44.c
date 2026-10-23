/* sub_603E5B44
 * address: 0x603E5B44   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603E5B44(int a1, int a2)
{
  char v2; // r12

  if ( ((unsigned int)&dword_60C7B364 & ~(1614699356 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  return a2
      && (**(int (__fastcall ***)(int, int *))a2)(a2, &StageActor_RTTI) == 1
      && (unsigned __int8)(FIELD_U8(a2, 533) - 1) < 2u
      || FIELD_U32(dword_60C96478, 104) == a2;
}

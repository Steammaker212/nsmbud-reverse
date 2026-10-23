/* sub_606CF090
 * address: 0x606CF090   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606CF090(_DWORD *a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v4; // r12
  int v5; // r0
  int result; // r0

  sub_606CAA68((int)a1, (int)a2);
  if ( ((unsigned int)&dword_60C7B364 & ~(1617752240 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v5 = (**a2)(a2, &StageActor_RTTI);
  if ( v5 )
    v5 = (int)a2;
  a1[1736] = FIELD_U32(v5, 108);
  a1[1737] = FIELD_U32(v5, 112);
  result = a1[41] + a1[1740];
  a1[41] = result;
  return result;
}

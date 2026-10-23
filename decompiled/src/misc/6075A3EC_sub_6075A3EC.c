/* sub_6075A3EC
 * address: 0x6075A3EC   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6075A3EC(int a1, int a2)
{
  char v4; // r12
  int v5; // r6
  int v6; // r5

  sub_6078CB08();
  v5 = **(_DWORD **)(a1 + 548);
  if ( ((unsigned int)&dword_60C80400 & ~(1618322452 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C803FC) == 1 )
    FIELD_U32(v5, 312) = a2;
  v6 = **(_DWORD **)(a1 + 552);
  if ( ((unsigned int)&dword_60C80400 & ~(1618322576 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v6 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C803FC) == 1 )
      FIELD_U32(v6, 312) = a2;
  }
}

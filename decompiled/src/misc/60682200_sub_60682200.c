/* sub_60682200
 * address: 0x60682200   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60682200(int a1)
{
  char v1; // r12
  int v3; // r4

  v3 = 1;
  if ( (float)(FIELD_F32(a1, 112) - FIELD_F32(a1, 588)) < 0.0 )
    return v3;
  if ( ((unsigned int)&dword_60C80068 & ~(1617437236 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80068) )
  {
    dword_60C80064 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C80068);
  }
  if ( (**(int (__fastcall ***)(int, int *))a1)(a1, &dword_60C80064) != 1 )
    return 0;
  if ( !FIELD_U32(a1, 7556) )
    return 0;
  return v3;
}

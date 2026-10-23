/* sub_601209A4
 * address: 0x601209A4   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601209A4(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r4

  v3 = **(_DWORD **)(a1 + 7656);
  if ( ((unsigned int)&dword_60C80400 & ~(1611794888 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C803FC) == 1 )
  {
    FIELD_U32(v3, 312) = 6;
    FIELD_U32(v3, 36) = 8;
  }
  v4 = **(_DWORD **)(a1 + 6320);
  if ( ((unsigned int)&dword_60C80400 & ~(1611795028 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v4 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C803FC) == 1 )
    {
      FIELD_U32(v4, 312) = 6;
      FIELD_U32(v4, 36) = 8;
    }
  }
}

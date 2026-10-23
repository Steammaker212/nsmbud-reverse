/* sub_600639DC
 * address: 0x600639DC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600639DC(int a1, int a2)
{
  char v2; // r12
  int v5; // r6

  if ( !FIELD_U32(a2, 136) )
  {
    v5 = FIELD_U32(a1, 64);
    if ( ((unsigned int)&dword_60C810FC & ~(1611020808 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C810FC) )
    {
      dword_60C810F8 = (int)&off_60BC66C8;
      _cxa_guard_release(&dword_60C810FC);
    }
    if ( v5 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C810F8) == 1 )
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 200))(v5, a1, a2);
    }
  }
}

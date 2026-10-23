/* sub_606E6A50
 * address: 0x606E6A50   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E6A50(int a1, int a2)
{
  char v2; // r12
  int v3; // r4

  v3 = FIELD_U32(a2, 64);
  if ( ((unsigned int)&dword_60C91704 & ~(1617848936 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C91704) )
  {
    dword_60C91700 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C91704);
  }
  if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C91700) == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 636))(v3);
  else
    return 0;
}

/* sub_60980818
 * address: 0x60980818   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60980818(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD); // r6
  char v6; // r12
  int *v7; // r0

  v5 = *(int (__fastcall ****)(_DWORD))(a1 + 36);
  if ( ((unsigned int)&dword_60C9DA64 & ~(1620576312 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA64) )
  {
    if ( ((unsigned int)&dword_60C9DA14 & ~(1620576352 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C9DA14) )
    {
      dword_60C9DA10 = 0;
      _cxa_guard_release(&dword_60C9DA14);
    }
    dword_60C9DA60 = (int)&dword_60C9DA10;
    _cxa_guard_release(&dword_60C9DA64);
  }
  if ( !v5 )
    return s__s_bflan_ref(a1, a2);
  v7 = (int *)(**v5)(v5);
  if ( !v7 )
    return s__s_bflan_ref(a1, a2);
  while ( v7 != &dword_60C9DA60 )
  {
    v7 = (int *)*v7;
    if ( !v7 )
      return s__s_bflan_ref(a1, a2);
  }
  return sub_60982F50(v5, FIELD_U32(a1, 28), a2, 0);
}

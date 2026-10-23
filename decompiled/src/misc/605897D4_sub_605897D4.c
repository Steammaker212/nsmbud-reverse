/* sub_605897D4
 * address: 0x605897D4   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_605897D4(int a1, int a2)
{
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  char v5; // r12

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 32))(a2);
  if ( ((unsigned int)&dword_60C88A58 & ~(1616418828 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C88A58) )
  {
    dword_60C88A54 = (int)&off_60BD48EC;
    _cxa_guard_release(&dword_60C88A58);
  }
  if ( v3 )
  {
    if ( (**v3)(v3, &dword_60C88A54) == 1 )
      sub_60589E88(v3, FIELD_U32(v4, 8), a2);
  }
}

/* sub_606B6EAC
 * address: 0x606B6EAC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606B6EAC(int a1, int a2)
{
  char v2; // r12
  int v4; // r5
  int v5; // r0

  v4 = 0;
  if ( FIELD_U32(a2, 1320) != 3 )
    return v4;
  if ( ((unsigned int)&dword_60C7B374 & ~(1617653460 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  v4 = 1;
  if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) == 1 && (v5 = sub_6079D894(a2)) != 0 )
    return FIELD_U32(v5, 1320) == 3;
  else
    return v4;
}

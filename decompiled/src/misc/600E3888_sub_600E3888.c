/* sub_600E3888
 * address: 0x600E3888   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600E3888(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r4

  if ( FIELD_U32(a2, 140) == 23 )
  {
    v3 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
    if ( ((unsigned int)dword_60C84E84 & ~(1611544748 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C84E84) )
    {
      dword_60C84E80 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60C84E84);
    }
    if ( v3 )
    {
      if ( (**v3)(v3, &dword_60C84E80) == 1 )
        sub_605D476C(v3);
    }
  }
}

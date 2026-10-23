/* sub_601AFAA0
 * address: 0x601AFAA0   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601AFAA0(_DWORD *a1)
{
  if ( (int)a1[91] >= 0 )
  {
    sub_601E4F60(dword_60C8B13C);
    a1[91] = -1;
  }
  (*(void (__fastcall **)(_DWORD *))(*a1 + 152))(a1);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 124))(a1);
  return sub_601E4C88(dword_60C8B13C, 144, a1 + 20, 1);
}

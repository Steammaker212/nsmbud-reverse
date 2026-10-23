/* sub_60478BFC
 * address: 0x60478BFC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478BFC(_DWORD *a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = a1[1];
  v3 = v2 == 3;
  if ( v2 != 3 )
    v3 = v2 == 1;
  if ( v3 )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 2);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 80))(a1);
  }
  return 1;
}

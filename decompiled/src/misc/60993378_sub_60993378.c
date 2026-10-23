/* sub_60993378
 * address: 0x60993378   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60993378(unsigned __int8 *a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = a1[28];
  v3 = v2 == 3;
  if ( v2 != 3 )
    v3 = v2 == 1;
  if ( v3 )
  {
    (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 88))(a1);
    (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 116))(a1, 2);
  }
  return 1;
}

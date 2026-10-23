/* sub_6099236C
 * address: 0x6099236C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099236C(unsigned __int8 *a1)
{
  int v2; // r0

  v2 = a1[28];
  if ( v2 == 5 )
  {
    (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 96))(a1);
    (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 116))(a1, 6);
  }
  else if ( v2 == 4 )
  {
    return 0;
  }
  return 1;
}

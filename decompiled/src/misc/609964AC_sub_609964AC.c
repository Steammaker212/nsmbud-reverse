/* sub_609964AC
 * address: 0x609964AC   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609964AC(unsigned __int8 *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0

  v2 = a1[84];
  v3 = v2 == 5;
  if ( v2 != 5 )
    v3 = v2 == 3;
  if ( v3 )
  {
    v4 = a1[28];
    if ( v4 == 5 )
    {
      (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 96))(a1);
      (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 116))(a1, 6);
    }
    else if ( v4 == 4 )
    {
      return 0;
    }
  }
  return 1;
}

/* sub_609958EC
 * address: 0x609958EC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609958EC(unsigned __int8 *a1)
{
  unsigned __int8 v2; // r0
  bool v3; // zf
  int result; // r0
  int v5; // r1

  v2 = a1[30];
  v3 = (v2 & 0x40) == 0;
  if ( (v2 & 0x40) != 0 )
    v3 = a1[76] == 0;
  if ( v3 )
    return sub_609917B8();
  v5 = a1[28];
  result = 0;
  if ( (unsigned int)(v5 - 1) >= 5 )
  {
    if ( v5 != 6 && !a1[28] )
    {
      (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 96))(a1);
      (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 116))(a1, 6);
    }
    return 1;
  }
  return result;
}

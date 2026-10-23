/* sub_608CB064
 * address: 0x608CB064   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CB064(unsigned __int8 *a1)
{
  int result; // r0
  unsigned __int8 *v3; // r7
  void (__fastcall *v4)(unsigned __int8 *, int, _DWORD); // r3
  int *v5; // r2
  int v6; // r3
  unsigned __int8 *v7; // r0

  result = *a1;
  if ( result )
  {
    while ( 1 )
    {
      v3 = *((unsigned __int8 **)a1 + 2);
      if ( v3 == a1 + 4 )
        break;
      sub_608C93B0((int)(v3 - 560));
      v4 = *((void (__fastcall **)(unsigned __int8 *, int, _DWORD))v3 - 39);
      if ( v4 )
        v4(v3 - 560, 1, *((_DWORD *)v3 - 38));
      sub_608C932C((int)(v3 - 560));
    }
    while ( 1 )
    {
      v7 = *((unsigned __int8 **)a1 + 4);
      if ( v7 == a1 + 12 )
        break;
      v5 = *((int **)v7 + 1);
      v6 = *v5;
      *(_DWORD *)(*(_DWORD *)v7 + 4) = v5;
      *v5 = *(_DWORD *)v7;
      FIELD_U32(v6, 4) = v7;
      *(_DWORD *)v7 = v6;
      sub_608C91B8((int)(v7 - 560));
    }
    *a1 = 0;
    return 0;
  }
  return result;
}

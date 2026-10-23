/* sub_607A9054
 * address: 0x607A9054   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A9054(_DWORD **a1)
{
  int *v2; // r5
  int v3; // r1
  int result; // r0

  v2 = (int *)(a1 + 2842);
  v3 = sub_6078F110(a1[2842]);
  result = 0;
  if ( v3 == 1 )
  {
    ((void (__fastcall *)(_DWORD **, int, _DWORD))(*a1)[36])(a1, 7, 0);
    sub_6078F2B0(*v2);
    return 1;
  }
  return result;
}

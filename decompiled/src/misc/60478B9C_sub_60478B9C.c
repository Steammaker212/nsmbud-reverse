/* sub_60478B9C
 * address: 0x60478B9C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478B9C(_DWORD *a1)
{
  int v1; // r5
  int v3; // r0
  bool v4; // zf

  v3 = a1[1];
  if ( v3 == 6 )
    return 0;
  v4 = v3 == 2;
  if ( v3 != 2 )
  {
    v1 = 1;
    v4 = v3 == 0;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 1);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
    return 1;
  }
  return v1;
}

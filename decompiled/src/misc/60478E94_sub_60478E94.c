/* sub_60478E94
 * address: 0x60478E94   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60478E94(_DWORD *a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r4

  v2 = a1[1];
  if ( v2 == 6 )
    return 0;
  v3 = v2 == 3;
  v4 = 1;
  if ( v2 != 3 )
    v3 = v2 == 1;
  if ( v3 )
  {
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 2);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 80))(a1);
    return 1;
  }
  return v4;
}

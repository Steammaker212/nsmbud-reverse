/* sub_60853BA0
 * address: 0x60853BA0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853BA0(_DWORD *a1)
{
  int v2; // r4

  v2 = 0;
  switch ( a1[1] )
  {
    case 0:
    case 2:
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
      return 0;
    case 1:
    case 6:
      return v2;
    case 3:
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 4);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 84))(a1);
      return 1;
    default:
      return 1;
  }
}

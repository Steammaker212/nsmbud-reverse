/* sub_60853AA8
 * address: 0x60853AA8   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60853AA8(_DWORD *a1)
{
  int v2; // r4
  int result; // r0

  v2 = 1;
  switch ( a1[1] )
  {
    case 0:
    case 2:
      (*(void (__fastcall **)(_DWORD *, int))(*a1 + 108))(a1, 1);
      (*(void (__fastcall **)(_DWORD *))(*a1 + 76))(a1);
      result = 1;
      break;
    case 4:
    case 6:
      v2 = 0;
      goto LABEL_4;
    default:
LABEL_4:
      result = v2;
      break;
  }
  return result;
}

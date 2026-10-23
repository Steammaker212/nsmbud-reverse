/* sub_60994DA4
 * address: 0x60994DA4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60994DA4(_BYTE *a1)
{
  int v2; // r4
  int result; // r0

  v2 = 0;
  switch ( a1[28] )
  {
    case 0:
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 92))(a1);
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 116))(a1, 4);
      result = 0;
      break;
    case 1:
    case 2:
    case 3:
    case 6:
      goto LABEL_3;
    default:
      v2 = 1;
LABEL_3:
      result = v2;
      break;
  }
  return result;
}

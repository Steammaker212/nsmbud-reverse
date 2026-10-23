/* sub_609921D4
 * address: 0x609921D4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609921D4(_BYTE *a1)
{
  int v2; // r5
  int result; // r0

  v2 = 1;
  switch ( a1[28] )
  {
    case 0:
    case 2:
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 84))(a1);
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 116))(a1, 1);
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

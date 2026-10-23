/* sub_609916C4
 * address: 0x609916C4   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609916C4(_BYTE *a1)
{
  int result; // r0

  switch ( a1[28] )
  {
    case 0:
    case 2:
      goto LABEL_5;
    case 4:
    case 6:
      return 0;
    case 5:
      if ( (a1[30] & 0x40) == 0 )
        goto LABEL_4;
LABEL_5:
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 84))(a1);
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 116))(a1, 1);
      result = 1;
      break;
    default:
LABEL_4:
      result = 1;
      break;
  }
  return result;
}

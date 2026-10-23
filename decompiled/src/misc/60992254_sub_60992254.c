/* sub_60992254
 * address: 0x60992254   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60992254(_BYTE *a1)
{
  int result; // r0

  switch ( a1[28] )
  {
    case 1:
    case 3:
    case 5:
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 88))(a1);
      (*(void (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 116))(a1, 2);
      goto LABEL_3;
    case 4:
      result = 0;
      break;
    default:
LABEL_3:
      result = 1;
      break;
  }
  return result;
}

/* sub_609232C4
 * address: 0x609232C4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609232C4(_BYTE *a1)
{
  int result; // r0

  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 48))(a1);
  result = a1[110] & 0xDF;
  a1[110] = result;
  return result;
}

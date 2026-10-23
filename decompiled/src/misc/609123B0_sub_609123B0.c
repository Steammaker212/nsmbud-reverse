/* sub_609123B0
 * address: 0x609123B0   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609123B0(_BYTE *a1)
{
  int result; // r0

  result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 52))(a1);
  a1[20] = result;
  return result;
}

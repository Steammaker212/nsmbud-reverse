/* sub_608B0420
 * address: 0x608B0420   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B0420(int a1, int a2, int a3, int a4)
{
  int result; // r0

  *(_DWORD *)(a1 + 4 * a2 + 388) = a3;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  FIELD_U32(result, 156) = a4;
  return result;
}

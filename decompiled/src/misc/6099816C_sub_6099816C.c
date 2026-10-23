/* sub_6099816C
 * address: 0x6099816C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099816C(int a1, int a2, int a3, int a4)
{
  int result; // r0

  sub_6098E0F8(a3, a4);
  result = *(_DWORD *)((*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 44))(a2, 0) + 20) + 8 * FIELD_S8(a1, 422);
  FIELD_U32(result, 4) = a3;
  return result;
}

/* sub_604B2D88
 * address: 0x604B2D88   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B2D88(int a1)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 16) + 40))(**(_DWORD **)(a1 + 16), 1);
  (*(void (__fastcall **)(_DWORD, int))(**(_DWORD **)(FIELD_U32(a1, 16) + 4) + 40))(
    *(_DWORD *)(FIELD_U32(a1, 16) + 4),
    1);
  *(_BYTE *)(FIELD_U32(a1, 616) + 64) |= 1u;
  result = FIELD_U32(a1, 620);
  FIELD_U8(result, 64) |= 1u;
  return result;
}

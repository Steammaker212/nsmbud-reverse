/* sub_608714C8
 * address: 0x608714C8   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608714C8(int a1, int a2, int a3)
{
  int v3; // r3
  int result; // r0

  v3 = FIELD_U8(a1, 30);
  result = *(_DWORD *)(a2 + 4 * v3) & ~FIELD_U32(a1, 32) | (a3 << FIELD_U8(a1, 31));
  *(_DWORD *)(a2 + 4 * v3) = result;
  return result;
}

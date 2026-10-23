/* sub_607B12D8
 * address: 0x607B12D8   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B12D8(int a1)
{
  sub_6077015C((_DWORD *)a1);
  FIELD_U32(a1, 1224) &= 0xFBFFB82B;
  FIELD_U32(a1, 1228) &= ~0x10000u;
  FIELD_U8(a1, 15074) = 0;
  return 15074;
}

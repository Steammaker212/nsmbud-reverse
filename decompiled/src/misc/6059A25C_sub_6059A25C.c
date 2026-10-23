/* sub_6059A25C
 * address: 0x6059A25C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6059A25C(int a1)
{
  int v1; // r4

  v1 = a1 + 6260;
  FIELD_U32(a1, 6260) |= 0x100000u;
  sub_6059BE40(a1 + 8036, -6.0);
  FIELD_U32(v1, 7224) = -1061158912;
  FIELD_U8(v1, 7628) = 1;
  return 7628;
}

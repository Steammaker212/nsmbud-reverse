/* sub_6055D938
 * address: 0x6055D938   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055D938(int a1)
{
  int v2; // r5

  v2 = a1 + 44;
  sub_604741D8((_DWORD *)(a1 + 44), 1u, &dword_60CADD28, 0);
  sub_6047455C(v2, 1u, 0.0);
  sub_6055F880(a1, 1);
  FIELD_U32(a1, 4720) = 0;
  return 4720;
}

/* sub_6056EA60
 * address: 0x6056EA60   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6056EA60(int a1, int a2)
{
  BlockBase__ctor(a1, a2);
  *(_DWORD *)a1 = off_60C02AE0;
  LineFollower_ctor((LineFollower *)(a1 + 7388));
  FIELD_U32(a1, 7532) = 0;
  return a1;
}

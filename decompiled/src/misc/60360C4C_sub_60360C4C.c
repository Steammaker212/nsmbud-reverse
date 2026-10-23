/* sub_60360C4C
 * address: 0x60360C4C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60360C4C(int a1)
{
  FIELD_F32(a1, 112) = FIELD_F32(a1, 648) + FIELD_F32(dword_60CC6484, 316);
  sub_60360AC0(a1);
  ShapedCollider_execute((ColliderBase *)(a1 + 656));
  return 1;
}

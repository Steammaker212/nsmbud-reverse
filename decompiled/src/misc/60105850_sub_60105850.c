/* sub_60105850
 * address: 0x60105850   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60105850(int a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2

  sub_60639354(a1 + 6648);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6200));
  result = FIELD_U32(a1, 108);
  v3 = FIELD_U32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 584) = result;
  FIELD_U32(a1, 588) = v3;
  FIELD_U32(a1, 592) = v4;
  FIELD_U32(a1, 608) = result;
  FIELD_U32(a1, 612) = v3;
  FIELD_U32(a1, 616) = v4;
  return result;
}

/* sub_60641398
 * address: 0x60641398   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60641398(int a1)
{
  FIELD_U32(a1, 108) = FIELD_U32(a1, 6984);
  FIELD_U32(a1, 112) = FIELD_U32(a1, 6988);
  FIELD_U32(a1, 116) = FIELD_U32(a1, 6992);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6360));
  return sub_60639354(a1 + 6952);
}

/* sub_605B1F6C
 * address: 0x605B1F6C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1F6C(int a1)
{
  _DWORD *v1; // r4

  FIELD_U32(a1, 144) = 1065353216;
  v1 = (_DWORD *)(a1 + 6104);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6104));
  return sub_60160948(v1);
}

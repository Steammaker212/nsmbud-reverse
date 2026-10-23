/* sub_6015AD30
 * address: 0x6015AD30   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6015AD30(float *a1)
{
  float v2; // s16
  int v3; // r5

  v2 = FIELD_F32(dword_60CC6484, 16);
  v3 = sub_6015B918(ActiveColliderMgr_instance, a1, v2 * 10.0);
  return v3 | sub_60153D8C(ColliderMgr_instance, a1, v2 * 0.0);
}

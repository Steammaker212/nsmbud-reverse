/* sub_606A6418
 * address: 0x606A6418   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A6418(int a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2

  v2 = (_DWORD *)(a1 + 6120);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_U32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 584) = v3;
  FIELD_U32(a1, 588) = v4;
  FIELD_U32(a1, 592) = v5;
  FIELD_U32(a1, 608) = v3;
  FIELD_U32(a1, 612) = v4;
  FIELD_U32(a1, 616) = v5;
  return sub_60160948(v2);
}

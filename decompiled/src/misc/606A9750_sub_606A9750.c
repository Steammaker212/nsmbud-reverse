/* sub_606A9750
 * address: 0x606A9750   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A9750(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2

  sub_606A97A0();
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6152));
  v2 = FIELD_U32(a1, 108);
  v3 = FIELD_U32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 584) = v2;
  FIELD_U32(a1, 588) = v3;
  FIELD_U32(a1, 592) = v4;
  FIELD_U32(a1, 608) = v2;
  FIELD_U32(a1, 612) = v3;
  FIELD_U32(a1, 616) = v4;
  return sub_60160948((_DWORD *)(a1 + 6152));
}

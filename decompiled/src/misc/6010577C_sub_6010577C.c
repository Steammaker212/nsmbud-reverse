/* sub_6010577C
 * address: 0x6010577C   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6010577C(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int v5; // r2

  v2 = a1 + 6648;
  sub_60639254(a1 + 6648);
  sub_60639370(v2);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6200));
  sub_601601B8(a1 + 6200);
  v3 = FIELD_U32(a1, 6664);
  FIELD_U32(a1, 108) = v3;
  v4 = FIELD_U32(a1, 6668);
  FIELD_U32(a1, 112) = v4;
  v5 = FIELD_U32(a1, 6672);
  FIELD_U32(a1, 116) = v5;
  FIELD_U32(a1, 584) = v3;
  FIELD_U32(a1, 588) = v4;
  FIELD_U32(a1, 592) = v5;
  FIELD_U32(a1, 608) = v3;
  FIELD_U32(a1, 612) = v4;
  FIELD_U32(a1, 616) = v5;
  FIELD_U32(a1, 6676) = 60;
  return 6676;
}

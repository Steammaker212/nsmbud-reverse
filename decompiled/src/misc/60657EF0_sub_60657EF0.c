/* sub_60657EF0
 * address: 0x60657EF0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60657EF0(int a1)
{
  int v2; // r0
  double v3; // d0
  float v4; // s2
  float v5; // s3
  float v6; // s4
  float v7; // s5
  float32x2_t v8; // d3

  if ( Actor__getProfileId((Actor *)a1) == 214
    || FIELD_S32(a1, 20) < 0
    || (StageActor__cullCheck((StageActor *)a1, 16), !v2) )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    sub_6063926C(a1 + 6812, v3, v4, v5, v6, v7, v8);
    SolidOnTopCollider_execute((ColliderBase *)(a1 + 6360));
    sub_60645448(a1 + 6104, a1 + 108, FIELD_F32(a1, 6872));
  }
  return 1;
}

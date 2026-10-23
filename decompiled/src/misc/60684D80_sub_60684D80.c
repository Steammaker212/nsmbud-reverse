/* sub_60684D80
 * address: 0x60684D80   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60684D80(int a1)
{
  float *v2; // r5
  float v3; // s0
  float v4; // s2
  float v5; // s0

  v2 = (float *)(a1 + 7444);
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_F32(a1, 7444);
  FIELD_U32(a1, 7772) = 0;
  v5 = v4 - v3;
  FIELD_F32(a1, 7776) = v5;
  FIELD_U32(a1, 6948) = 0;
  FIELD_F32(a1, 6952) = v5 + 160.0;
  ShapedCollider_execute((ColliderBase *)(a1 + 7600));
  FIELD_F32(a1, 8696) = (float)(FIELD_F32(a1, 8700) + (float)(*v2 - FIELD_F32(a1, 112))) + -1.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), (CollisionMgr_Sensor *)(a1 + 8688), 3);
}

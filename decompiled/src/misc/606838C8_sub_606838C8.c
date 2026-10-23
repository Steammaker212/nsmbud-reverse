/* sub_606838C8
 * address: 0x606838C8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606838C8(int a1)
{
  float v2; // s2
  float v3; // s0
  float v4; // s0
  int result; // r0
  float v6; // s0
  float v7; // s2

  sub_606836FC(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 7444);
  FIELD_U32(a1, 7772) = 0;
  v4 = v3 - v2;
  FIELD_F32(a1, 7776) = v4;
  FIELD_U32(a1, 6948) = 0;
  FIELD_F32(a1, 6952) = v4 + 480.0;
  ShapedCollider_execute((ColliderBase *)(a1 + 7600));
  result = FIELD_U8(a1, 7517);
  if ( FIELD_U8(a1, 7517) )
  {
    v6 = FIELD_F32(a1, 112);
    v7 = FIELD_F32(a1, 7444);
    FIELD_U32(a1, 304) = 0;
    FIELD_F32(a1, 308) = (float)(v7 - v6) + -60.0;
  }
  return result;
}

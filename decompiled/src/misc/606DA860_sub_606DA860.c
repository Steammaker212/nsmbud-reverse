/* sub_606DA860
 * address: 0x606DA860   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DA860(int a1, double a2, float32x2_t a3)
{
  float *v4; // r0
  float v5; // s0
  int result; // r0

  a3.n64_u32[0] = 0;
  v4 = (float *)(a1 + 6452);
  *(float *)&a2 = *v4 + -0.1875;
  v5 = vmax_f32(*(float32x2_t *)&a2, a3).n64_f32[0];
  *v4 = v5;
  FIELD_F32(a1, 6440) = FIELD_F32(a1, 6440) + v5;
  if ( v5 == 0.0 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB99C);
  result = FIELD_U32(a1, 6504);
  if ( result <= 11 )
  {
    result = **(_DWORD **)(FIELD_U32(a1, 6112) + 12);
    FIELD_U32(result, 24) = 1065353216;
  }
  return result;
}

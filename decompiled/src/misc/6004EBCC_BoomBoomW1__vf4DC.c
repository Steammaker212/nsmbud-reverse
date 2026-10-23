/* BoomBoomW1__vf4DC
 * address: 0x6004EBCC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomW1__vf4DC(int a1)
{
  int v2; // r0
  double v3; // d0
  float32x2_t v4; // d2
  int result; // r0
  _DWORD v6[8]; // [sp+0h] [bp-20h] BYREF

  v2 = FIELD_U32(a1, 7204);
  v6[2] = &sead__SafeStringBase__vtable;
  v6[3] = "run1";
  sub_60421AD4(v2);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "run";
  sub_60051794(a1, v6, 1);
  v3 = ((double (__fastcall *)(int, unsigned int))*(_DWORD *)(*(_DWORD *)a1 + 1264))(a1, FIELD_U32(a1, 80) ^ 1u);
  FIELD_U32(a1, 132) = LODWORD(v3);
  v4.n64_u32[0] = 1008981770;
  *(float *)&v3 = (float)(FIELD_F32(a1, 120) * FIELD_F32(a1, 120))
                / (float)(FIELD_F32(a1, 7924) + FIELD_F32(a1, 7924));
  FIELD_U32(a1, 104) = vmax_f32(*(float32x2_t *)&v3, v4).n64_u32[0];
  FIELD_U32(a1, 7956) = 0;
  result = FIELD_U32(a1, 7952) + 1;
  FIELD_U32(a1, 7952) = result;
  return result;
}

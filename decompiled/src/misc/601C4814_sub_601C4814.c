/* sub_601C4814
 * address: 0x601C4814   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C4814(int a1, float *a2, int a3, int a4, float a5)
{
  float v6; // s0
  float v7; // s4
  float v8; // s6

  v6 = sqrtf(
         (float)((float)(FIELD_F32(a1, 88) - a2[2]) * (float)(FIELD_F32(a1, 88) - a2[2]))
       + (float)((float)(FIELD_F32(a1, 80) - *a2) * (float)(FIELD_F32(a1, 80) - *a2)));
  if ( v6 <= 200.0 )
  {
    v7 = 1.0;
  }
  else
  {
    v7 = 2.0;
    if ( v6 < 2000.0 )
      v7 = (float)(v6 * 0.00055556) + 0.88889;
  }
  v8 = FIELD_F32(a1, 88) - a2[2];
  return ((int (__fastcall *)(int, float *, int, int, float, float, float, _DWORD, int *))loc_60185F9C)(
           a1,
           a2,
           a4,
           (int)(float)(sqrtf(
                          (float)(v8 * v8)
                        + (float)((float)(FIELD_F32(a1, 80) - *a2) * (float)(FIELD_F32(a1, 80) - *a2)))
                      / (float)(v6 / (float)(v7 * (float)FIELD_S16(a3, 8)))),
           v7 * FIELD_F32(a3, 4),
           FIELD_F32(a3, 12) * a5,
           FIELD_F32(a3, 16) * a5,
           FIELD_S16(a3, 10),
           &dword_60B3B974);
}

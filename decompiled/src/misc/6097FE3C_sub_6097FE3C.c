/* sub_6097FE3C
 * address: 0x6097FE3C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097FE3C(int a1, int a2, float *a3, int a4)
{
  float v4; // s2
  float v5; // s0
  float *v6; // r12

  v4 = FIELD_F32(a1, 56);
  v5 = FIELD_F32(a1, 60);
  if ( dword_60CD0B40 )
  {
    v6 = *(float **)(**(_DWORD **)(dword_60CD0B40 + 28) + 2300);
    v5 = (float)((float)(v6[6] - v6[4]) * v5) / a3[1];
    v4 = (float)((float)(v6[5] - v6[3]) * v4) / *a3;
  }
  FIELD_U16(a1, 208) = (int)v4;
  FIELD_U16(a1, 210) = (int)v5;
  FIELD_U32(a1, 200) = -1;
  FIELD_U32(a1, 204) = -1;
  return sub_6098E754(a2, a1 + 192, a4);
}

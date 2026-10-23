/* sub_600F2BB0
 * address: 0x600F2BB0   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F2BB0(float *a1)
{
  float v2; // s2
  int result; // r0
  float v4; // s0
  float v5; // s4
  float v6; // s0

  KoopalingBase__vf568((int)a1);
  v2 = a1[30];
  result = dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 116);
  if ( v2 > 0.0 )
  {
    result = (int)(a1 + 1872);
    v5 = v4 + a1[1872];
    if ( a1[27] > v5 )
    {
      a1[27] = v5;
LABEL_7:
      a1[30] = 0.0;
      return 0;
    }
  }
  if ( v2 < 0.0 )
  {
    result = (int)(a1 + 1873);
    v6 = v4 + a1[1873];
    if ( a1[27] < v6 )
    {
      a1[27] = v6;
      goto LABEL_7;
    }
  }
  return result;
}

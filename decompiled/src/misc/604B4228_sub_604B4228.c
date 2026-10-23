/* sub_604B4228
 * address: 0x604B4228   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B4228(int a1)
{
  int v2; // r6
  _DWORD *v3; // r0
  int *v4; // r2
  int v5; // r5

  sub_60473DE4(*(_DWORD **)(a1 + 4), 0, &dword_60CA1B44, 0);
  v2 = FIELD_U32(dword_60C99DD4, 912);
  switch ( v2 )
  {
    case 1:
      v3 = *(_DWORD **)(a1 + 4);
      v4 = &dword_60CA1B64;
      goto LABEL_6;
    case 2:
      v3 = *(_DWORD **)(a1 + 4);
      v4 = &dword_60CA1B5C;
      goto LABEL_6;
    case 3:
      v3 = *(_DWORD **)(a1 + 4);
      v4 = &dword_60CA1B54;
      goto LABEL_6;
    case 4:
      v3 = *(_DWORD **)(a1 + 4);
      v4 = &dword_60CA1B4C;
LABEL_6:
      sub_60473DE4(v3, 2u, v4, 0);
      break;
    default:
      break;
  }
  sub_60473DE4(*(_DWORD **)(a1 + 4), 3u, &dword_60CA1B6C, 0);
  v5 = FIELD_U32(a1, 584);
  FIELD_F32(v5, 24) = *(float *)(FIELD_U32(a1, 552) + 24)
                      + (float)((float)(1 - v2 + FIELD_U32(AreaTask_intance, 1864))
                              * (float)(*(float *)(FIELD_U32(a1, 544) + 24) - *(float *)(FIELD_U32(a1, 540) + 24)));
  FIELD_U32(v5, 32) = 0;
  FIELD_U8(v5, 64) |= 0x10u;
  FIELD_U32(a1, 14916) = 360;
  return 14916;
}

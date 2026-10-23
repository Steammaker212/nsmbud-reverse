/* sub_6086E1D0
 * address: 0x6086E1D0   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6086E1D0(int a1, int a2, float a3)
{
  float v6; // s0
  float v7; // s2
  _DWORD *v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r0

  v6 = *(float *)a2;
  if ( *(float *)a2 > a3 || (v7 = FIELD_F32(a2, 4), v7 <= a3) )
  {
    v9 = (unsigned int)(float)((float)FIELD_U16(a1, 18)
                             * (float)((float)(a3 - FIELD_F32(a1, 24))
                                     * (float)(1.0 / (float)(FIELD_F32(a1, 28) - FIELD_F32(a1, 24)))));
    FIELD_U32(a2, 8) = v9;
    v8 = (_DWORD *)(a2 + 8);
    v10 = FIELD_U16(a1, 18);
    if ( v9 >= v10 )
      *v8 = v10 - 1;
    ((void (__fastcall *)(int, int, float))off_60C5A70C[2 * (FIELD_U16(a1, 16) & 3)])(
      a1 + ((int)off_60C5A70C[2 * (FIELD_U16(a1, 16) & 3) + 1] >> 1),
      a2,
      a3);
    v6 = *(float *)a2;
    v7 = FIELD_F32(a2, 4);
  }
  else
  {
    v8 = (_DWORD *)(a2 + 8);
  }
  return (float)*(__int16 *)(FIELD_U32(a1, 8) + 4 * *v8)
       + (float)((float)((float)(a3 - v6) * (float)(1.0 / (float)(v7 - v6)))
               * (float)*(__int16 *)(FIELD_U32(a1, 8) + 4 * *v8 + 2));
}

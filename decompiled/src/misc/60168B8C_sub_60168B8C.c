/* sub_60168B8C
 * address: 0x60168B8C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60168B8C(int a1, int a2, int a3, float a4)
{
  float v5; // r0
  float v6; // r1
  float v7; // s2
  unsigned int result; // r0

  v5 = *(float *)a2;
  FIELD_U32(a1, 104) = *(_DWORD *)a2;
  FIELD_U32(a1, 108) = FIELD_U32(a2, 4);
  v6 = FIELD_F32(a2, 8);
  FIELD_F32(a1, 112) = v6;
  FIELD_F32(a1, 200) = sqrtf(
                           (float)((float)(v6 - FIELD_F32(a1, 88)) * (float)(v6 - FIELD_F32(a1, 88)))
                         + (float)((float)(v5 - FIELD_F32(a1, 80)) * (float)(v5 - FIELD_F32(a1, 80))))
                       / (float)a3;
  FIELD_U32(a1, 208) = -1038090240;
  if ( a3 < 1 )
    v7 = 0.0;
  else
    v7 = (float)(int)(((((unsigned int)(a3 - 1) * (unsigned __int64)(unsigned int)(a3 - 2)) & 0x1FFFFFFFFLL) >> 1)
                    + 2 * a3
                    - 1);
  FIELD_F32(a1, 204) = (float)((float)(FIELD_F32(a1, 108) - FIELD_F32(a1, 84)) - (float)((float)a3 * a4)) / v7;
  FIELD_F32(a1, 120) = a4;
  FIELD_U8(a1, 216) &= ~0x10u;
  result = sub_6000F7B8(FIELD_F32(a1, 104) - FIELD_F32(a1, 80), FIELD_F32(a1, 112) - FIELD_F32(a1, 88));
  FIELD_U32(a1, 180) = result;
  FIELD_U32(a1, 192) = result;
  return result;
}

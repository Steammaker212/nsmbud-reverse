/* sub_602D25C0
 * address: 0x602D25C0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_602D25C0(int a1)
{
  int v2; // r1
  int v3; // r0
  int v4; // r0
  float result; // s0
  int v6; // [sp+0h] [bp-10h] BYREF
  int target[3]; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 84);
  switch ( v2 )
  {
    case 2:
      v6 = 119304647;
      target[0] = 0x80000000;
      if ( !moveValueTo((int *)(a1 + 92), target, &v6) )
        break;
      v4 = 0;
      goto LABEL_12;
    case 1:
      v6 = 119304647;
      target[0] = 715827882;
      if ( !moveValueTo((int *)(a1 + 92), target, &v6) )
        break;
      v3 = FIELD_U32(a1, 120);
      if ( v3 )
        FIELD_U32(v3, 84) = 1;
      v4 = 2;
LABEL_12:
      FIELD_U32(a1, 84) = v4;
      break;
    case 0:
      FIELD_U32(a1, 88) = 0;
      FIELD_U32(a1, 92) = 0;
      break;
  }
  result = *(float *)((char *)sinLutTable + ((FIELD_U32(a1, 92) >> 20) & 0xFF0))
         + (float)((float)((float)(FIELD_U32(a1, 92) & 0xFFFFFF)
                         * *(float *)((char *)&sinLutTable[1] + ((FIELD_U32(a1, 92) >> 20) & 0xFF0)))
                 * 0.000000059605);
  FIELD_F32(a1, 12) = FIELD_F32(a1, 12) + (float)(result * 10.0);
  return result;
}

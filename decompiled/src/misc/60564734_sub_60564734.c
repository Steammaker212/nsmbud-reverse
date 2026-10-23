/* sub_60564734
 * address: 0x60564734   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60564734(int a1)
{
  int v1; // r1
  float result; // s0
  bool v3; // zf
  int v4; // r1
  int v5; // r2
  bool v6; // cf
  unsigned int v7; // r3
  int v8; // r1

  v1 = FIELD_U32(a1, 7300);
  result = FIELD_F32(a1, 108);
  v3 = v1 == 0;
  if ( v1 )
    v3 = FIELD_U32(a1, 7304) == 0;
  if ( !v3 && v1 == 1 && FIELD_U32(a1, 7060) != 1 )
  {
    v4 = FIELD_U32(a1, 7072);
    v5 = 0x40000000;
    v6 = (unsigned int)(v4 - 536870913) >= 0x40000000;
    v7 = 0x40000000;
    if ( (unsigned int)(v4 - 536870913) >= 0x40000000 )
    {
      v7 = 0x80000000;
      v6 = (unsigned int)(v4 - 1610612737) >= 0x40000000;
    }
    if ( v6 )
    {
      v7 = 0;
      if ( (unsigned int)(v4 + 1610612735) < 0x3FFFFFFF )
        v7 = -1073741824;
    }
    v8 = v4 - v7;
    if ( FIELD_U8(a1, 6846) == 2 )
      v5 = -1073741824;
    return FIELD_F32(a1, 7096)
         + (float)((float)(*(float *)((char *)&sinLutTable[2] + (((unsigned int)(v5 + v8) >> 20) & 0xFF0))
                         + (float)((float)(*(float *)((char *)&sinLutTable[3] + (((unsigned int)(v5 + v8) >> 20) & 0xFF0))
                                         * (float)((v5 + v8) & 0xFFFFFF))
                                 * 0.000000059605))
                 * 8.0);
  }
  return result;
}

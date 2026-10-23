/* sub_6066E494
 * address: 0x6066E494   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6066E494(int a1)
{
  _BYTE *v1; // r3
  int v2; // r1
  float *result; // r0
  float v4; // s2
  float v5; // s0
  float v6; // s2
  float *v7; // r2
  unsigned int v8; // r1
  float v9; // s6
  bool v10; // cc

  FIELD_U8(a1, 8240) = 1;
  FIELD_U8(a1, 8241) = 0;
  v1 = (_BYTE *)(a1 + 8267);
  v2 = FIELD_U32(a1, 6100);
  if ( FIELD_U8(a1, 8267) )
  {
    result = (float *)(a1 + 8248);
    *result = FIELD_F32(v2, 20) - *result;
    *v1 = 0;
  }
  else
  {
    v4 = FIELD_F32(a1, 8248);
    FIELD_F32(a1, 8088) = FIELD_F32(v2, 64) - v4;
    FIELD_U32(a1, 8092) = FIELD_U32(v2, 68);
    FIELD_F32(a1, 8096) = v4 + FIELD_F32(v2, 48);
    FIELD_U32(a1, 8100) = FIELD_U32(v2, 52);
    v5 = FIELD_F32(a1, 108);
    v6 = FIELD_F32(a1, 112);
    v7 = (float *)(a1 + 8116);
    v8 = a1 + 8120;
    do
    {
      result = v7 + 2;
      v9 = v6 + *(v7 - 6);
      *(v7 - 1) = v5 + *(v7 - 7);
      *v7 = v9;
      v10 = (unsigned int)(v7 + 1) > v8;
      v7 += 2;
    }
    while ( !v10 );
  }
  return result;
}

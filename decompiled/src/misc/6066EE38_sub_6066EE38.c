/* sub_6066EE38
 * address: 0x6066EE38   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6066EE38(int a1)
{
  int v1; // r1
  float v2; // s0
  float v3; // s0
  float v4; // s2
  float *v5; // r2
  unsigned int v6; // r1
  float *result; // r0
  float v8; // s6
  bool v9; // cc

  FIELD_U8(a1, 8240) = 3;
  FIELD_U8(a1, 8241) = 2;
  v1 = FIELD_U32(a1, 6100);
  if ( FIELD_U8(a1, 8267) )
  {
    v2 = FIELD_F32(v1, 16) - FIELD_F32(a1, 8248);
    FIELD_F32(a1, 8248) = v2;
    FIELD_U8(a1, 8267) = 0;
  }
  else
  {
    v2 = FIELD_F32(a1, 8248);
  }
  FIELD_U32(a1, 8088) = FIELD_U32(v1, 64);
  FIELD_F32(a1, 8092) = FIELD_F32(v1, 68) - v2;
  FIELD_U32(a1, 8096) = FIELD_U32(v1, 48);
  FIELD_F32(a1, 8100) = v2 + FIELD_F32(v1, 52);
  v3 = FIELD_F32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = (float *)(a1 + 8116);
  v6 = a1 + 8120;
  do
  {
    result = v5 + 2;
    v8 = v4 + *(v5 - 6);
    *(v5 - 1) = v3 + *(v5 - 7);
    *v5 = v8;
    v9 = (unsigned int)(v5 + 1) > v6;
    v5 += 2;
  }
  while ( !v9 );
  return result;
}

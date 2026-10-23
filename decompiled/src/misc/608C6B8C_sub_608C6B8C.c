/* sub_608C6B8C
 * address: 0x608C6B8C   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608C6B8C(signed int a1)
{
  signed int v1; // r3
  int v2; // r1
  unsigned int v3; // kr00_4
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // lr
  unsigned int v8; // r12
  float result; // s0
  int v10; // r3
  int v11; // r3

  v1 = 0;
  if ( a1 < 0 )
  {
    v2 = -3072;
    if ( a1 > -3072 )
      v2 = a1;
    v3 = v2 + 3071 - a1;
    v1 = ~(v3 / 0xC00);
    a1 += 3072 * (v3 / 0xC00) + 3072;
  }
  if ( a1 < 3072 )
  {
    v7 = (unsigned int)a1 >> 8;
    result = 1.0;
    v8 = a1 - ((unsigned int)a1 >> 8 << 8);
    if ( v1 >= 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v4 = a1 - 3072;
  v5 = v4 / 0xC00;
  v6 = v1 + v4 / 0xC00;
  a1 = v4 % 0xC00;
  v7 = (unsigned int)a1 >> 8;
  v8 = a1 - ((unsigned int)a1 >> 8 << 8);
  if ( (int)(v1 + v5) < 0 )
  {
    result = 1.0;
    v1 = v6 + 1;
    if ( (int)(v6 + 1) >= 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  result = 1.0;
  v10 = v1 + v5 + 2;
  do
  {
    result = result + result;
    --v10;
  }
  while ( v10 > 1 );
  v1 = v10 - 1;
  if ( v1 < 0 )
  {
LABEL_14:
    v11 = v1 - 1;
    do
    {
      result = result * 0.5;
      ++v11;
    }
    while ( v11 < -1 );
  }
LABEL_16:
  if ( (unsigned int)(a1 + 255) >= 0x1FF )
    result = result * flt_60B347AC[v7];
  if ( v8 )
    return result * flt_60B347DC[v8];
  return result;
}

/* sub_608C9204
 * address: 0x608C9204   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C9204(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6
  int v8; // r4
  int v9; // r5
  int v10; // r7
  int v11; // r0

  v5 = a2;
  v8 = a1;
  v9 = 0;
  if ( a2 <= 1 )
    v5 = 1;
  FIELD_U32(a1, 400) = 0;
  if ( a2 > 2 )
    v5 = 2;
  if ( v5 >= 1 )
  {
    v9 = 0;
    v10 = a1;
    do
    {
      if ( sub_608CB4D4(v10, a3) != 1 )
        break;
      ++v9;
      v10 += 200;
    }
    while ( v9 < v5 );
  }
  if ( v9 == v5 )
  {
    FIELD_U32(v8, 400) = v5;
    FIELD_U16(v8, 424) = 0;
    FIELD_U32(v8, 420) = 0;
    FIELD_U8(v8, 413) = 0;
    FIELD_U8(v8, 416) = 0;
    FIELD_U8(v8, 415) = 0;
    FIELD_U8(v8, 414) = 0;
    FIELD_U32(v8, 404) = a4;
    FIELD_U32(v8, 408) = a5;
    FIELD_U32(v8, 428) = 1065353216;
    FIELD_U32(v8, 432) = 1065353216;
    FIELD_U32(v8, 436) = 0;
    FIELD_U32(v8, 440) = 0;
    FIELD_U32(v8, 444) = 1065353216;
    FIELD_U8(v8, 426) = 0;
    FIELD_U32(v8, 448) = 0;
    FIELD_U8(v8, 427) = 0;
    FIELD_U32(v8, 460) = 1065353216;
    FIELD_U32(v8, 464) = 0;
    FIELD_U32(v8, 516) = 0;
    FIELD_U32(v8, 520) = 0;
    FIELD_U32(v8, 524) = 0;
    FIELD_U32(v8, 528) = 0;
    FIELD_U32(v8, 532) = 0;
    FIELD_U32(v8, 536) = 0;
    v11 = FIELD_U32(v8, 540);
    if ( v11 )
      sub_608B0E58(v11);
    FIELD_U8(v8, 412) = 1;
    return 1;
  }
  else
  {
    if ( v9 >= 1 )
    {
      do
      {
        sub_608CB57C(v8);
        v8 += 200;
        --v9;
      }
      while ( v9 );
    }
    return 0;
  }
}

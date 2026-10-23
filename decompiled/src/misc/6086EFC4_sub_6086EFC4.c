/* sub_6086EFC4
 * address: 0x6086EFC4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6086EFC4(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r5

  v4 = FIELD_U16(a1, 188);
  if ( FIELD_U16(a1, 188) )
  {
    v5 = 0;
    do
    {
      sub_60870B4C(FIELD_U32(a1, 40) + v5, a2);
      v5 += 120;
      --v4;
    }
    while ( v4 );
  }
  if ( FIELD_U32(a1, 144) )
  {
    v6 = FIELD_U32(a1, 136);
    if ( FIELD_U8(v6, 272) )
    {
      sub_60836614(v6);
      nullsub_68();
    }
  }
}

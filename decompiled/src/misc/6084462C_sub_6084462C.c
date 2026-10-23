/* sub_6084462C
 * address: 0x6084462C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6084462C(int a1)
{
  int v2; // r0
  int v3; // t1
  _BYTE *v4; // r6
  int v5; // r7

  v3 = FIELD_U8(a1, 8);
  v2 = a1 + 8;
  if ( v3 )
    sub_6083D59C(v2);
  if ( FIELD_U8(a1, 1368) )
    sub_6083CF58(a1 + 1304);
  v4 = (_BYTE *)(a1 + 80);
  v5 = 17;
  do
  {
    if ( *v4 )
      sub_60835494((int)v4);
    v4 += 72;
    --v5;
  }
  while ( v5 );
  FIELD_U32(a1, 1376) = 0;
  return 0;
}

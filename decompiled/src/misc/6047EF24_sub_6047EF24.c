/* sub_6047EF24
 * address: 0x6047EF24   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047EF24(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r12
  int v7; // r0

  v3 = FIELD_U32(a1, 16);
  if ( v3 == a1 + 12 )
    return 1;
  v4 = FIELD_U32(a1, 24);
  v5 = a2 + 1;
  v6 = a1 + 12 - v4;
  v7 = v3 - v4;
  while ( --v5 >= 1 )
  {
    v3 = FIELD_U32(v3, 4);
    v7 = v3 - v4;
    if ( v3 - v4 == v6 )
      return 1;
  }
  if ( !v7 )
    return 1;
  v2 = FIELD_U32(v7, 120);
  if ( v2 )
    return FIELD_U8(v2, 51) & 1;
  else
    return 1;
}

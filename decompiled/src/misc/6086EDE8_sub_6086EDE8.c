/* sub_6086EDE8
 * address: 0x6086EDE8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086EDE8(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r5
  int v8; // r7
  int v9; // r4
  int v10; // r5

  v6 = FIELD_U16(a1, 188);
  if ( FIELD_U16(a1, 188) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v8 |= sub_60870980(FIELD_U32(a1, 40) + v7, a2, a3);
      v7 += 120;
      --v6;
    }
    while ( v6 );
  }
  else
  {
    v8 = 0;
  }
  v9 = FIELD_U16(a1, 192);
  if ( FIELD_U16(a1, 192) )
  {
    v10 = 0;
    do
    {
      v8 |= sub_60870678(FIELD_U32(a1, 72) + v10, a2, a3);
      v10 += 120;
      --v9;
    }
    while ( v9 );
  }
  return v8;
}

/* sub_60870B4C
 * address: 0x60870B4C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60870B4C(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r6
  int v7; // r7
  int v8; // r6
  int v9; // r7

  v4 = FIELD_U16(a1, 108);
  if ( FIELD_U16(a1, 108) )
  {
    v5 = 0;
    do
    {
      sub_6086F7E0(FIELD_U32(a1, 64) + v5);
      v5 += 184;
      --v4;
    }
    while ( v4 );
  }
  v6 = FIELD_U16(a1, 106);
  if ( FIELD_U16(a1, 106) )
  {
    v7 = 0;
    do
    {
      sub_60872218(FIELD_U32(a1, 48) + v7, a2);
      v7 += 112;
      --v6;
    }
    while ( v6 );
  }
  v8 = FIELD_U16(a1, 104);
  if ( FIELD_U16(a1, 104) )
  {
    v9 = 0;
    do
    {
      sub_60872014(FIELD_U32(a1, 40) + v9, a2);
      v9 += 96;
      --v8;
    }
    while ( v8 );
  }
}

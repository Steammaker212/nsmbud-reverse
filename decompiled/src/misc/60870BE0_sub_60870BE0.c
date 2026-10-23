/* sub_60870BE0
 * address: 0x60870BE0   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870BE0(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r6
  int v5; // r7
  int v6; // r6
  int v7; // r7

  v2 = FIELD_U16(a1, 108);
  if ( FIELD_U16(a1, 108) )
  {
    v3 = 0;
    do
    {
      sub_6086F834(FIELD_U32(a1, 64) + v3, 0);
      v3 += 184;
      --v2;
    }
    while ( v2 );
  }
  v4 = FIELD_U16(a1, 106);
  if ( FIELD_U16(a1, 106) )
  {
    v5 = 0;
    do
    {
      sub_6087226C(FIELD_U32(a1, 48) + v5, 0);
      v5 += 112;
      --v4;
    }
    while ( v4 );
  }
  v6 = FIELD_U16(a1, 104);
  if ( FIELD_U16(a1, 104) )
  {
    v7 = 0;
    do
    {
      sub_60872068(FIELD_U32(a1, 40) + v7, 0);
      v7 += 96;
      --v6;
    }
    while ( v6 );
  }
  sub_608729D4(FIELD_U32(a1, 32), 0);
  FIELD_U32(a1, 96) = 0;
  return 0;
}

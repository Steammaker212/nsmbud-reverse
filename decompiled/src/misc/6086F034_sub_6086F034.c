/* sub_6086F034
 * address: 0x6086F034   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086F034(int a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r5
  int v5; // r6
  int v6; // r5
  int v7; // r6
  int v8; // r5
  int v9; // r6
  int v10; // r5
  int v11; // r6

  v2 = FIELD_U16(a1, 188);
  if ( FIELD_U16(a1, 188) )
  {
    v3 = 0;
    do
    {
      sub_60870BE0(FIELD_U32(a1, 40) + v3);
      v3 += 120;
      --v2;
    }
    while ( v2 );
  }
  v4 = FIELD_U16(a1, 190);
  if ( FIELD_U16(a1, 190) )
  {
    v5 = 0;
    do
    {
      sub_60872920(FIELD_U32(a1, 56) + v5);
      v5 += 96;
      --v4;
    }
    while ( v4 );
  }
  v6 = FIELD_U16(a1, 192);
  if ( FIELD_U16(a1, 192) )
  {
    v7 = 0;
    do
    {
      sub_608707F4(FIELD_U32(a1, 72) + v7);
      v7 += 120;
      --v6;
    }
    while ( v6 );
  }
  v8 = FIELD_U16(a1, 196);
  if ( FIELD_U16(a1, 196) )
  {
    v9 = 0;
    do
    {
      sub_60872574(FIELD_U32(a1, 104) + v9);
      v9 += 96;
      --v8;
    }
    while ( v8 );
  }
  v10 = FIELD_U16(a1, 198);
  if ( FIELD_U16(a1, 198) )
  {
    v11 = 0;
    do
    {
      sub_60870D80(FIELD_U32(a1, 120) + v11);
      v11 += 104;
      --v10;
    }
    while ( v10 );
  }
  FIELD_U32(a1, 168) = 0;
  return 0;
}

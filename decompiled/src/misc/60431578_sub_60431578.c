/* sub_60431578
 * address: 0x60431578   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60431578(int a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r6
  int v5; // r8
  int v6; // r7
  int v7; // r5
  int v8; // r6

  if ( FIELD_U16(a1, 108) )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    do
    {
      v4 += sub_60428A4C();
      ++v3;
      v2 += 184;
    }
    while ( v3 < FIELD_U16(a1, 108) );
    v5 = v4 + 40;
  }
  else
  {
    v5 = 40;
  }
  if ( !FIELD_U16(a1, 106) )
    return v5;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    v8 += sub_6044759C(FIELD_U32(a1, 48) + v6);
    ++v7;
    v6 += 112;
  }
  while ( v7 < FIELD_U16(a1, 106) );
  return v5 + v8;
}

/* sub_60870A0C
 * address: 0x60870A0C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870A0C(int result, int a2)
{
  int v2; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r6
  int v7; // r7
  int v8; // r6
  int v9; // r7

  v2 = result;
  v4 = FIELD_U16(result, 108);
  if ( FIELD_U16(result, 108) )
  {
    v5 = 0;
    do
    {
      result = sub_6086F6F8(FIELD_U32(v2, 64) + v5, a2);
      v5 += 184;
      --v4;
    }
    while ( v4 );
  }
  v6 = FIELD_U16(v2, 106);
  if ( FIELD_U16(v2, 106) )
  {
    v7 = 0;
    do
    {
      result = g3d_index_ref(FIELD_U32(v2, 48) + v7, a2);
      v7 += 112;
      --v6;
    }
    while ( v6 );
  }
  v8 = FIELD_U16(v2, 104);
  if ( FIELD_U16(v2, 104) )
  {
    v9 = 0;
    do
    {
      result = g3d_vertex_ref(FIELD_U32(v2, 40) + v9, a2);
      v9 += 96;
      --v8;
    }
    while ( v8 );
  }
  return result;
}

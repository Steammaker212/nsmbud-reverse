/* sub_60870AA0
 * address: 0x60870AA0   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870AA0(int result, int a2, int a3, int a4)
{
  int v4; // r7
  int v8; // r4
  int v9; // r5
  int v10; // r4
  int v11; // r5
  int v12; // r4
  int v13; // r5

  v4 = result;
  v8 = FIELD_U16(result, 108);
  if ( FIELD_U16(result, 108) )
  {
    v9 = 0;
    do
    {
      result = sub_6086F6F8(FIELD_U32(v4, 64) + v9, a2);
      v9 += 184;
      --v8;
    }
    while ( v8 );
  }
  v10 = FIELD_U16(v4, 106);
  if ( FIELD_U16(v4, 106) )
  {
    v11 = 0;
    do
    {
      result = g3d_index_ref_2(FIELD_U32(v4, 48) + v11, a2, a3, a4);
      v11 += 112;
      --v10;
    }
    while ( v10 );
  }
  v12 = FIELD_U16(v4, 104);
  if ( FIELD_U16(v4, 104) )
  {
    v13 = 0;
    do
    {
      result = g3d_vertex_ref_2(FIELD_U32(v4, 40) + v13, a2, a3, a4);
      v13 += 96;
      --v12;
    }
    while ( v12 );
  }
  return result;
}

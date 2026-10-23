/* g3d_index_ref_2
 * address: 0x60872178   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall g3d_index_ref_2(int result, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // r7
  int v8; // r8
  _DWORD *v9; // r9
  int v10; // r5
  _DWORD *v11; // r6
  int v12; // [sp+10h] [bp-28h]

  v4 = FIELD_U8(result, 103);
  if ( FIELD_U8(result, 103) )
  {
    v8 = 0;
    v12 = result;
    do
    {
      v9 = (_DWORD *)(FIELD_U32(result, 32) + v8);
      v10 = v9[4];
      v11 = (_DWORD *)v9[6];
      sub_608353A4(v10);
      v11[1] = 8;
      sub_608353C0(v10, a2, v11, a3, v9[8] + a4);
      sub_608A7D8C(v10, "g3d_index");
      result = v12;
      v8 += 56;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

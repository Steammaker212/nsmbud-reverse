/* g3d_index_ref
 * address: 0x608720EC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall g3d_index_ref(int result, _DWORD *a2)
{
  int v2; // r9
  int v4; // r5
  int v5; // r6
  int v6; // r11
  int v7; // r7
  _DWORD *v8; // r4

  v2 = result;
  v4 = FIELD_U8(result, 103);
  if ( FIELD_U8(result, 103) )
  {
    v5 = 0;
    do
    {
      v6 = FIELD_U32(v2, 32) + v5;
      v7 = FIELD_U32(v6, 16);
      v8 = *(_DWORD **)(v6 + 24);
      sub_608353A4(v7);
      v8[1] = 8;
      sub_608353C0(v7, a2, v8, *(_DWORD **)(v6 + 8), FIELD_U32(v6, 32));
      result = sub_608A7D8C(v7, "g3d_index");
      v5 += 56;
      --v4;
    }
    while ( v4 );
  }
  return result;
}

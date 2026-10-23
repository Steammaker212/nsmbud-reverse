/* g3d_vertex_ref_2
 * address: 0x60871F4C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall g3d_vertex_ref_2(unsigned int result, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // r6
  int v5; // r11
  int v6; // r7
  int v7; // r8
  int v8; // r9
  int v9; // r5
  int v10; // r10
  int v11; // r4
  int v12; // r0

  v4 = (_DWORD *)result;
  v5 = FIELD_U8(result, 85);
  if ( FIELD_U8(result, 85) )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = FIELD_U32(result, 80) + a4;
    do
    {
      *(_DWORD *)(v4[12] + 4 * v8) = v4[10] + v7;
      v10 = v4[14];
      v11 = *(_DWORD *)(v4[12] + 4 * v8);
      sub_608353A4(v11);
      *(_DWORD *)(v10 + v6 + 4) = 4;
      sub_608353C0(v11, a2, (_DWORD *)(v10 + v6), a3, v9);
      sub_608A7D8C(v11, "g3d_vertex");
      v12 = *(_DWORD *)(v10 + v6);
      ++v8;
      v6 += 16;
      v7 += 72;
      result = (v12 + 7) & 0xFFFFFFF8;
      v9 += result;
    }
    while ( v5 != v8 );
  }
  return result;
}

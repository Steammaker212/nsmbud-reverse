/* g3d_vertex_ref
 * address: 0x60871E8C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall g3d_vertex_ref(unsigned int result, _DWORD *a2)
{
  unsigned int v2; // r5
  int v3; // r10
  int v4; // r4
  int v5; // r6
  int v6; // r11
  int v7; // r8
  int v8; // r9
  int v9; // r7
  int v10; // r0

  v2 = result;
  v3 = FIELD_U8(result, 85);
  if ( FIELD_U8(result, 85) )
  {
    v4 = FIELD_U32(result, 80);
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      *(_DWORD *)(FIELD_U32(v2, 48) + 4 * v7) = FIELD_U32(v2, 40) + v6;
      v8 = FIELD_U32(v2, 56);
      v9 = *(_DWORD *)(FIELD_U32(v2, 48) + 4 * v7);
      sub_608353A4(v9);
      *(_DWORD *)(v8 + v5 + 4) = 4;
      sub_608353C0(v9, a2, (_DWORD *)(v8 + v5), *(_DWORD **)(v2 + 32), v4);
      sub_608A7D8C(v9, "g3d_vertex");
      v10 = *(_DWORD *)(v8 + v5);
      ++v7;
      v5 += 16;
      v6 += 72;
      result = (v10 + 7) & 0xFFFFFFF8;
      v4 += result;
    }
    while ( v3 != v7 );
  }
  return result;
}

/* Pokey__vfE0
 * address: 0x60384BBC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A33A8
// 
// Overridden by: None
_DWORD *__fastcall Pokey__vfE0(int a1)
{
  int v2; // r7
  int v3; // r4
  int v4; // r5
  _DWORD *result; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r2
  float v9; // s0
  int v10; // r3
  int v11; // r2

  v2 = FIELD_U32(a1, 6304);
  v3 = FIELD_U32(a1, 6300);
  if ( v3 )
  {
    v4 = FIELD_U32(a1, 6324);
    do
    {
      if ( *(_BYTE *)(*(_DWORD *)v2 + 128) )
        sub_60386364(*(_DWORD *)(*(_DWORD *)v2 + 4), *(_DWORD *)v2 + 72, *(_DWORD *)(*(_DWORD *)v2 + 8), v4--);
      v2 += 4;
      --v3;
    }
    while ( v3 );
  }
  result = (_DWORD *)(a1 + 6364);
  v6 = FIELD_U32(a1, 6364);
  v7 = v6 == 0;
  if ( v6 )
    v7 = FIELD_U8(a1, 6368) == 0;
  if ( !v7 )
  {
    v8 = **(_DWORD **)(a1 + 6304);
    v9 = FIELD_F32(v8, 76);
    v10 = FIELD_U32(v8, 80);
    v11 = FIELD_U32(v8, 72);
    FIELD_U32(v6, 4) = 1111490560;
    FIELD_U32(v6, 12) = v11;
    FIELD_F32(v6, 16) = v9 + 0.0;
    FIELD_U32(v6, 20) = v10;
    return (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*result + 4))(*result);
  }
  return result;
}

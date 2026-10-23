/* sub_6095C088
 * address: 0x6095C088   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095C088(int a1, _DWORD *a2)
{
  int v2; // r10
  int v4; // r9
  int v5; // r8
  int v6; // r4
  int v7; // r6
  int v8; // r11
  int v9; // t1
  int v10; // r0
  int v11; // r1
  int i; // r2

  v2 = FIELD_U32(a1, 400);
  v4 = -1;
  if ( v2 )
  {
    v5 = FIELD_U32(a1, 404);
    v6 = 0;
    while ( 1 )
    {
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v7 = v5 + 2088 * v6;
      v8 = a2[1];
      v9 = FIELD_U32(v7, 84);
      v7 += 84;
      (*(void (__fastcall **)(int))(v9 + 12))(v7);
      v10 = FIELD_U32(v7, 4);
      if ( v8 == v10 )
        break;
      v11 = a2[1];
      for ( i = 1; *(unsigned __int8 *)(v11 + i - 1) == *(unsigned __int8 *)(v10 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v11 + i - 1) )
          return v6;
        if ( i > 0x80000 || *(unsigned __int8 *)(v11 + i) != *(unsigned __int8 *)(v10 + i) )
          break;
        if ( !*(_BYTE *)(v11 + i) )
          return v6;
      }
      if ( ++v6 == v2 )
        return v4;
    }
    return v6;
  }
  return v4;
}

/* sub_6098AAD8
 * address: 0x6098AAD8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098AAD8(int a1, _DWORD *a2)
{
  int v2; // r7
  int v4; // r8
  int v5; // r9
  int v6; // r10
  int v7; // r4
  int v8; // r6
  int v9; // r0
  int v10; // r1
  int i; // r2

  v2 = FIELD_U32(a1, 8);
  v4 = 0;
  if ( v2 != a1 + 4 )
  {
    v5 = FIELD_U32(a1, 16);
    v6 = a1 + 4 - v5;
    v7 = v2 - v5;
    while ( 1 )
    {
      (*(void (__fastcall **)(int))(FIELD_U32(v7, 28) + 12))(v7 + 28);
      (*(void (__fastcall **)(int))(FIELD_U32(v7, 28) + 12))(v7 + 28);
      v8 = FIELD_U32(v7, 32);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v9 = a2[1];
      if ( v8 == v9 )
        break;
      v10 = FIELD_U32(v7, 32);
      for ( i = 1; *(unsigned __int8 *)(v10 + i - 1) == *(unsigned __int8 *)(v9 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v10 + i - 1) )
          return v7;
        if ( i > 0x80000 || *(unsigned __int8 *)(v10 + i) != *(unsigned __int8 *)(v9 + i) )
          break;
        if ( !*(_BYTE *)(v10 + i) )
          return v7;
      }
      v2 = FIELD_U32(v2, 4);
      v7 = v2 - v5;
      if ( v2 - v5 == v6 )
        return v4;
    }
    return v7;
  }
  return v4;
}

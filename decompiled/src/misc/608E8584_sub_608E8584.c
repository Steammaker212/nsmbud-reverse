/* sub_608E8584
 * address: 0x608E8584   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E8584(int a1, _DWORD *a2)
{
  int v2; // r7
  int v3; // r9
  int v5; // r8
  int v6; // r5
  int v7; // r6
  int v8; // r0
  int v9; // r1
  int i; // r2

  v2 = FIELD_U32(a1, 20);
  v3 = a1 + 16;
  v5 = 0;
  if ( v2 != a1 + 16 )
  {
    while ( 1 )
    {
      v6 = FIELD_U32(v2, 8);
      (*(void (__fastcall **)(int))(FIELD_U32(v6, 32) + 12))(v6 + 32);
      (*(void (__fastcall **)(int))(FIELD_U32(v6, 32) + 12))(v6 + 32);
      v7 = FIELD_U32(v6, 36);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v8 = a2[1];
      if ( v7 == v8 )
        break;
      v9 = FIELD_U32(v6, 36);
      for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == *(unsigned __int8 *)(v8 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v9 + i - 1) )
          return FIELD_U32(v2, 8);
        if ( i > 0x80000 || *(unsigned __int8 *)(v9 + i) != *(unsigned __int8 *)(v8 + i) )
          break;
        if ( !*(_BYTE *)(v9 + i) )
          return FIELD_U32(v2, 8);
      }
      v2 = FIELD_U32(v2, 4);
      if ( v2 == v3 )
        return v5;
    }
    return FIELD_U32(v2, 8);
  }
  return v5;
}

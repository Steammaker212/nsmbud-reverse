/* sub_6091F9A0
 * address: 0x6091F9A0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091F9A0(int a1, _DWORD *a2)
{
  int v2; // r10
  int v4; // r9
  int v5; // r8
  int v6; // r4
  _DWORD *v7; // r6
  int v8; // r11
  int v9; // r0
  int v10; // r1
  int i; // r2

  v2 = FIELD_U32(a1, 28);
  v4 = -1;
  if ( v2 )
  {
    v5 = FIELD_U32(a1, 32);
    v6 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD **)(v5 + 936 * v6 + 4);
      (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
      (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
      v8 = v7[1];
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v9 = a2[1];
      if ( v8 == v9 )
        break;
      v10 = v7[1];
      for ( i = 1; *(unsigned __int8 *)(v10 + i - 1) == *(unsigned __int8 *)(v9 + i - 1); i += 2 )
      {
        if ( !*(_BYTE *)(v10 + i - 1) )
          return v6;
        if ( i > 0x80000 || *(unsigned __int8 *)(v10 + i) != *(unsigned __int8 *)(v9 + i) )
          break;
        if ( !*(_BYTE *)(v10 + i) )
          return v6;
      }
      if ( ++v6 == v2 )
        return v4;
    }
    return v6;
  }
  return v4;
}

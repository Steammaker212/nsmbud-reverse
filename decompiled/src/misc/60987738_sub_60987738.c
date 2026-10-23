/* sub_60987738
 * address: 0x60987738   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60987738(int a1, _DWORD *a2)
{
  int v2; // r9
  int v4; // r8
  int v5; // r11
  int v6; // r7
  int v7; // r0
  int v8; // r1
  int i; // r2

  v2 = FIELD_U32(a1, 28);
  if ( !v2 )
    return 0;
  v4 = FIELD_U32(a1, 32);
  v5 = 0;
  while ( 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v6 = a2[1];
    (*(void (__fastcall **)(int))(*(_DWORD *)(v4 + 52 * v5) + 12))(v4 + 52 * v5);
    v7 = *(_DWORD *)(v4 + 52 * v5 + 4);
    if ( v6 == v7 )
      break;
    v8 = a2[1];
    for ( i = 1; *(unsigned __int8 *)(v8 + i - 1) == *(unsigned __int8 *)(v7 + i - 1); i += 2 )
    {
      if ( !*(_BYTE *)(v8 + i - 1) )
        return v4 + 52 * v5 + 8;
      if ( i > 0x80000 || *(unsigned __int8 *)(v8 + i) != *(unsigned __int8 *)(v7 + i) )
        break;
      if ( !*(_BYTE *)(v8 + i) )
        return v4 + 52 * v5 + 8;
    }
    if ( ++v5 == v2 )
      return 0;
  }
  return v4 + 52 * v5 + 8;
}

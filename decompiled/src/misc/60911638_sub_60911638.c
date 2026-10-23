/* sub_60911638
 * address: 0x60911638   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60911638(int a1, int a2)
{
  int v2; // r10
  int v4; // r5
  int v6; // r11
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int result; // r0
  unsigned int v11; // r7
  unsigned int v12; // r8
  int i; // r6
  int v14; // r9

  v2 = FIELD_U32(a1, 16);
  if ( v2 == -1 )
    return -2;
  v4 = 0;
  while ( *(_BYTE *)(a2 + v4++) )
    ;
  v6 = FIELD_U32(a1, 12);
  v7 = sub_609133D0(a2, **(_DWORD **)(v6 + 16 * v2));
  v8 = *(_DWORD *)(v6 + 16 * v2);
  v9 = (8 * v7) | 4;
  result = -1;
  v11 = *(_DWORD *)(v8 + v9);
  if ( v11 )
  {
    v12 = 1;
    for ( i = *(_DWORD *)(v8 + v9 + 4); ; i += v14 + 5 )
    {
      v14 = *(unsigned __int8 *)(v8 + i);
      if ( v14 + 1 == v4 )
      {
        if ( sub_60913448(a2, v8 + i + 1, v4 - 1) )
          break;
      }
      if ( v12 >= v11 )
        return -1;
      v8 = *(_DWORD *)(v6 + 16 * v2);
      ++v12;
    }
    return *(_DWORD *)(*(_DWORD *)(v6 + 16 * v2) + i + v4);
  }
  return result;
}

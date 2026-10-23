/* sub_608612C8
 * address: 0x608612C8   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608612C8(int a1, int a2, int a3)
{
  int v4; // r1
  int v5; // r3
  int v6; // r6
  int v7; // lr
  int i; // r8
  int v9; // r6
  int v10; // r5
  int v11; // r6
  int v12; // r5

  v4 = FIELD_U32(a1, 220);
  if ( v4 )
  {
    v5 = FIELD_U32(v4, 28);
    v6 = 0;
    while ( *(unsigned __int8 *)(v5 + v6) == *(unsigned __int8 *)(a2 + v6) )
    {
      if ( *(_BYTE *)(v5 + v6) )
      {
        if ( ++v6 < 28 )
          continue;
      }
      return v4;
    }
  }
  v7 = FIELD_S8(a1, 213);
  if ( v7 >= 1 )
  {
    for ( i = 0; i < v7; ++i )
    {
      v9 = 0;
      v4 = *(_DWORD *)(FIELD_U32(a1, 216) + 8 * i + 4);
      while ( 1 )
      {
        v10 = FIELD_U32(v4, 28);
        if ( *(unsigned __int8 *)(v10 + v9) != *(unsigned __int8 *)(a2 + v9) )
          break;
        if ( *(_BYTE *)(v10 + v9) )
        {
          if ( ++v9 < 28 )
            continue;
        }
        return v4;
      }
    }
  }
  if ( a3 != 1 )
    return 0;
  v11 = FIELD_U32(a1, 20);
  v12 = a1 + 16;
  if ( v11 == a1 + 16 )
    return 0;
  while ( 1 )
  {
    v4 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)(v11 - 4) + 56))(v11 - 4, a2, 1);
    if ( v4 )
      break;
    v11 = FIELD_U32(v11, 4);
    if ( v11 == v12 )
      return 0;
  }
  return v4;
}

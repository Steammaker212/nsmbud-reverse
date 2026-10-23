/* sub_605FFD60
 * address: 0x605FFD60   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605FFD60(int a1, float a2, float a3)
{
  __int16 *v4; // r0
  __int16 v5; // r1
  int v6; // t1
  __int16 v7; // r1
  int v8; // r8
  unsigned __int8 v10; // r7
  int v11; // r0
  unsigned int v12; // r0
  unsigned __int8 v13; // r3
  int v14; // r7

  v6 = FIELD_U16(a1, 6828);
  v4 = (__int16 *)(a1 + 6828);
  v5 = v6;
  if ( v6 )
  {
    v7 = v5 - 1;
    v8 = 0;
    *v4 = v7;
    if ( v7 <= 0 )
    {
      if ( a2 < a3 )
      {
        sub_605FFA34(a1);
        return 0;
      }
      if ( a3 < a2 )
      {
        chidimi_ref_5FFB18(a1);
        return 0;
      }
    }
  }
  else
  {
    v8 = 1;
    if ( FIELD_U8(a1, 6879) )
    {
      v10 = 0;
      do
      {
        v11 = v10;
        if ( v10 >= 0xFu )
          v11 = 0;
        Animation_update(**(_DWORD **)(*(_DWORD *)(a1 + 4 * v11 + 6104) + 12));
        v12 = FIELD_U8(a1, 6879);
        ++v10;
      }
      while ( v10 < v12 );
      if ( FIELD_U8(a1, 6879) )
      {
        v13 = 0;
        while ( 1 )
        {
          v14 = v13;
          if ( v13 >= 0xFu )
            v14 = 0;
          if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(a1 + 4 * v14 + 6104) + 12) + 28) & 0x20) == 0 )
            break;
          if ( ++v13 >= v12 )
            return v8;
        }
        return 0;
      }
    }
  }
  return v8;
}

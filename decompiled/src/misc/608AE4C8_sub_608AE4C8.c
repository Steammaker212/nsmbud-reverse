/* sub_608AE4C8
 * address: 0x608AE4C8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608AE4C8(int a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r12
  int i; // lr
  int v6; // r0
  int v7; // r4
  int v8; // r3

  v2 = 0;
  while ( *(_BYTE *)(a2 + v2) )
  {
    if ( !*(_BYTE *)(a2 + v2 + 1) )
    {
      ++v2;
      break;
    }
    v2 += 2;
    if ( v2 == 64 )
      break;
  }
  v3 = 0;
  if ( v2 != 64 )
  {
    v4 = a1 + 20;
    for ( i = 0; i != 64; i += 2 )
    {
      v7 = a2 + i;
      v6 = *(unsigned __int8 *)(a2 + i);
      v8 = *(unsigned __int8 *)(v4 + i);
      if ( !*(_BYTE *)(a2 + i) )
        break;
      if ( v6 != v8 )
        break;
      v6 = FIELD_U8(v7, 1);
      v8 = *(unsigned __int8 *)(v4 + i + 1);
      if ( !FIELD_U8(v7, 1) )
        break;
      if ( v6 != v8 )
        break;
      v8 = FIELD_U8(v7, 1);
    }
    return v6 == v8;
  }
  return v3;
}

/* Pokey__collisionIceball
 * address: 0x60383520   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by: None
int __fastcall Pokey__collisionIceball(int a1, int a2, int a3)
{
  int *v4; // r4
  int v5; // r6
  int v6; // t1
  int *v7; // r5
  int v8; // r7
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r0
  int *v13; // r1
  int v14; // r2

  sub_603823D4(a1, FIELD_U32(a3, 64));
  v6 = FIELD_U32(a1, 6304);
  v4 = (int *)(a1 + 6304);
  v5 = v6;
  v7 = v4 - 1;
  v8 = *(v4 - 1);
  if ( v8 )
  {
    do
    {
      if ( *(_BYTE *)(*(_DWORD *)v5 + 128) )
        sub_60386654(*(_DWORD *)v5 + 12, 5);
      v5 += 4;
      --v8;
    }
    while ( v8 );
    v9 = *v7;
    if ( *v7 )
    {
      v10 = *v4;
      v11 = 0;
      if ( (v9 & 1) != 0 )
      {
        *(_BYTE *)(*(_DWORD *)v10 + 242) |= 2u;
        v11 = 1;
      }
      if ( v9 != 1 )
      {
        v12 = v9 - v11;
        v13 = (int *)(v10 + 4 * v11 + 4);
        do
        {
          v12 -= 2;
          *(_BYTE *)(*(v13 - 1) + 242) |= 2u;
          v14 = *v13;
          v13 += 2;
          FIELD_U8(v14, 242) |= 2u;
        }
        while ( v12 );
      }
    }
  }
  return 1;
}

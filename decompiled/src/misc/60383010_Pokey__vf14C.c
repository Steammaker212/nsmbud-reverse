/* Pokey__vf14C
 * address: 0x60383010   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A7138
// 
// Overridden by: None
int __fastcall Pokey__vf14C(_DWORD *a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r0
  int v8; // r3
  int v9; // r2
  int v10; // r1
  int *v11; // r2
  int v12; // r3

  if ( !sub_602A588C((int)a1) )
  {
    v6 = a1[1575];
    v7 = FIELD_U32(a2, 104);
    if ( v6 )
    {
      v8 = 0;
      v9 = a1[1576];
      if ( (v6 & 1) != 0 )
      {
        *(_BYTE *)(*(_DWORD *)v9 + 242) |= 2u;
        v8 = 1;
      }
      if ( v6 != 1 )
      {
        v10 = v6 - v8;
        v11 = (int *)(v9 + 4 * v8 + 4);
        do
        {
          v10 -= 2;
          *(_BYTE *)(*(v11 - 1) + 242) |= 2u;
          v12 = *v11;
          v11 += 2;
          FIELD_U8(v12, 242) |= 2u;
        }
        while ( v10 );
      }
    }
    FIELD_U8(a3, 110) |= 2u;
    a1[1590] = v7;
  }
  return 1;
}

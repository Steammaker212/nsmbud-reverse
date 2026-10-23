/* PlayerStates_loadModelResources_helper_872AC4
 * address: 0x60872AC4   size: 144   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_loadModelResources_helper_872AC4(_DWORD *a1, int *a2, int a3, unsigned int a4)
{
  int result; // r0
  int v8; // r2
  int v9; // r7
  _DWORD *v10; // r0
  int v11; // r1

  result = 0;
  if ( a2[3] )
  {
    v8 = *a2;
    if ( *a2 >= 0 && a2[2] <= a4 )
    {
      v9 = 0;
      v10 = a1 + 8;
      a1[13] = a3;
      a1[15] = 0;
      if ( a3 )
      {
        v11 = a2[8];
        if ( v11 )
          v11 = a3 + a2[11];
        sub_6086A3DC(v10, v11, v8);
        if ( a2[4] )
          v9 = a3 + a2[7];
      }
      else
      {
        v9 = 0;
        sub_6086A3DC(v10, 0, v8);
      }
      a1[12] = v9;
      return 1;
    }
  }
  return result;
}

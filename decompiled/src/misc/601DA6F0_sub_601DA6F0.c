/* sub_601DA6F0
 * address: 0x601DA6F0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_601DA6F0(int *a1, _DWORD *a2)
{
  int v4; // r2
  int v5; // r0
  unsigned int v6; // r6
  int v7; // r9
  int v8; // r7
  int v9; // r0
  int v10; // r8
  int v12; // r7
  int v13; // r0

  if ( *a1 == *a2 )
  {
    v4 = a1[1];
    if ( v4 == a2[1] )
    {
      v5 = sub_601A443C(dword_60C89E18, *a1, v4);
      v6 = *a1;
      v7 = v5;
      if ( ((0x1D3u >> *a1) & 1) == 0 )
      {
        v8 = dword_60AFD08C[v6];
        v9 = *a1;
        if ( v6 >= 9 )
          v9 = 0;
        v10 = *(_DWORD *)(dword_60CC6D78 + 4 * v9 + 760);
        if ( sub_60183054(v7, a1[2], dword_60AFD08C[v6]) && sub_60183054(v7, a2[2], v8) )
        {
          if ( !v10 )
            return 1;
        }
        else
        {
          v12 = dword_60AFD0B0[v6];
          if ( sub_60183054(v7, a1[2], v12) )
          {
            v13 = sub_60183054(v7, a2[2], v12);
            if ( v10 == 1 )
              return v13 != 0;
          }
        }
      }
    }
  }
  return 0;
}

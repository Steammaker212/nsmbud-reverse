/* sub_60456064
 * address: 0x60456064   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456064(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r0

  v2 = (int)(a1 + 4);
  if ( !sub_60455378(a1 + 4, 0) )
  {
    v3 = a1[1];
    if ( v3 >= 1 )
    {
      if ( (v3 & 3) != 0 )
      {
        v4 = 0;
        do
          *(_BYTE *)(a1[2] + v4++) = 0;
        while ( (v3 & 3) != v4 );
      }
      else
      {
        v4 = 0;
      }
      if ( (unsigned int)(v3 - 1) >= 3 )
      {
        v5 = v4 + 3;
        v6 = -v3;
        do
        {
          *(_BYTE *)(a1[2] + v5 - 3) = 0;
          *(_BYTE *)(a1[2] + v5 - 2) = 0;
          *(_BYTE *)(a1[2] + v5 - 1) = 0;
          *(_BYTE *)(a1[2] + v5) = 0;
          v5 += 4;
        }
        while ( v6 + v5 != 3 );
      }
    }
  }
  sub_60905318(a1[3]);
  return sub_60455A58(a1[3], v2);
}

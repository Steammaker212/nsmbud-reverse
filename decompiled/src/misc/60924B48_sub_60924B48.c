/* sub_60924B48
 * address: 0x60924B48   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60924B48(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _BYTE **v4; // r5
  int v5; // r6
  _BYTE *v6; // t1
  int v7; // r5
  _BYTE **v8; // r6
  int v9; // r0

  v2 = a1[121];
  if ( (v2 & 1) != 0 )
  {
    a1[122] = 0;
    v7 = a1[5];
    if ( v7 )
    {
      v8 = (_BYTE **)a1[6];
      do
      {
        if ( (*v8)[48] )
        {
          sub_609232C4(*v8);
          v9 = a1[122];
          if ( v9 < a1[123] )
          {
            *(_DWORD *)(a1[124] + 4 * v9) = *v8;
            ++a1[122];
          }
        }
        --v7;
        ++v8;
      }
      while ( v7 );
      v2 = a1[121];
    }
    a1[121] = v2 & 0xFFFFFFFE;
  }
  else
  {
    v3 = a1[122];
    if ( v3 )
    {
      v4 = (_BYTE **)a1[124];
      v5 = 4 * v3;
      do
      {
        v6 = *v4++;
        sub_609232C4(v6);
        v5 -= 4;
      }
      while ( v5 );
    }
  }
  return sub_60940E3C(a1 + 7);
}

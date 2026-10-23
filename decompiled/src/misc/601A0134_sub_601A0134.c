/* sub_601A0134
 * address: 0x601A0134   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A0134(int a1)
{
  int result; // r0
  int v3; // r2
  int *v4; // r0
  _DWORD *v5; // r6
  int v6; // r3
  bool v7; // zf
  _DWORD *v8; // r5
  _DWORD *v9; // r6
  int v10; // r7
  _DWORD *v11; // r7

  result = FIELD_U8(dword_60C8C188, 3225);
  if ( !FIELD_U8(dword_60C8C188, 3225) )
  {
    sub_601AB228(a1 + 164);
    v3 = 0;
    v4 = (int *)(a1 + 16552);
    do
    {
      v5 = (_DWORD *)(a1 + 16 * v3);
      if ( (int)v5[6] >= 1 )
      {
        v6 = v5[5];
        v7 = v6 == 0;
        if ( v6 )
        {
          v6 -= v5[7];
          v7 = v6 == 0;
        }
        if ( !v7 )
        {
          v8 = v5 + 4;
          v9 = v5 + 7;
          do
          {
            v10 = *v4;
            if ( !((unsigned int)*v4 >> 12) )
            {
              *v4 = v10 + 1;
              *(_DWORD *)(a1 + 4 * v10 + 168) = v6;
            }
            v11 = *(_DWORD **)(*v9 + v6 + 4);
            v6 = (int)v11 - *v9;
            if ( v11 == v8 )
              v6 = 0;
          }
          while ( v6 );
        }
      }
      ++v3;
    }
    while ( v3 != 9 );
    sub_601AB238(a1 + 164);
    return sub_6021927C((_DWORD *)dword_60C8D3F0);
  }
  return result;
}

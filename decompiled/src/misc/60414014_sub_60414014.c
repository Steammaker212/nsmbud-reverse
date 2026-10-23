/* sub_60414014
 * address: 0x60414014   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60414014(int a1)
{
  int i; // r8
  _DWORD *v3; // r10
  _DWORD *v4; // r5
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  _DWORD *v7; // r0
  int result; // r0
  _DWORD *v9; // r5
  int *v10; // r4
  _DWORD *v11; // r7

  for ( i = 0; i != 4; ++i )
  {
    v3 = (_DWORD *)(a1 + 21528 * i);
    v4 = (_DWORD *)v3[5];
    if ( v4 != v3 + 4 )
    {
      v5 = v3 + 7;
      do
      {
        v6 = (_DWORD *)v4[1];
        sead__ListNode__erase(v4);
        --v3[6];
        *(v4 - 19) = *v5;
        v7 = v4 - 19;
        v4 = v6;
        *v5 = v7;
      }
      while ( v6 != v3 + 4 );
    }
    result = 86132;
    v9 = (_DWORD *)v3[21533];
    if ( v9 != v3 + 21532 )
    {
      v10 = v3 + 21535;
      do
      {
        v11 = (_DWORD *)v9[1];
        sead__ListNode__erase(v9);
        --v3[21534];
        *(v9 - 19) = *v10;
        result = (int)(v9 - 19);
        v9 = v11;
        *v10 = result;
      }
      while ( v11 != v3 + 21532 );
    }
  }
  return result;
}

/* sub_601A0204
 * address: 0x601A0204   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A0204(int a1, int a2)
{
  int v2; // r5
  int i; // r6
  _DWORD *v5; // r0
  int v6; // r1
  bool v7; // zf
  int v8; // r2
  _DWORD *v9; // r4
  _DWORD *v10; // r7
  _DWORD *v11; // r1

  sub_604431BC(DrawMgr_instance, a2, 1);
  for ( i = 0; i != 9; ++i )
  {
    v5 = (_DWORD *)(a1 + 16 * dword_60AFC0C8[i]);
    if ( (int)v5[6] >= 1 )
    {
      v6 = v5[5];
      v7 = v6 == 0;
      if ( v6 )
      {
        v8 = v5[7];
        v2 = v6 - v8;
        v7 = v6 == v8;
      }
      if ( !v7 )
      {
        v9 = v5 + 4;
        v10 = v5 + 7;
        do
        {
          sub_60223718(v2);
          v11 = *(_DWORD **)(*v10 + v2 + 4);
          v2 = (int)v11 - *v10;
          if ( v11 == v9 )
            v2 = 0;
        }
        while ( v2 );
      }
    }
  }
  return sub_60443298(DrawMgr_instance);
}

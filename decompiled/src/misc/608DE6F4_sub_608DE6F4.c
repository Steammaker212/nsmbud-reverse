/* sub_608DE6F4
 * address: 0x608DE6F4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608DE6F4(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r12
  _DWORD *v5; // lr
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r0

  if ( a2 != a3 )
  {
    v3 = (_DWORD *)*a3;
    v4 = (_DWORD *)*a2;
    if ( (_DWORD *)*a3 != a2 )
    {
      if ( v4 )
        v4[1] = a2[1];
      v5 = (_DWORD *)a2[1];
      if ( v5 )
        *v5 = *a2;
      *a2 = 0;
      a2[1] = 0;
      v6 = (_DWORD *)v3[1];
      v3[1] = a2;
      *a2 = v3;
      a2[1] = v6;
      if ( v6 )
        *v6 = a2;
    }
    if ( v4 != a3 )
    {
      if ( *a3 )
        *(_DWORD *)(*a3 + 4) = a3[1];
      v7 = (_DWORD *)a3[1];
      if ( v7 )
        *v7 = *a3;
      *a3 = 0;
      a3[1] = 0;
      v8 = (_DWORD *)v4[1];
      v4[1] = a3;
      *a3 = v4;
      a3[1] = v8;
      if ( v8 )
        *v8 = a3;
    }
  }
}

/* sub_608CFCA4
 * address: 0x608CFCA4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFCA4(int a1, int a2, int a3)
{
  _DWORD *v3; // r4
  int v6; // r0
  int v7; // r6
  int v8; // r0
  bool v10; // cc

  v3 = *(_DWORD **)(a1 + 4);
  v6 = (*(int (__fastcall **)(_DWORD *))(*v3 + 32))(v3);
  v7 = v6;
  if ( a3 == 2 )
  {
    if ( a2 < 1 )
    {
      v7 = (*(int (__fastcall **)(_DWORD *))(*v3 + 28))(v3);
      if ( a2 < 0 )
      {
        v10 = v7 <= -a2;
        v7 = 0;
        if ( !v10 )
          v7 = (*(int (__fastcall **)(_DWORD *))(*v3 + 28))(v3) + a2;
      }
    }
    else
    {
      v8 = (*(int (__fastcall **)(_DWORD *))(*v3 + 28))(v3) + a2;
      if ( v8 <= v7 )
        v7 = v8;
    }
  }
  else if ( a3 == 1 )
  {
    if ( a2 < 0 )
      v7 = v6 - a2;
  }
  else
  {
    v7 = 0;
    if ( !a3 )
    {
      if ( a2 <= 0 )
        a2 = 0;
      v7 = a2;
    }
  }
  v3[4] = v7;
  return 0;
}

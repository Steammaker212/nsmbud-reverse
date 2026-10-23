/* sub_608CFA04
 * address: 0x608CFA04   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CFA04(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r0
  bool v10; // cc

  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 32))(a1);
  v7 = v6;
  if ( a3 == 2 )
  {
    if ( a2 < 1 )
    {
      v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
      if ( a2 < 0 )
      {
        v10 = v7 <= -a2;
        v7 = 0;
        if ( !v10 )
          v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1) + a2;
      }
    }
    else
    {
      v8 = (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1) + a2;
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
  a1[4] = v7;
  return 0;
}

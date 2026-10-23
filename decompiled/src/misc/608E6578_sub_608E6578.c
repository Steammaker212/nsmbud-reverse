/* sub_608E6578
 * address: 0x608E6578   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6578(_BYTE *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v7; // r4
  bool v8; // zf
  int v9; // r0

  v7 = 0;
  v8 = a2 == 0;
  if ( a2 )
    v8 = a1[76] == 0;
  if ( !v8 )
  {
    a2[11] = a5;
    v9 = (*(int (__fastcall **)(_BYTE *, _DWORD *))(*(_DWORD *)a1 + 48))(a1, a2);
    a2[1] = v9;
    if ( v9 )
    {
      v7 = v9;
      a2[2] = a1;
    }
  }
  return v7;
}

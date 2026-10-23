/* sub_6099BFFC
 * address: 0x6099BFFC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099BFFC(int a1, int a2, unsigned int a3)
{
  _WORD *v6; // r9
  int v7; // r5
  unsigned int v8; // r0
  int v9; // r7
  int v10; // r4

  v6 = (_WORD *)(a1 + 656);
  v7 = sub_608B1590((_WORD *)(a1 + 656));
  v8 = sub_608B1518(v6);
  v9 = v8;
  v10 = 0;
  if ( v7 != -1 && v8 <= a3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
    v10 = 0;
    sub_608CF668(a1 + 720, v7, 0);
    if ( sub_608CF59C((_DWORD *)(a1 + 720), a2, v9, 0) == v9 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
      sub_608B2198((int)v6, a2);
      return 1;
    }
  }
  return v10;
}

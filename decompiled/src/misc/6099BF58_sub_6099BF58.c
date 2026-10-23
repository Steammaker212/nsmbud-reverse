/* sub_6099BF58
 * address: 0x6099BF58   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099BF58(int a1, int a2, unsigned int a3)
{
  _WORD *v6; // r10
  int v7; // r9
  unsigned int v8; // r7
  int v9; // r4

  v6 = (_WORD *)(a1 + 656);
  v7 = sub_608B15C8((_WORD *)(a1 + 656));
  v8 = sub_608B1550(v6);
  v9 = 0;
  if ( v8 <= a3 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
    v9 = 0;
    sub_608CF668(a1 + 720, v7, 0);
    if ( sub_608CF59C((_DWORD *)(a1 + 720), a2, v8, 0) == v8 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
      sub_608B21A4((int)v6, a2);
      return 1;
    }
  }
  return v9;
}

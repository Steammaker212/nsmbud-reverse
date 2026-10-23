/* sub_608AA048
 * address: 0x608AA048   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AA048(int a1, int a2, int a3)
{
  int v6; // r4
  _BYTE *v7; // r0
  bool v8; // zf

  v6 = 0;
  if ( sub_608B2448(FIELD_U32(a1, 4), a2, a3, 0) == 1 )
  {
    v7 = *(_BYTE **)(a1 + 8);
    v6 = 1;
    v8 = v7 == 0;
    if ( v7 )
      v8 = v7[4] == 0;
    if ( !v8 )
      (*(void (__fastcall **)(_BYTE *, int, int, _DWORD))(*(_DWORD *)v7 + 48))(v7, a2, a3, 0);
  }
  return v6;
}

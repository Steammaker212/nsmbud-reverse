/* sub_608A9AEC
 * address: 0x608A9AEC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9AEC(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  _BYTE *v9; // r0
  int v10; // r0

  v8 = sub_608B2BAC(FIELD_U32(a1, 4));
  v9 = *(_BYTE **)(a1 + 8);
  if ( v9 )
  {
    if ( v9[4] )
      v10 = (*(int (__fastcall **)(_BYTE *, int, int, int))(*(_DWORD *)v9 + 76))(v9, a2, a3, a4);
    else
      v10 = 0;
    return v8 | v10;
  }
  return v8;
}

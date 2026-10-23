/* sub_608A9F2C
 * address: 0x608A9F2C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9F2C(int a1, int a2, int a3)
{
  int v6; // r4
  _BYTE *v7; // r0
  int v8; // r0

  v6 = sub_608B24BC(FIELD_U32(a1, 4));
  v7 = *(_BYTE **)(a1 + 8);
  if ( v7 )
  {
    if ( v7[4] )
      v8 = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v7 + 44))(v7, a2, a3);
    else
      v8 = 0;
    return v6 | v8;
  }
  return v6;
}

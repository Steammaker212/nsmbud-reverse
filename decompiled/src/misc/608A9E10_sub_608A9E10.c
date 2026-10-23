/* sub_608A9E10
 * address: 0x608A9E10   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9E10(int a1, int a2)
{
  int v4; // r4
  _BYTE *v5; // r0
  int v6; // r0

  v4 = sub_608B2504(FIELD_U32(a1, 4));
  v5 = *(_BYTE **)(a1 + 8);
  if ( v5 )
  {
    if ( v5[4] )
      v6 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 52))(v5, a2);
    else
      v6 = 0;
    return v4 | v6;
  }
  return v4;
}

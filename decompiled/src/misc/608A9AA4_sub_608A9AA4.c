/* sub_608A9AA4
 * address: 0x608A9AA4   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9AA4(int a1, int a2)
{
  int v4; // r2
  _BYTE *v5; // r0
  bool v6; // zf

  v4 = sub_608B2B88(FIELD_U32(a1, 4));
  v5 = *(_BYTE **)(a1 + 8);
  v6 = v5 == 0;
  if ( v5 )
    v6 = v5[4] == 0;
  if ( v6 )
    return v4;
  else
    return (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v5 + 80))(v5, a2, v4);
}

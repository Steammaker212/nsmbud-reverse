/* sub_608E6B4C
 * address: 0x608E6B4C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6B4C(_BYTE *a1, int a2)
{
  int v4; // r4
  bool v5; // zf
  int v6; // r0

  v4 = 0;
  v5 = a2 == 0;
  if ( a2 )
    v5 = a1[76] == 0;
  if ( !v5 )
  {
    v6 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 96))(a1, a2);
    FIELD_U32(a2, 4) = v6;
    if ( v6 )
    {
      v4 = v6;
      FIELD_U32(a2, 8) = a1;
    }
  }
  return v4;
}

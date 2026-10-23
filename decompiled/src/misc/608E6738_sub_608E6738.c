/* sub_608E6738
 * address: 0x608E6738   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6738(_BYTE *a1, int a2)
{
  int v4; // r4
  bool v5; // zf

  v4 = 0;
  v5 = a2 == 0;
  if ( a2 )
    v5 = a1[76] == 0;
  if ( !v5
    && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 32))(a1, a2) == 1
    && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 52))(a1, a2) == 1 )
  {
    v4 = 1;
    FIELD_U32(a2, 4) = 0;
    FIELD_U32(a2, 8) = 0;
  }
  return v4;
}

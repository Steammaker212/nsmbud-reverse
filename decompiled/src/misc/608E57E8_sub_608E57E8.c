/* sub_608E57E8
 * address: 0x608E57E8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E57E8(int a1, bool *a2, _DWORD *a3)
{
  int v6; // r6

  v6 = 0;
  if ( FIELD_U32(a1, 80) )
  {
    (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
    if ( a3[1] )
    {
      v6 = 1;
      *a2 = (*(int (__fastcall **)(_DWORD, _DWORD *, _DWORD))(**(_DWORD **)(a1 + 80) + 24))(FIELD_U32(a1, 80), a3, 0) != 0;
    }
  }
  return v6;
}

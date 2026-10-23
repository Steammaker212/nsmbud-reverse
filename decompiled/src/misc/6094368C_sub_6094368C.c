/* sub_6094368C
 * address: 0x6094368C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6094368C(_DWORD *a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r1
  int result; // r0

  v4 = (*(int (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
  v5 = (*(int (__fastcall **)(_DWORD *))(*a2 + 28))(a2);
  result = 0;
  if ( v4 == v5 && a1[1] == a2[1] )
  {
    (*(void (__fastcall **)(_DWORD *, _DWORD *))(*a1 + 12))(a1, a2);
    return 1;
  }
  return result;
}

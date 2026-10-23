/* sub_608AC06C
 * address: 0x608AC06C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC06C(_DWORD *a1, int a2)
{
  int v4; // r0
  int result; // r0

  v4 = a1[135];
  if ( !v4 || (result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a2)) == 0 )
  {
    result = sub_608B4078(a1 + 3, a2);
    if ( !result )
      return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, a2);
  }
  return result;
}

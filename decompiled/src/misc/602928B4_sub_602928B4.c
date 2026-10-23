/* sub_602928B4
 * address: 0x602928B4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602928B4(_DWORD *a1)
{
  _DWORD *v2; // r5
  int *v3; // r0

  v2 = a1 + 1875;
  Animation_update(**(_DWORD **)(a1[1875] + 12));
  v3 = *(int **)(*v2 + 12);
  if ( *(_DWORD *)(*v2 + 8) > 1u )
    ++v3;
  Animation_update(*v3);
  sub_6040EB64(a1 + 1884);
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 716))(a1);
}

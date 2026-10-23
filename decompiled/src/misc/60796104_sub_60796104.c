/* sub_60796104
 * address: 0x60796104   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60796104(_DWORD *a1)
{
  int v1; // r12
  bool v2; // zf

  v1 = a1[330];
  v2 = v1 == 3;
  if ( v1 != 3 )
    v2 = (a1[303] & 0x3E000) == 0;
  if ( v2 && (int)a1[306] >= 0 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 752))(a1);
  else
    return 0;
}

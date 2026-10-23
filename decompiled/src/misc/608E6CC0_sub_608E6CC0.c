/* sub_608E6CC0
 * address: 0x608E6CC0   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6CC0(_BYTE *a1, int a2)
{
  bool v2; // zf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1[76] == 0;
  if ( v2 )
    return 0;
  else
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 92))(a1);
}

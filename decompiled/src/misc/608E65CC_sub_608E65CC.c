/* sub_608E65CC
 * address: 0x608E65CC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E65CC(_BYTE *a1, int a2, int a3)
{
  bool v3; // zf

  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  if ( v3 || !a1[76] )
    return 0;
  else
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 84))(a1);
}

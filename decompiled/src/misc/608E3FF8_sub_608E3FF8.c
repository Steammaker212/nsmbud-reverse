/* sub_608E3FF8
 * address: 0x608E3FF8   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E3FF8(int a1)
{
  _BYTE *v1; // r0

  v1 = *(_BYTE **)(a1 + 80);
  if ( v1[76] )
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v1 + 60))(v1);
  else
    return 0;
}

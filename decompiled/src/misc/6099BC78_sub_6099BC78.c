/* sub_6099BC78
 * address: 0x6099BC78   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6099BC78(_BYTE *a1)
{
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 16))(a1);
  if ( a1[784] )
  {
    sub_608CF868((int)(a1 + 720));
    a1[784] = 0;
  }
  return sub_608A99B0((int)a1);
}

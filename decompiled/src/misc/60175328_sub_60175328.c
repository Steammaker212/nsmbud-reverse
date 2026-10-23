/* sub_60175328
 * address: 0x60175328   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60175328(_BYTE *a1)
{
  if ( !a1[629] )
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 152))(a1);
  a1[587] = 1;
  (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 124))(a1);
  return sub_601E4C88(dword_60C8B13C, 144, a1 + 80, 1);
}

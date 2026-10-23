/* sub_60797820
 * address: 0x60797820   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60797820(_DWORD *a1)
{
  return !(*(int (__fastcall **)(_DWORD *, int))(*a1 + 640))(a1, 3)
      && FIELD_S8(dword_60C9CF0C, 1404) >= 0
      && !FIELD_U8(dword_60C9CF0C, 1406)
      && a1[3767] == 0;
}

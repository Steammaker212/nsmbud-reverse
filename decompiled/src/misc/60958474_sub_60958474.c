/* sub_60958474
 * address: 0x60958474   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60958474(_DWORD *a1)
{
  int v1; // r4

  v1 = a1[19];
  return v1 == (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
}

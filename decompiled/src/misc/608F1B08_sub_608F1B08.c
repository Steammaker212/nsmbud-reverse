/* sub_608F1B08
 * address: 0x608F1B08   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F1B08(int a1)
{
  int v1; // r4

  v1 = a1 + 20;
  dword_60CC7368(FIELD_U32(dword_60CCF464, 28), FIELD_U32(a1, 12), FIELD_U32(a1, 20));
  return dword_60CC7398(*(_DWORD *)(v1 - 8), *(_DWORD *)(v1 - 4), v1);
}

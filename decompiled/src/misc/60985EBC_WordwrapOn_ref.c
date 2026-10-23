/* WordwrapOn_ref
 * address: 0x60985EBC   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall WordwrapOn_ref(int a1)
{
  const char **v1; // r0

  v1 = sub_6085982C(a1, "WordwrapOn");
  return v1 && *(_DWORD *)&v1[1][(_DWORD)v1] != 0;
}

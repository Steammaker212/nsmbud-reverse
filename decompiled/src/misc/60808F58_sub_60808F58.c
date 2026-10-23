/* sub_60808F58
 * address: 0x60808F58   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808F58(int a1, int a2)
{
  int v3; // r0
  int v4; // r0

  v3 = sub_60805BA8(a1);
  v4 = sub_608DC930(FIELD_U32(v3, 456));
  return nn__atk__SoundArchive__GetItemId_const(v4, a2);
}

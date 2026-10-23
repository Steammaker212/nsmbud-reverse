/* sub_60805DB0
 * address: 0x60805DB0   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60805DB0(int a1, int a2, int a3)
{
  sub_608B43EC(a1 + 4, a3);
  return nn__atk__SoundArchive__GetItemId_const(FIELD_U32(a1, 20), a2);
}

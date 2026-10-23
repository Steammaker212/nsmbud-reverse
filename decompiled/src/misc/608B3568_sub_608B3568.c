/* sub_608B3568
 * address: 0x608B3568   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608B3568(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int ItemId_const; // r1

  ItemId_const = nn__atk__SoundArchive__GetItemId_const(FIELD_U32(a1, 4), a2);
  return sub_608B2C3C(a1, ItemId_const, a3, a4, a5);
}

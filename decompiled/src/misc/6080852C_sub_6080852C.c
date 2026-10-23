/* sub_6080852C
 * address: 0x6080852C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080852C(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int ItemId_const; // r1

  v4 = sub_60805BA8(a1);
  v5 = sub_608DC930(FIELD_U32(v4, 456));
  v6 = sub_60805BA8(a1);
  v7 = sub_608DC930(FIELD_U32(v6, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v7, a2);
  return sub_608A9B50(v5, ItemId_const);
}

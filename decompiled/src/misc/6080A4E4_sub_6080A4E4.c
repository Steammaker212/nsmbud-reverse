/* sub_6080A4E4
 * address: 0x6080A4E4   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A4E4(float a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r0
  int ItemId_const; // r4
  int v9; // r0
  int v10; // r0

  v6 = sub_60805BA8(SoundSystem_instance);
  v7 = sub_608DC930(FIELD_U32(v6, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v7, a3);
  v9 = sub_60805BA8(SoundSystem_instance);
  v10 = sub_608AB144(v9 + 8, ItemId_const);
  return sub_608ACA10(v10, a4, a1);
}

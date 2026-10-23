/* sub_6080A484
 * address: 0x6080A484   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080A484(float a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r0
  int ItemId_const; // r5
  int v10; // r0
  int result; // r0

  v7 = sub_60805BA8(SoundSystem_instance);
  v8 = sub_608DC930(FIELD_U32(v7, 456));
  ItemId_const = nn__atk__SoundArchive__GetItemId_const(v8, a3);
  v10 = sub_60805BA8(SoundSystem_instance);
  result = sub_608AB144(v10 + 8, ItemId_const) + 4 * a4;
  FIELD_F32(result, 72) = a1;
  return result;
}

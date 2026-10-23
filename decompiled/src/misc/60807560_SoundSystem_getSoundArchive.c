/* SoundSystem_getSoundArchive
 * address: 0x60807560   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SoundSystem_getSoundArchive(int a1)
{
  int v1; // r0

  v1 = sub_60805BA8(a1);
  return sub_608DC930(FIELD_U32(v1, 0x1C8));
}

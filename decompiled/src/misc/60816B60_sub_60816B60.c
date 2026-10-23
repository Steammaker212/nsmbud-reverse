/* sub_60816B60
 * address: 0x60816B60   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60816B60(int a1)
{
  FIELD_U8(a1, 65) = 1;
  FIELD_U32(a1, 48) = 11;
  FIELD_U8(a1, 44) |= 1u;
  SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  dword_60CC6B80 = 1;
  return sub_60910068(&dword_60CC6B98, 30, 0.0);
}

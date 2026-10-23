/* sub_60816C34
 * address: 0x60816C34   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60816C34(int a1)
{
  FIELD_U8(a1, 65) = 1;
  FIELD_U32(a1, 48) = 12;
  FIELD_U8(a1, 44) |= 1u;
  SoundSystem_getSoundArchivePlayer(SoundSystem_instance);
  dword_60CC6B80 = 2;
  sub_60910068(&dword_60CC6B98, 30, 0.0);
  return sub_6080C38C(dword_60CC6B0C, 20, 0.2);
}

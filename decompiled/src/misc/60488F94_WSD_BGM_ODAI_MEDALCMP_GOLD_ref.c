/* WSD_BGM_ODAI_MEDALCMP_GOLD_ref
 * address: 0x60488F94   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WSD_BGM_ODAI_MEDALCMP_GOLD_ref(int a1)
{
  sub_60828FE4(dword_60CC6E04);
  sub_60483E28(
    FIELD_U32(a1, 47756),
    FIELD_U32(a1, 47784),
    FIELD_U32(a1, 47788),
    FIELD_U8(a1, 47792));
  return sub_608092D4(SoundSystem_instance, "WSD_BGM_ODAI_MEDALCMP_GOLD");
}

/* WSD_BGM_ODAI_MEDAL_CMP_ref
 * address: 0x60488DB0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WSD_BGM_ODAI_MEDAL_CMP_ref(int *a1)
{
  int v2; // r3
  int *v3; // r6
  int *v4; // r5

  v3 = a1 + 11946;
  v2 = a1[11946];
  v4 = a1 + 11947;
  if ( (unsigned int)(v2 - 3) < 3 )
  {
    sub_60828FB8(dword_60CC6E04, a1[11947], v2);
    v2 = *v3;
  }
  sub_60483E28(a1[11939], v2, *v4, 0);
  return sub_608092D4(SoundSystem_instance, "WSD_BGM_ODAI_MEDAL_CMP");
}

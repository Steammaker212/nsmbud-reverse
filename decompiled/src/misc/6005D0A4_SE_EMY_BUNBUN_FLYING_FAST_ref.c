/* SE_EMY_BUNBUN_FLYING_FAST_ref
 * address: 0x6005D0A4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_EMY_BUNBUN_FLYING_FAST_ref(int a1)
{
  float v2; // s0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v2 = 80.0;
  }
  else
  {
    v2 = 60.0;
  }
  FIELD_F32(a1, 120) = (float)(FIELD_F32(a1, 7876) - FIELD_F32(a1, 108)) / v2;
  FIELD_U16(a1, 6276) = (int)v2;
  FIELD_U32(a1, 7912) = 0;
  return sub_608134CC(a1 + 6332, "SE_EMY_BUNBUN_FLYING_FAST", FIELD_S16(a1, 6640), 0);
}

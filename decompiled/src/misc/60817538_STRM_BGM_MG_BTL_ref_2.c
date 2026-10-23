/* STRM_BGM_MG_BTL_ref_2
 * address: 0x60817538   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_MG_BTL_ref_2(int a1, int a2)
{
  int result; // r0
  const char *v4; // r1

  result = FIELD_U32(a1, 20);
  if ( result == 17 )
  {
    switch ( a2 )
    {
      case 3:
        v4 = "STRM_BGM_MG_BTL_END2";
        break;
      case 2:
        v4 = "STRM_BGM_MG_BTL_END";
        break;
      case 1:
        sub_6080A1A0(SoundSystem_instance, 60);
        return sub_60816F60(a1, 1u);
      default:
        return result;
    }
    return sub_608091A4((_DWORD *)SoundSystem_instance, (int)v4);
  }
  return result;
}

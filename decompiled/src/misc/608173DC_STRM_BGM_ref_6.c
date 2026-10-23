/* STRM_BGM_ref_6
 * address: 0x608173DC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_6(int a1, int a2)
{
  int result; // r0

  result = FIELD_U32(a1, 20);
  if ( result == 17 )
  {
    sub_6080A1A0(SoundSystem_instance, 60);
    switch ( a2 )
    {
      case 1:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_SHIRO_BOSS_CLEAR");
        break;
      case 2:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_HIKOUSENBOSS_CREAR");
        break;
      case 3:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS_CLEAR");
        break;
      case 4:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS2_CLEAR");
        break;
      case 5:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS_HARP");
        break;
      case 6:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_LAST_BOSS2_HARP");
        break;
      default:
        result = sub_608091A4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_TORIDEBOSS_CREAR");
        break;
    }
  }
  return result;
}

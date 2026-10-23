/* sub_60815C90
 * address: 0x60815C90   size: 556   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60815C90(int a1, int a2)
{
  int v3; // r0

  switch ( a2 )
  {
    case 1:
      FIELD_U8(a1, 54) = 1;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663296,
        0,
        0);
      sub_6080A630(SoundSystem_instance);
      return 1;
    case 3:
      FIELD_U8(a1, 54) = 1;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663299,
        0,
        0);
      FIELD_U8(a1, 54) = 1;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663300,
        0,
        0);
      return 1;
    case 5:
      FIELD_U8(a1, 54) = 1;
      goto LABEL_8;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      FIELD_U8(a1, 54) = 1;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663302,
        0,
        0);
      FIELD_U8(a1, 54) = 1;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663303,
        0,
        0);
      FIELD_U8(a1, 54) = 1;
      v3 = SoundSystem_instance;
      goto LABEL_3;
    case 17:
      FIELD_U8(a1, 54) = 1;
      goto LABEL_13;
    case 18:
    case 19:
    case 20:
      FIELD_U8(a1, 54) = 1;
LABEL_8:
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663301,
        0,
        0);
      break;
    case 21:
      FIELD_U8(a1, 54) = 1;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663297,
        0,
        0);
      break;
    case 22:
      FIELD_U8(a1, 54) = 1;
      v3 = SoundSystem_instance;
LABEL_3:
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v3 + 60))(v3, 100663298, 0, 0);
      break;
    case 24:
      FIELD_U8(a1, 54) = 1;
LABEL_13:
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663303,
        0,
        0);
      break;
    default:
      return 1;
  }
  return 1;
}

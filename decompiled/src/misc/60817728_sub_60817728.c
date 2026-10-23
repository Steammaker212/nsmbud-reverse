/* sub_60817728
 * address: 0x60817728   size: 1288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60817728(int a1, unsigned int a2)
{
  int result; // r0
  int v5; // r0
  int (__fastcall *v6)(int, int, _DWORD, _DWORD); // r12
  int v7; // r1
  int v8; // r0
  int v9; // r6

  if ( a2 > 0x1E )
    return 0;
  FIELD_U8(a1, 54) = 1;
  (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
    SoundSystem_instance,
    100663301,
    0,
    0);
  switch ( a2 )
  {
    case 1u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663304;
      goto LABEL_32;
    case 2u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663305;
      goto LABEL_32;
    case 3u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663306;
      goto LABEL_32;
    case 4u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663307;
      goto LABEL_32;
    case 5u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663308;
      goto LABEL_32;
    case 6u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663309;
      goto LABEL_32;
    case 7u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663310;
      goto LABEL_32;
    case 8u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663311;
      goto LABEL_32;
    case 9u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663312;
      goto LABEL_32;
    case 0xAu:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663313;
      goto LABEL_32;
    case 0xBu:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663314;
      goto LABEL_32;
    case 0xCu:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663315;
      goto LABEL_32;
    case 0xDu:
      FIELD_U8(a1, 54) = 1;
      v8 = (*(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
             SoundSystem_instance,
             100663316,
             0,
             0);
      FIELD_U8(a1, 54) = 1;
      v9 = v8;
      (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60))(
        SoundSystem_instance,
        100663298,
        0,
        0);
      return v9;
    case 0xEu:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663317;
      goto LABEL_32;
    case 0xFu:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663318;
      goto LABEL_32;
    case 0x10u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663319;
      goto LABEL_32;
    case 0x11u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663320;
      goto LABEL_32;
    case 0x12u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663321;
      goto LABEL_32;
    case 0x13u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663322;
      goto LABEL_32;
    case 0x14u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663323;
      goto LABEL_32;
    case 0x15u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663324;
      goto LABEL_32;
    case 0x16u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663325;
      goto LABEL_32;
    case 0x17u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663326;
      goto LABEL_32;
    case 0x18u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663327;
      goto LABEL_32;
    case 0x19u:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663328;
      goto LABEL_32;
    case 0x1Au:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663329;
      goto LABEL_32;
    case 0x1Cu:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663330;
      goto LABEL_32;
    default:
      FIELD_U8(a1, 54) = 1;
      v5 = SoundSystem_instance;
      v6 = *(int (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)SoundSystem_instance + 60);
      v7 = 100663301;
LABEL_32:
      result = v6(v5, v7, 0, 0);
      break;
  }
  return result;
}

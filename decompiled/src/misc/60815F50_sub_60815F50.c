/* sub_60815F50
 * address: 0x60815F50   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60815F50(int a1, int a2)
{
  int result; // r0
  float v4; // s16
  int v5; // r4
  unsigned __int8 v6; // r6
  float v7; // s0
  int v8; // r1

  result = FIELD_U8(a1, 55);
  if ( result )
  {
    FIELD_U32(a1, 40) = a2;
    v4 = 1.1225;
    v5 = 15;
    v6 = 3;
    switch ( a2 )
    {
      case 1:
        v7 = 0.9;
        v5 = 0;
        v8 = 0;
        goto LABEL_7;
      case 2:
        v7 = 0.3;
        v5 = 15;
        v8 = 15;
LABEL_7:
        sub_6080C38C(dword_60CC6B0C, v8, v7);
        v4 = 1.0;
        v6 = 1;
        break;
      case 3:
        v4 = 1.0;
        v5 = 30;
        sub_6080C38C(dword_60CC6B0C, 30, 1.0);
        break;
      case 4:
        sub_608091F4((_DWORD *)SoundSystem_instance, (int)"SE_MG_IH_NOPAIR_NG", 5, 40, 0.2, 1.0, 0, 1000);
        FIELD_U32(a1, 40) = 12;
        break;
      case 5:
        sub_608091F4((_DWORD *)SoundSystem_instance, (int)"SE_MG_IH_NOPAIR_NG", 5, 40, 0.2, 1.0, 0, 1000);
        v4 = 1.2599;
        FIELD_U32(a1, 40) = 13;
        break;
      case 6:
        v4 = 1.0;
        FIELD_U32(a1, 40) = 14;
        break;
      case 7:
        sub_608091F4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_MINIGAME_FANFARE_GOOD", 5, 45, 0.0, 0.4, 0, 1800);
        v5 = 15;
        v4 = 1.0;
        FIELD_U32(a1, 40) = 15;
        break;
      case 8:
        v5 = 30;
        sub_6080C38C(dword_60CC6B0C, 30, 0.4);
        goto LABEL_15;
      case 9:
      case 11:
        v5 = 30;
        sub_6080C38C(dword_60CC6B0C, 30, 0.4);
        v4 = 1.0;
        goto LABEL_17;
      case 10:
        sub_608091F4((_DWORD *)SoundSystem_instance, (int)"STRM_BGM_MINIGAME_FANFARE_GOOD", 5, 45, 0.0, 0.4, 0, 1800);
        goto LABEL_15;
      case 12:
        break;
      case 13:
        v4 = 1.2599;
        break;
      case 14:
      case 15:
LABEL_15:
        v4 = 1.0;
        break;
      default:
        v4 = 1.0;
        v5 = 15;
        sub_6080C38C(dword_60CC6B0C, 15, 1.0);
LABEL_17:
        v6 = 2;
        break;
    }
    sub_6080C0EC(dword_60CC6B0C, v6, v5, 0);
    return sub_6080A0CC((_DWORD *)SoundSystem_instance, v4);
  }
  return result;
}

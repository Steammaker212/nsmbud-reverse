/* STRM_BGM_ref_3
 * address: 0x6080B91C   size: 960   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_3(_DWORD *a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r5
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  const char *v9; // r6
  int SoundArchive; // r7
  int v11; // r0
  int ItemId_const; // r0
  __int16 v13; // r0
  int v14; // r7
  int v15; // r0
  int v16; // r0
  __int16 v17; // r0

  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    STRM_BGM_MENU_ref(a1, 0x1Bu, 0x1000217u);
    sub_6080B284((int)a1, 0);
    return sub_6080A69C((_DWORD *)SoundSystem_instance);
  }
  v4 = (_DWORD *)SoundSystem_instance;
  switch ( FIELD_U8(dword_60CC6B68, 27) )
  {
    case 0:
      sub_6080A1A0(SoundSystem_instance, 1);
      v5 = a1[4];
      v6 = v5 == 13;
      if ( v5 != 13 )
        v6 = v5 == 26;
      if ( !v6 && sub_60808E60((int)v4, (int)"SE_SYS_HURRY_UP") == 1 )
        sub_6080A298((int)v4, 1);
      a1[22] = 0;
      goto LABEL_19;
    case 1:
      if ( !FIELD_U8(dword_60CC6D8C, 17) || a2 )
        goto LABEL_17;
      v7 = a1[4];
      v8 = v7 == 15;
      if ( v7 != 15 )
        v8 = v7 == 17;
      if ( v8 || FIELD_U8(dword_60CC6D78, 109032) || sub_603FC6A0(dword_60C99DE4) != 100 )
      {
LABEL_17:
        STRM_BGM_ref_3_helper_80A170((int)v4, 15);
        sub_608AC1C0(v4 + 17);
        sub_6080B284((int)a1, 0);
        STRM_BGM_ref_4(a1);
      }
      goto LABEL_28;
    case 2:
      sub_6080A1A0(SoundSystem_instance, 0);
      sub_60809028(v4, (int)"STRM_BGM_DUMMY");
      a1[22] = "STRM_BGM_DUMMY";
LABEL_19:
      a1[14] = "SE_DUMMY";
      a1[15] = "SE_DUMMY";
      goto LABEL_28;
    case 4:
      sub_6080A1A0(SoundSystem_instance, 1);
      if ( byte_60CC6B22 || sub_603FC6A0(dword_60C99DE4) - 1 >= 0x64 && !FIELD_U8(dword_60CC6B68, 52) )
      {
        v9 = "STRM_BGM_STAR";
LABEL_24:
        STRM_BGM_ref_3_helper((int)v4, (int)v9);
        goto LABEL_25;
      }
      if ( !FIELD_U8(dword_60CC6D8C, 17) )
      {
        v9 = "STRM_BGM_STAR_FAST";
        goto LABEL_24;
      }
      if ( sub_603FC6A0(dword_60C99DE4) != 100 || FIELD_U8(dword_60CC6D78, 109032) )
      {
        v9 = "STRM_BGM_STAR_FAST";
        goto LABEL_24;
      }
      v9 = "STRM_BGM_STAR_FAST";
LABEL_25:
      a1[22] = v9;
      a1[14] = v9;
      a1[10] = 0;
      SoundArchive = SoundSystem_getSoundArchive((int)v4);
      v11 = SoundSystem_getSoundArchive((int)v4);
      ItemId_const = nn__atk__SoundArchive__GetItemId_const(v11, (int)v9);
      v13 = sub_608A9AA4(SoundArchive, ItemId_const);
      a1[11] = sub_6080E520(v13 & 0x3FF);
      a1[15] = "SE_DUMMY";
      STRM_BGM_ref_4(a1);
LABEL_27:
      sub_60807574((_DWORD *)SoundSystem_instance);
LABEL_28:
      result = sub_60816CBC(dword_60CC6B68);
      if ( result == 1 )
        return sub_6081811C(dword_60CC6B68);
      return result;
    case 8:
      sub_6080A1A0(SoundSystem_instance, 15);
      STRM_BGM_ref_3_helper((int)v4, (int)"STRM_BGM_SWITCH");
      a1[22] = "STRM_BGM_SWITCH";
      a1[14] = "STRM_BGM_SWITCH";
      a1[15] = "SE_DUMMY";
      a1[10] = 0;
      v14 = SoundSystem_getSoundArchive((int)v4);
      v15 = SoundSystem_getSoundArchive((int)v4);
      v16 = nn__atk__SoundArchive__GetItemId_const(v15, (int)"STRM_BGM_SWITCH");
      v17 = sub_608A9AA4(v14, v16);
      a1[11] = sub_6080E520(v17 & 0x3FF);
      goto LABEL_27;
    default:
      goto LABEL_28;
  }
}

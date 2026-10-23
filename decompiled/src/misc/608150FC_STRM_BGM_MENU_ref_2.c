/* STRM_BGM_MENU_ref_2
 * address: 0x608150FC   size: 1488   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall STRM_BGM_MENU_ref_2(int a1)
{
  int v2; // r4
  unsigned int v3; // r1
  _DWORD *v4; // r0
  unsigned int v5; // r0
  int v6; // r4
  unsigned int v7; // r0
  unsigned int v8; // r0
  signed int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r2
  _DWORD *v15; // r0
  int v16; // r0
  unsigned int v17; // r2
  unsigned int v18; // r1
  bool v19; // zf
  bool v20; // zf

  FIELD_U8(a1, 53) = 0;
  FIELD_U8(a1, 54) = 0;
  FIELD_U8(a1, 44) &= ~1u;
  FIELD_U32(a1, 36) = 0;
  FIELD_U8(a1, 57) = 0;
  v2 = a1 + 57;
  FIELD_U8(a1, 62) = 0;
  FIELD_U8(a1, 61) = 0;
  FIELD_U8(a1, 60) = 0;
  FIELD_U8(a1, 59) = 0;
  FIELD_U8(a1, 58) = 0;
  FIELD_U8(a1, 63) = 0;
  sub_6080A550(SoundSystem_instance, FIELD_U32(a1, 20), FIELD_U32(a1, 32));
  if ( *(_DWORD *)(v2 - 9) != 12 )
  {
    sub_60816288(1.0);
    sub_60910068(&dword_60CC6B98, 0, 1.0);
  }
  v3 = FIELD_U32(a1, 20);
  switch ( v3 )
  {
    case 0u:
    case 1u:
    case 2u:
      sub_6080A1A0(SoundSystem_instance, 0);
      v4 = (_DWORD *)SoundSystem_instance;
      return sub_6080A69C(v4);
    case 3u:
      sub_6080A550(SoundSystem_instance, 3, FIELD_U32(a1, 32));
      sub_6080A298(SoundSystem_instance, 1);
      v10 = sub_6080A1A0(SoundSystem_instance, 0);
      SE_SYS_HURRY_UP_ref(v10);
      STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 3u, 0x1000230u);
      v11 = dword_60CC6B0C;
      v12 = 30;
      goto LABEL_34;
    case 4u:
    case 6u:
    case 7u:
      v5 = FIELD_U32(a1, 16);
      if ( v5 <= 0x1D && ((1 << v5) & 0x2E1E0000) != 0 )
      {
        STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, v3, 0x1000B12u);
        v6 = 0;
        sub_6080B284(dword_60CC6B0C, 0);
        v7 = FIELD_U32(a1, 20);
        if ( v7 - 8 >= 9 )
        {
          FIELD_U32(a1, 36) = 3;
          if ( v7 <= 7 && ((1 << v7) & 0xD0) != 0 )
          {
            v6 = 120;
            v8 = FIELD_U32(a1, 16) - 17;
            if ( v8 <= 0xC )
              v6 = dword_60B0DDC0[v8];
          }
          sub_6080C0EC(dword_60CC6B0C, 2, v6, 0);
        }
      }
      sub_60807574((_DWORD *)SoundSystem_instance);
      result = SoundSystem_instance;
      FIELD_U8(SoundSystem_instance, 47) = 0;
      return result;
    case 5u:
      if ( !sub_60808E60(SoundSystem_instance, (int)"STRM_BGM_MENU") )
      {
        STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 5u, 0x1000B12u);
        sub_6080B284(dword_60CC6B0C, 0);
        v13 = FIELD_U32(a1, 20);
        if ( (unsigned int)(v13 - 8) >= 9 )
        {
          v14 = 0;
          FIELD_U32(a1, 36) = 0;
          if ( (v13 | 2) == 6 )
            v14 = 60;
          if ( v13 == 7 )
            v14 = 60;
          sub_6080C0EC(dword_60CC6B0C, 1, v14, 0);
        }
      }
      STRM_BGM_MENU_ref_2_helper_80B540();
      goto LABEL_48;
    case 8u:
      sub_6080A550(SoundSystem_instance, 8, FIELD_U32(a1, 32));
      v15 = (_DWORD *)SoundSystem_instance;
      return sub_60807574(v15);
    case 9u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x11u:
      goto LABEL_37;
    case 0x10u:
      SE_DUMMY_ref(dword_60CC6B0C);
      goto LABEL_37;
    case 0x12u:
      sub_6080A1A0(SoundSystem_instance, 60);
      STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 0x12u, 0x1000225u);
      result = STRM_BGM_MENU_ref_2_helper();
      if ( result != 1 )
        return result;
      v16 = dword_60CC6B0C;
      return sub_6080B284(v16, 0);
    case 0x13u:
      v17 = 16777748;
      v18 = 19;
      goto LABEL_41;
    case 0x14u:
      sub_6080A1A0(SoundSystem_instance, 60);
      v18 = 20;
      v17 = 16777766;
      goto LABEL_41;
    case 0x15u:
      sub_6080A1A0(SoundSystem_instance, 0);
      STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 0x15u, 0x1000231u);
      sub_6080B284(dword_60CC6B0C, 0);
      v19 = dword_60C9A230 == 0;
      if ( dword_60C9A230 )
        v19 = FIELD_U8(dword_60C9A230, 2084) == 0;
      if ( !v19 )
        goto LABEL_48;
      v20 = dword_60CC6D78 == 0;
      if ( dword_60CC6D78 )
        v20 = FIELD_U8(dword_60CC6D78, 20) == 0;
      if ( v20 )
        v4 = (_DWORD *)SoundSystem_instance;
      else
LABEL_48:
        v4 = (_DWORD *)SoundSystem_instance;
      return sub_6080A69C(v4);
    case 0x16u:
      sub_6080A1A0(SoundSystem_instance, 0);
      STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 0x16u, 0x1000233u);
      v11 = dword_60CC6B0C;
      v12 = 690;
LABEL_34:
      sub_6080B284(v11, v12);
      v15 = (_DWORD *)SoundSystem_instance;
      return sub_60807574(v15);
    case 0x18u:
      STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 0x18u, 0x1000B22u);
LABEL_37:
      v15 = (_DWORD *)SoundSystem_instance;
      return sub_60807574(v15);
    case 0x19u:
      return STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, 0x19u, 0x1000226u);
    case 0x1Au:
      v17 = 16777749;
      v18 = 26;
LABEL_41:
      STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, v18, v17);
      goto LABEL_42;
    default:
      SE_DUMMY_ref(dword_60CC6B0C);
      sub_6080A1A0(SoundSystem_instance, 0);
LABEL_42:
      v16 = dword_60CC6B0C;
      return sub_6080B284(v16, 0);
  }
}

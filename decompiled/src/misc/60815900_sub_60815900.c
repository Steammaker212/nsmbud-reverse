/* sub_60815900
 * address: 0x60815900   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60815900(int a1, unsigned int a2)
{
  int v5; // r0
  bool v6; // zf

  FIELD_U8(a1, 44) &= ~1u;
  FIELD_U8(a1, 57) = 1;
  FIELD_U8(a1, 59) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U8(a1, 64) = 0;
  FIELD_U32(a1, 48) = 0;
  if ( a2 == 1 )
  {
    FIELD_U32(a1, 16) = FIELD_U32(a1, 20);
    FIELD_U32(a1, 20) = 1;
    return 1;
  }
  if ( !a2 )
  {
    FIELD_U32(a1, 16) = 0;
    FIELD_U32(a1, 20) = 0;
    FIELD_U8(a1, 53) = 0;
    FIELD_U8(a1, 54) = 0;
    FIELD_U16(a1, 24) = 0;
    FIELD_U16(a1, 26) = 255;
    FIELD_U8(a1, 28) = 0;
    FIELD_U32(a1, 48) = 0;
    FIELD_U8(a1, 52) = 0;
    FIELD_U8(a1, 44) = 0;
    FIELD_U32(a1, 40) = 0;
    FIELD_U32(a1, 36) = 0;
    FIELD_U32(a1, 32) = 0;
    FIELD_U8(a1, 55) = 0;
    FIELD_U8(a1, 59) = 0;
    FIELD_U8(a1, 64) = 0;
    FIELD_U8(a1, 63) = 0;
    FIELD_U8(a1, 62) = 0;
    FIELD_U8(a1, 61) = 0;
    FIELD_U8(a1, 60) = 0;
    FIELD_U8(a1, 58) = 0;
    FIELD_U8(a1, 57) = 0;
    FIELD_U8(a1, 56) = 0;
    FIELD_U8(a1, 65) = 0;
    return 1;
  }
  v5 = FIELD_U32(a1, 20);
  if ( v5 == a2 )
  {
    if ( a2 == 3 )
      FIELD_U8(a1, 57) = 0;
    v6 = dword_60C9A230 == 0;
    if ( dword_60C9A230 )
      v6 = FIELD_U8(dword_60C9A230, 2084) == 0;
    if ( !v6 && !sub_6040C0DC(dword_60C9A230) )
      sub_6080A1A0(SoundSystem_instance, 50);
    if ( a2 == 17 )
    {
      FIELD_U8(a1, 26) = -1;
      FIELD_U16(a1, 24) = 0;
      FIELD_U8(a1, 52) = 0;
      FIELD_U8(a1, 28) = 0;
      STRM_BGM_ref_4(dword_60CC6B0C);
      return 1;
    }
    return 1;
  }
  FIELD_U32(a1, 16) = v5;
  FIELD_U32(a1, 20) = a2;
  FIELD_U16(a1, 24) = 0;
  if ( v5 == 5 )
  {
    if ( (a2 | 2) == 6 )
      return 1;
  }
  else if ( a2 == 4 )
  {
    sub_6080A1A0(SoundSystem_instance, 50);
    sub_6080A298(SoundSystem_instance, 50);
    SE_SYS_HURRY_UP_ref();
    goto LABEL_26;
  }
  SE_SYS_HURRY_UP_ref();
  if ( a2 == 17 )
  {
    sub_6080A1A0(SoundSystem_instance, 50);
  }
  else if ( a2 == 6 && FIELD_U32(a1, 16) != 5 )
  {
    FIELD_U32(a1, 20) = 7;
    return STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, a2, 0);
  }
LABEL_26:
  if ( FIELD_U32(a1, 20) == 17 )
  {
    FIELD_U8(a1, 52) = 0;
    return 1;
  }
  return STRM_BGM_MENU_ref((_DWORD *)dword_60CC6B0C, a2, 0);
}

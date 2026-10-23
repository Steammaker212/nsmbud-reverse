/* STRM_BGM_MG_BTL_ref
 * address: 0x6080C144   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall STRM_BGM_MG_BTL_ref(int a1)
{
  signed int result; // r0
  _BOOL4 v3; // r6
  int v4; // r0
  int v5; // r7
  int v6; // r0
  _BOOL4 v7; // r5

  result = FIELD_U32(dword_60CC6B68, 20);
  if ( result != 17 )
    return result;
  v3 = 1;
  if ( !sub_60807C28(SoundSystem_instance) && !sub_60807BD0(SoundSystem_instance) )
    v3 = FIELD_U32(SoundSystem_instance, 68) != 0;
  v4 = FIELD_U32(dword_60C99DD4, 764);
  if ( v4 == 4 )
  {
    v5 = 0;
    byte_60CC6B22 = 1;
    if ( !v3 )
      goto LABEL_21;
LABEL_19:
    if ( v5 == 1 )
      goto LABEL_22;
LABEL_24:
    STRM_BGM_MENU_ref((_DWORD *)a1, 0x11u, FIELD_U32(a1, 16));
    return STRM_BGM_ref_3((_DWORD *)a1, 0);
  }
  v6 = sub_60834644(v4);
  v5 = 0;
  v7 = 0;
  if ( v6 )
    v7 = sub_603FD0E8(v6);
  if ( !v7 && FIELD_U8(dword_60CC6D78, 109032) )
  {
LABEL_18:
    if ( !v3 )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( (unsigned int)(FIELD_U32(a1, 16) - 1) > 0x1B )
  {
    v5 = 1;
    goto LABEL_18;
  }
  if ( v7 | (strcmp(*(const char **)(a1 + 20), "STRM_BGM_MG_BTL") != 0) )
    v5 = 1;
  if ( v3 )
    goto LABEL_19;
LABEL_21:
  if ( v5 == 1 )
  {
LABEL_22:
    sub_608091F4((_DWORD *)SoundSystem_instance, (int)"SE_SYS_HURRY_UP", 5, 20, 0.0, 1.0, 1, 0);
    return STRM_BGM_MENU_ref((_DWORD *)a1, 0x11u, FIELD_U32(a1, 16));
  }
  result = FIELD_U8(dword_60CC6D78, 109032);
  if ( FIELD_U8(dword_60CC6D78, 109032) )
    goto LABEL_24;
  return result;
}

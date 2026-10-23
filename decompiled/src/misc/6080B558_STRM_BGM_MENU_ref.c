/* STRM_BGM_MENU_ref
 * address: 0x6080B558   size: 864   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall STRM_BGM_MENU_ref(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  const char *v6; // r8
  int v7; // r9
  int v8; // r7
  const char *v9; // r7
  _DWORD *v10; // r1
  int v11; // r5
  unsigned int v13; // r0
  _DWORD *v14; // r1
  unsigned int v15; // r0
  int SoundArchive; // r5
  int v17; // r0
  int ItemId_const; // r0
  __int16 v19; // r0
  int v20; // r5

  v6 = (const char *)a1[5];
  v7 = SoundSystem_instance;
  if ( a2 != 17 )
  {
    a1[4] = a2;
    if ( a2 > 0x1D || ((0x30820007u >> a2) & 1) != 0 )
    {
      a1[5] = 0;
      a1[6] = 0;
      a1[7] = 0;
      sub_6080A1A0(v7, 50);
      FIELD_U8(dword_60CC6B68, 58) = 1;
      return 1;
    }
    v9 = dword_60C28190[2 * a2];
    if ( v6 && !strcmp(v6, dword_60C28190[2 * a2]) )
      return 1;
    sub_6080A1A0(v7, 50);
    v11 = dword_60C28280[2 * a2];
    FIELD_U8(dword_60CC6B68, 58) = 1;
LABEL_31:
    a1[5] = v9;
    a1[6] = v11;
    a1[7] = sub_6080852C(v7, (int)v9);
    a1[8] = 0;
    a1[19] = 0;
    a1[20] = 0;
    SoundArchive = SoundSystem_getSoundArchive(v7);
    v17 = SoundSystem_getSoundArchive(v7);
    ItemId_const = nn__atk__SoundArchive__GetItemId_const(v17, (int)v9);
    v19 = sub_608A9AA4(SoundArchive, ItemId_const);
    a1[9] = sub_6080E520(v19 & 0x3FF);
    v8 = 1;
    if ( a1[7] == 2 )
    {
      v20 = strcmp((const char *)a1[5], "STRM_BGM_MENU");
      sub_608AC1C0(v7 + 76);
      if ( v20 )
      {
        if ( !v6 || strcmp(v6, "STRM_BGM_MENU") )
        {
          v8 = 1;
          FIELD_U8(dword_60CC6B68, 53) = 1;
          sub_6080913C(v7, a1[5], a1[6], 0);
        }
      }
    }
    return v8;
  }
  v8 = 0;
  if ( a3 <= 0x1C )
  {
    a1[4] = a3;
    if ( byte_60CC6B22 == 1 )
    {
      v9 = (const char *)dword_60C28460[2 * a3];
      v10 = &unk_60C28640;
      if ( !v9 )
      {
LABEL_28:
        a1[5] = 0;
        a1[6] = 0;
        a1[7] = 0;
        sub_6080A1A0(SoundSystem_instance, 50);
        return 1;
      }
    }
    else
    {
      v13 = sub_603FC6A0(dword_60C99DE4) - 1;
      v14 = &unk_60C28370;
      if ( !FIELD_U8(dword_60CC6B68, 52) )
        v14 = dword_60C28460;
      if ( v13 < 0x64 )
        v14 = &unk_60C28370;
      v9 = (const char *)v14[2 * a3];
      if ( byte_60CC6B22 )
      {
        v10 = &unk_60C28640;
        if ( !v9 )
          goto LABEL_28;
      }
      else
      {
        v15 = sub_603FC6A0(dword_60C99DE4) - 1;
        v10 = &unk_60C28550;
        if ( !FIELD_U8(dword_60CC6B68, 52) )
          v10 = &unk_60C28640;
        if ( v15 < 0x64 )
          v10 = &unk_60C28550;
        if ( !v9 )
          goto LABEL_28;
      }
    }
    v11 = v10[2 * a3];
    if ( !v6 )
      goto LABEL_30;
    if ( !strcmp(v6, v9) )
      return 1;
    if ( (FIELD_U8(dword_60CC6B68, 24) & 0xC) != 0 )
    {
      sub_60809B58(v7, 50);
      sub_60809B9C(v7, 50, 0);
    }
    else
    {
LABEL_30:
      sub_6080A1A0(SoundSystem_instance, 50);
    }
    goto LABEL_31;
  }
  return v8;
}

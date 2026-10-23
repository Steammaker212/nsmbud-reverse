/* STRM_BGM_ref_5
 * address: 0x6080C3F8   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_5(int a1)
{
  int v2; // r6
  unsigned int v3; // r0
  unsigned int v4; // r1
  unsigned int v5; // r7
  __int64 v6; // r8
  unsigned int v7; // r0
  int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r3
  int v11; // r6
  unsigned int v12; // r5
  bool v13; // cf
  bool v14; // cc
  unsigned int v15; // r0
  const char *v17; // r6
  _DWORD v18[12]; // [sp+0h] [bp-98h] BYREF
  char v19[52]; // [sp+30h] [bp-68h] BYREF
  int v20; // [sp+64h] [bp-34h] BYREF
  char v21[4]; // [sp+68h] [bp-30h] BYREF
  int v22; // [sp+6Ch] [bp-2Ch] BYREF
  int v23; // [sp+70h] [bp-28h] BYREF
  _DWORD v24[9]; // [sp+74h] [bp-24h] BYREF

  v2 = 0;
  v3 = FIELD_U32(dword_60CC6B68, 20);
  if ( v3 <= 0x18 && ((1 << v3) & 0x1020008) != 0 )
  {
    sub_608AE25C(v24, SoundSystem_instance + 76);
    sub_608A8604(&v23, SoundSystem_instance + 68);
    sub_608A8604(&v22, SoundSystem_instance + 64);
    sub_608A8604(v21, SoundSystem_instance + 72);
    sub_608AE380(&v20, SoundSystem_instance + 64);
    if ( v24[0] )
      sub_608BC754(v24[0], v19);
    if ( v20 )
      STRM_BGM_ref_5_helper(v20, v18);
    if ( v23 )
    {
      v5 = sub_608B73A4();
      v6 = 0x6000000000LL;
LABEL_9:
      v7 = 0;
      v4 = 0;
      goto LABEL_15;
    }
    if ( v24[0] )
    {
      v8 = sub_608BC794(v24[0], 1);
    }
    else
    {
      if ( !v20 )
      {
        if ( !v22 )
        {
          v2 = 0;
          goto LABEL_43;
        }
        v5 = sub_608B73A4();
        v17 = *(const char **)(a1 + 20);
        v6 = 0xC000000000LL;
        if ( strcmp(v17, "STRM_BGM_CHIKA") )
        {
          if ( strcmp(v17, "STRM_BGM_CHIKA_FAST") )
          {
            if ( strcmp(v17, "STRM_BGM_ATHLETIC") )
            {
              if ( strcmp(v17, "STRM_BGM_ATHLETIC_FAST") )
              {
                if ( strcmp(v17, "STRM_BGM_WATER") )
                {
                  HIDWORD(v6) = 96;
                  if ( !strcmp(v17, "STRM_BGM_WATER_FAST") )
                    HIDWORD(v6) = 192;
                }
              }
            }
          }
        }
        goto LABEL_9;
      }
      v8 = STRM_BGM_ref_5_helper_8CBB38(v20, 1);
    }
    v5 = v8;
    v6 = FIELD_U64(a1, 32);
    v7 = v18[2];
    v4 = v18[4];
LABEL_15:
    v9 = FIELD_U32(a1, 76);
    if ( v9 == (_DWORD)v6 )
    {
      FIELD_U32(a1, 76) = v5;
      FIELD_U32(a1, 80) = v6;
      if ( FIELD_U8(a1, 120) )
      {
        v2 = 1;
        FIELD_U8(a1, 120) = 0;
      }
      else
      {
        v2 = 0;
      }
      goto LABEL_43;
    }
    v10 = FIELD_U32(a1, 80);
    FIELD_U8(a1, 120) = 1;
    if ( v5 >= v9 )
    {
      v12 = v10 + HIDWORD(v6);
      v13 = v10 + HIDWORD(v6) >= v5;
      if ( v10 + HIDWORD(v6) <= v5 )
        v13 = v9 >= v12;
      if ( v13 )
        goto LABEL_25;
    }
    else
    {
      v11 = v7 / HIDWORD(v6);
      if ( v7 % HIDWORD(v6) )
      {
        v9 = v11 * HIDWORD(v6);
        v12 = (v11 + 1) * HIDWORD(v6);
        FIELD_U32(a1, 76) = v11 * HIDWORD(v6);
LABEL_25:
        if ( v9 <= v4 + HIDWORD(v6) )
        {
          v2 = 0;
          if ( v9 > v12 || v9 < v10 )
          {
            do
            {
              if ( (unsigned int)v6 >= v9 )
                break;
              LODWORD(v6) = v6 + HIDWORD(v6);
              v14 = (unsigned int)v6 > v9;
              if ( (unsigned int)v6 <= v9 )
                v14 = (unsigned int)v6 > v4;
            }
            while ( !v14 );
            v15 = v7 - v4;
            if ( (unsigned int)v6 > v4 )
              LODWORD(v6) = v6 + v15;
            FIELD_U32(a1, 80) = v6;
          }
        }
        else
        {
          FIELD_U32(a1, 76) = v5;
          v2 = 0;
        }
LABEL_42:
        FIELD_U32(a1, 76) = v5;
LABEL_43:
        sub_608AE46C(&v20, v4);
        sub_608A86F0(v21);
        sub_608A86F0(&v22);
        sub_608A86F0(&v23);
        sub_608AE348(v24);
        return v2;
      }
      v12 = v7 + HIDWORD(v6);
      FIELD_U32(a1, 76) = v7;
    }
    v2 = 1;
    if ( v5 < v9 )
      v12 = v7;
    v4 = ((v5 / HIDWORD(v6)) & 3) + 1;
    FIELD_U8(SoundSystem_instance, 140) = v4;
    FIELD_U32(a1, 80) = v12;
    goto LABEL_42;
  }
  return v2;
}

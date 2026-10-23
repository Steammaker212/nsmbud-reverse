/* STRM_BGM_ref_4
 * address: 0x6080BD4C   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ref_4(int a1)
{
  int result; // r0
  _BOOL4 v3; // r1
  int v4; // r9
  int v5; // r7
  int v6; // r6
  int v7; // r4
  char v8; // r5
  unsigned int v9; // r7
  int v10; // [sp+0h] [bp-30h] BYREF
  int v11; // [sp+4h] [bp-2Ch] BYREF
  int v12; // [sp+8h] [bp-28h] BYREF
  _DWORD v13[9]; // [sp+Ch] [bp-24h] BYREF

  result = strcmp(*(const char **)(a1 + 20), "STRM_BGM_STAFF_CREDIT");
  if ( result )
  {
    sub_608AE25C(v13, SoundSystem_instance + 76);
    sub_608A8604(&v12, SoundSystem_instance + 68);
    sub_608A8604(&v11, SoundSystem_instance + 64);
    sub_608A8604(&v10, SoundSystem_instance + 72);
    if ( v11 )
      v3 = (unsigned int)sub_608B73A4() < 0x60;
    else
      v3 = 1;
    v4 = 20;
    v5 = 5;
    if ( v3 )
    {
      v4 = 0;
      v5 = 0;
    }
    v6 = FIELD_U8(dword_60CC6B68, 28);
    if ( v12 )
    {
      v6 *= 2;
      sub_608B7240(v12, v6, 1.0);
      if ( v12 )
        sub_608B7240(v12, ~v6, 0.0);
    }
    if ( v13[0] )
    {
      sub_608BC5E8(v13[0], v6, v5, 1.0);
      if ( v13[0] )
        sub_608BC5E8(v13[0], ~v6, v5, 0.0);
    }
    v7 = v11;
    if ( v11 )
    {
      v8 = strcmp(*(const char **)(a1 + 20), "STRM_BGM_MINIGAME") != 0;
      v9 = (v6 << v8) & 0xFFFFFFF7;
      sub_608B7240(v7, v9, 1.0);
      if ( v11 )
        sub_608B7240(v11, ((v6 << v8) | 8) ^ 0xFFFFFFF7, 0.0);
    }
    else
    {
      LOBYTE(v9) = v6;
    }
    STRM_BGM_ref_4_helper(a1, v4);
    FIELD_U8(a1, 72) = v9;
    sub_608A86F0(&v10);
    sub_608A86F0(&v11);
    sub_608A86F0(&v12);
    return sub_608AE348(v13);
  }
  return result;
}

/* sub_6080AC6C
 * address: 0x6080AC6C   size: 604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6080AC6C(int a1)
{
  __int64 v2; // r2
  int v3; // r5
  float v4; // s16
  int result; // r0
  bool v6; // zf
  _DWORD *v7; // r5
  int v8; // [sp+4h] [bp-24h] BYREF
  int v9; // [sp+8h] [bp-20h] BYREF
  _DWORD v10[7]; // [sp+Ch] [bp-1Ch] BYREF

  if ( dword_60CC6B48 )
  {
    sub_608A8604(v10, SoundSystem_instance + 64);
    if ( v10[0] )
    {
      v2 = FIELD_U64(a1, 128);
      v3 = HIDWORD(v2) ^ v2;
      v4 = unk_60CC6B3C;
      sub_608B7240(v10[0], (HIDWORD(v2) ^ v2) & v2, unk_60CC6B3C);
      if ( v10[0] )
        sub_608B7240(v10[0], v3 & ~FIELD_U32(a1, 128), 1.0 - v4);
    }
LABEL_10:
    sub_608A86F0(v10);
    goto LABEL_11;
  }
  if ( FIELD_U8(a1, 121) )
  {
    sub_608A8604(v10, SoundSystem_instance + 64);
    if ( v10[0] )
    {
      sub_608B7240(v10[0], FIELD_U32(a1, 128), 1.0);
      if ( v10[0] )
        sub_608B7240(v10[0], ~FIELD_U32(a1, 128), 0.0);
    }
    sub_60910068(&dword_60CC6B38, 0, 0.0);
    FIELD_U8(a1, 121) = 0;
    goto LABEL_10;
  }
LABEL_11:
  result = FIELD_U32(a1, 124);
  v6 = result == 0;
  if ( result >= 0 )
  {
    FIELD_U32(a1, 124) = --result;
    if ( v6 )
    {
      sub_608AE25C(v10, SoundSystem_instance + 76);
      if ( v10[0] )
      {
        v7 = (_DWORD *)(a1 + 136);
        sub_608BC5E8(v10[0], FIELD_U32(a1, 128), FIELD_U32(a1, 136), 1.0);
        if ( v10[0] )
          sub_608BC5E8(v10[0], ~FIELD_U32(a1, 128), FIELD_U32(a1, 136), 0.0);
      }
      else
      {
        v7 = (_DWORD *)(a1 + 136);
      }
      if ( !*v7 )
      {
        sub_608A8604(&v9, SoundSystem_instance + 64);
        if ( v9 )
        {
          sub_608B7240(v9, FIELD_U32(a1, 128), 1.0);
          if ( v9 )
            sub_608B7240(v9, ~FIELD_U32(a1, 128), 0.0);
        }
        sub_608A8604(&v8, SoundSystem_instance + 68);
        if ( v8 )
        {
          sub_608B7240(v8, FIELD_U32(a1, 128), 1.0);
          if ( v8 )
            sub_608B7240(v8, ~FIELD_U32(a1, 128), 0.0);
        }
        sub_608A86F0(&v8);
        sub_608A86F0(&v9);
      }
      FIELD_U8(a1, 72) = FIELD_U32(a1, 128);
      FIELD_U32(a1, 124) = -1;
      return sub_608AE348(v10);
    }
  }
  return result;
}

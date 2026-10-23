/* STRM_BGM_ODAI_CLEAR_ref
 * address: 0x607893AC   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall STRM_BGM_ODAI_CLEAR_ref(int a1)
{
  int v2; // r1
  _BYTE *v3; // r2
  int v4; // r12
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r0
  const char *v11; // r1
  int v12; // r0
  int v13; // r0
  int result; // r0

  sub_60777B74(dword_60CBFA90);
  sub_6077B090((unsigned int *)dword_60CBFBC0);
  sub_6078962C(a1);
  if ( FIELD_U32(dword_60C99DD4, 764) == 1 && !sub_603FBA24(dword_60C99DD4) )
    sub_60777EEC(dword_60CBFA90);
  sub_60789778(a1);
  v2 = dword_60C99DD4;
  v3 = (_BYTE *)(dword_60C99DD4 + 272);
  if ( FIELD_U32(dword_60C99DD4, 764) == 2 )
  {
    v4 = dword_60C99DEC;
    v5 = dword_60C99DD4 + 272;
    if ( !dword_60C99DD4 )
      v5 = dword_60C99DEC + 16;
    if ( FIELD_U8(v5, 20) )
    {
      v6 = FIELD_U32(v5, 72);
      if ( v6 <= 0 )
        v6 = 0;
    }
    else
    {
      v6 = 0;
    }
    if ( FIELD_U8(v5, 92) && v6 < FIELD_U32(v5, 144) )
      v6 = FIELD_U32(v5, 144);
    if ( FIELD_U8(v5, 164) && v6 < FIELD_U32(v5, 216) )
      v6 = FIELD_U32(v5, 216);
    if ( FIELD_U8(v5, 236) )
    {
      v7 = FIELD_U32(v5, 288);
      if ( v6 < v7 )
        v6 = v7;
    }
    FIELD_U32(a1, 188) = v6;
  }
  else
  {
    v4 = dword_60C99DEC;
  }
  if ( !v2 )
    v3 = (_BYTE *)(v4 + 16);
  v8 = dword_60C9CF0C;
  if ( v3[20] && !v3[49] && (FIELD_U8(dword_60C9CF0C, 1404) & 1) != 0 )
    v3[49] = 1;
  if ( v3[92] && !v3[121] && (FIELD_U8(v8, 1404) & 2) != 0 )
    v3[121] = 1;
  if ( v3[164] && !v3[193] && (FIELD_U8(v8, 1404) & 4) != 0 )
    v3[193] = 1;
  if ( v3[236] && !v3[265] && (FIELD_U8(v8, 1404) & 8) != 0 )
    v3[265] = 1;
  v9 = FIELD_U32(a1, 172);
  if ( v9 )
  {
    v10 = v9 - 1;
    FIELD_U32(a1, 172) = v10;
    if ( !v10 )
    {
      if ( FIELD_U8(a1, 176) )
        v11 = "STRM_BGM_ODAI_CLEAR";
      else
        v11 = "STRM_BGM_COURSE_OUT_ALL_BUBBLE";
      sub_608091A4(SoundSystem_instance, v11);
    }
  }
  SE_PLY_HPDP_SPECIAL_ref(a1);
  v12 = FIELD_U32(a1, 184);
  if ( v12 )
    FIELD_U32(a1, 184) = v12 - 1;
  v13 = FIELD_U32(a1, 160);
  if ( v13 )
    FIELD_U32(a1, 160) = v13 - 1;
  result = FIELD_U8(a1, 157);
  if ( FIELD_U8(a1, 157) )
  {
    FIELD_U32(a1, 160) = 60;
    return 60;
  }
  return result;
}

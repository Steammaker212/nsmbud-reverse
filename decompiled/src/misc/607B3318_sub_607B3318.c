/* sub_607B3318
 * address: 0x607B3318   size: 884   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_607B3318(int a1)
{
  unsigned int result; // r0
  int v3; // r1
  int v4; // r1
  int v5; // r1
  int v6; // r1
  int v7; // r1
  int v8; // r1
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r1
  int v23; // r1
  int v24; // r1
  int v25; // r1
  int v26; // r1
  int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r1
  float v31; // s0
  int v32; // r1
  int v33; // r1
  int v34; // r1
  int v35; // r1

  result = FIELD_U8(a1, 1205);
  if ( (result & 0x40) == 0 )
  {
    sub_6075FD24((_DWORD *)a1);
    v3 = FIELD_U32(a1, 11400);
    if ( v3 )
    {
      if ( !FIELD_U32(dword_60C995D0, 32) && !FIELD_U8(PlayerMgr_instance, 136) )
      {
        v4 = v3 - 1;
        FIELD_U32(a1, 11400) = v4;
        if ( !v4 )
          sub_60409C18(dword_60C9A1F0);
      }
    }
    v5 = FIELD_U32(a1, 14868);
    if ( v5 )
      FIELD_U32(a1, 14868) = v5 - 1;
    sub_60797430(a1);
    v6 = FIELD_U32(a1, 12060);
    if ( v6 )
      FIELD_U32(a1, 12060) = v6 - 1;
    v7 = FIELD_U32(a1, 12064);
    if ( v7 )
      FIELD_U32(a1, 12064) = v7 - 1;
    v8 = FIELD_U32(a1, 12076);
    if ( v8 )
      FIELD_U32(a1, 12076) = v8 - 1;
    v9 = FIELD_U32(a1, 12080);
    if ( v9 )
      FIELD_U32(a1, 12080) = v9 - 1;
    v10 = FIELD_U32(a1, 12380);
    if ( v10 )
      FIELD_U32(a1, 12380) = v10 - 1;
    v11 = FIELD_U32(a1, 12084);
    if ( v11 )
      FIELD_U32(a1, 12084) = v11 - 1;
    v12 = FIELD_U32(a1, 12088);
    if ( v12 )
      FIELD_U32(a1, 12088) = v12 - 1;
    v13 = FIELD_U32(a1, 12092);
    if ( v13 )
      FIELD_U32(a1, 12092) = v13 - 1;
    v14 = FIELD_U32(a1, 11480);
    if ( v14 )
      FIELD_U32(a1, 11480) = v14 - 1;
    v15 = FIELD_U32(a1, 12136);
    if ( v15 )
      FIELD_U32(a1, 12136) = v15 - 1;
    v16 = FIELD_U32(a1, 12204);
    if ( v16 )
      FIELD_U32(a1, 12204) = v16 - 1;
    v17 = FIELD_U32(a1, 12208);
    if ( v17 )
      FIELD_U32(a1, 12208) = v17 - 1;
    v18 = FIELD_U32(a1, 12216);
    if ( v18 )
      FIELD_U32(a1, 12216) = v18 - 1;
    v19 = FIELD_U32(a1, 12840);
    if ( v19 )
      FIELD_U32(a1, 12840) = v19 - 1;
    v20 = FIELD_U32(a1, 12920);
    if ( v20 )
      FIELD_U32(a1, 12920) = v20 - 1;
    v21 = FIELD_U32(a1, 12924);
    if ( v21 )
      FIELD_U32(a1, 12924) = v21 - 1;
    v22 = FIELD_U32(a1, 12268);
    if ( v22 )
      FIELD_U32(a1, 12268) = v22 - 1;
    v23 = FIELD_U32(a1, 12412);
    if ( v23 )
      FIELD_U32(a1, 12412) = v23 - 1;
    v24 = FIELD_U32(a1, 13056);
    if ( !v24 || (v25 = v24 - 1, (FIELD_U32(a1, 13056) = v25) == 0) )
      FIELD_U8(a1, 13060) = 0;
    v26 = FIELD_U32(a1, 12184);
    if ( v26 )
      FIELD_U32(a1, 12184) = v26 - 1;
    v27 = FIELD_U32(a1, 12188);
    if ( v27 )
      FIELD_U32(a1, 12188) = v27 - 1;
    v28 = FIELD_U32(a1, 13000);
    if ( v28 )
      FIELD_U32(a1, 13000) = v28 - 1;
    v29 = FIELD_U32(a1, 13052);
    if ( v29 )
      FIELD_U32(a1, 13052) = v29 - 1;
    v30 = FIELD_U32(a1, 12788);
    if ( v30 )
      FIELD_U32(a1, 12788) = v30 - 1;
    v31 = FIELD_F32(a1, 15060);
    if ( v31 != 0.0 )
      FIELD_F32(a1, 15060) = v31 + -1.0;
    v32 = FIELD_U32(a1, 15068);
    if ( v32 )
      FIELD_U32(a1, 15068) = v32 - 1;
    v33 = FIELD_U32(a1, 15084);
    if ( v33 )
      FIELD_U32(a1, 15084) = v33 - 1;
    result = a1 + 12124;
    v34 = FIELD_U32(a1, 12124);
    if ( !v34 || (v35 = v34 - 1, (*(_DWORD *)result = v35) == 0) )
    {
      result = FIELD_U32(a1, 1220) & 0xBFFFFFFF;
      FIELD_U32(a1, 1220) = result;
    }
  }
  return result;
}

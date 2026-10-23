/* SE_SYS_SCORE_COUNT_ref
 * address: 0x604E8830   size: 800   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_SCORE_COUNT_ref(int a1)
{
  int result; // r0
  int v3; // r10
  _WORD *v4; // r6
  int v5; // r0
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r1
  int v26; // r4
  int v27; // r1
  int v28; // r0
  int v29; // r2

  result = FIELD_U8(a1, 564);
  if ( result )
  {
    result = FIELD_U8(a1, 565);
    if ( !FIELD_U8(a1, 565) )
    {
      v3 = 999999999;
      v4 = (_WORD *)(a1 + 566);
      v5 = dword_60C99DD4;
      v6 = FIELD_U32(dword_60C99DD4, 764);
      --FIELD_U16(a1, 566);
      v7 = FIELD_U32(v5, 728);
      v8 = v7 + 50;
      if ( v7 + 50 >= 999999999 )
        v8 = 999999999;
      if ( v7 < -50 )
        v8 = 0;
      FIELD_U32(v5, 728) = v8;
      if ( v6 == 1 )
      {
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v9 = FIELD_U32(v5, 728);
        v10 = v9 + 50;
        if ( v9 + 50 >= 999999999 )
          v10 = 999999999;
        if ( v9 < -50 )
          v10 = 0;
        FIELD_U32(v5, 728) = v10;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v11 = FIELD_U32(v5, 728);
        v12 = v11 + 50;
        if ( v11 + 50 >= 999999999 )
          v12 = 999999999;
        if ( v11 < -50 )
          v12 = 0;
        FIELD_U32(v5, 728) = v12;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v13 = FIELD_U32(v5, 728);
        v14 = v13 + 50;
        if ( v13 + 50 >= 999999999 )
          v14 = 999999999;
        if ( v13 < -50 )
          v14 = 0;
        FIELD_U32(v5, 728) = v14;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v15 = FIELD_U32(v5, 728);
        v16 = v15 + 50;
        if ( v15 + 50 >= 999999999 )
          v16 = 999999999;
        if ( v15 < -50 )
          v16 = 0;
        FIELD_U32(v5, 728) = v16;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v17 = FIELD_U32(v5, 728);
        v18 = v17 + 50;
        if ( v17 + 50 >= 999999999 )
          v18 = 999999999;
        if ( v17 < -50 )
          v18 = 0;
        FIELD_U32(v5, 728) = v18;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v19 = FIELD_U32(v5, 728);
        v20 = v19 + 50;
        if ( v19 + 50 >= 999999999 )
          v20 = 999999999;
        if ( v19 < -50 )
          v20 = 0;
        FIELD_U32(v5, 728) = v20;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v21 = FIELD_U32(v5, 728);
        v22 = v21 + 50;
        if ( v21 + 50 >= 999999999 )
          v22 = 999999999;
        if ( v21 < -50 )
          v22 = 0;
        FIELD_U32(v5, 728) = v22;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v23 = FIELD_U32(v5, 728);
        v24 = v23 + 50;
        if ( v23 + 50 >= 999999999 )
          v24 = 999999999;
        if ( v23 < -50 )
          v24 = 0;
        FIELD_U32(v5, 728) = v24;
        if ( !*v4 )
          goto LABEL_54;
        --*v4;
        v25 = FIELD_U32(v5, 728);
        if ( v25 + 50 < 999999999 )
          v3 = v25 + 50;
        if ( v25 < -50 )
          v3 = 0;
        FIELD_U32(v5, 728) = v3;
        result = (unsigned __int16)*v4;
        if ( !*v4 )
        {
LABEL_54:
          FIELD_U8(a1, 565) = 1;
          return 1;
        }
      }
      else if ( *v4 )
      {
        v26 = 0;
        while ( 1 )
        {
          result = sub_60808374(SoundSystem_instance, "SE_SYS_SCORE_COUNT", 0, 0);
          if ( ++v26 > 9 )
            break;
          v27 = dword_60C99DD4;
          --*v4;
          v28 = FIELD_U32(v27, 728);
          v29 = v28 + 50;
          if ( v28 + 50 >= 999999999 )
            v29 = 999999999;
          if ( v28 < -50 )
            v29 = 0;
          FIELD_U32(v27, 728) = v29;
          if ( !*v4 )
            goto LABEL_63;
        }
      }
      else
      {
LABEL_63:
        FIELD_U8(a1, 565) = 1;
        return sub_60807EF0(SoundSystem_instance, "SE_SYS_SCORE_COUNT_FINISH", 0, 1);
      }
    }
  }
  return result;
}

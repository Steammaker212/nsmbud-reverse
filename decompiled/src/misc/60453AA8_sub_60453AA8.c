/* sub_60453AA8
 * address: 0x60453AA8   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60453AA8(int a1, unsigned int a2)
{
  int v3; // r0
  int v4; // r0
  unsigned int *v5; // r6
  unsigned int result; // r0
  bool v7; // cc
  int v8; // r7
  int v9; // r5
  unsigned int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  unsigned int v15; // r1
  int v16; // r7
  int v17; // r5
  unsigned int v18; // r0
  unsigned int v19; // r1
  unsigned int v20; // r1
  unsigned int v21; // r0
  int v22; // r0
  unsigned int v23; // r1
  unsigned int v24; // r5
  unsigned int v25; // r1
  float v26; // s6
  float v27[9]; // [sp+Ch] [bp-24h] BYREF

  v3 = FIELD_U32(a1, 1316);
  if ( v3 == 1 )
  {
    v5 = (unsigned int *)(a1 + 1396);
    a2 = FIELD_U32(a1, 1396);
    if ( a2 != -1 )
      sub_604564B8(FIELD_U32(a1, 1388), (unsigned __int8)a2, FIELD_U8(a1, 1400));
  }
  else
  {
    if ( v3 == 2 )
    {
      v4 = FIELD_U32(a1, 1388);
      a2 = FIELD_U8(v4, 223);
      if ( a2 == 255 )
        a2 = -1;
      FIELD_U32(a1, 1396) = a2;
      FIELD_U32(a1, 1400) = FIELD_U8(v4, 224);
    }
    v5 = (unsigned int *)(a1 + 1396);
  }
  result = *v5;
  if ( *v5 != -1 )
  {
    if ( result == 4 )
    {
      FIELD_U8(a1, 1413) = 1;
LABEL_41:
      *v5 = -1;
      return -1;
    }
    v7 = result > 3;
    if ( result <= 3 )
    {
      a2 = FIELD_U32(a1, 1400);
      v7 = a2 > 5;
    }
    if ( !v7 )
    {
      v8 = dword_60C99DD4;
      v9 = dword_60C99DD4 + 272;
      v10 = sub_603FCB6C((_DWORD *)(dword_60C99DD4 + 272), a2);
      v11 = *v5;
      if ( v10 == -1 )
      {
        if ( v11 >= 6 )
          v11 = 0;
        v12 = v8 + 72 * v11;
        FIELD_U8(v12, 292) = 0;
        FIELD_U32(v12, 296) = 5;
        FIELD_U32(v12, 300) = 0;
        FIELD_U32(v12, 304) = 0;
        FIELD_U32(v12, 308) = 0;
        FIELD_U32(v12, 312) = 0;
        FIELD_U32(v12, 316) = 100663296;
        memset((void *)(v12 + 320), 0, 44);
      }
      else if ( v10 != v11 )
      {
        sub_603FCC50(v9, v11, v10);
      }
      v13 = *v5;
      if ( *v5 >= 6 )
        v13 = 0;
      v14 = v8 + 72 * v13;
      FIELD_U8(v14, 292) = 1;
      FIELD_U32(v14, 304) = FIELD_U32(a1, 1400);
      FIELD_U8(v14, 321) = 0;
      v15 = FIELD_U32(a1, 1400);
      if ( v15 <= 5 )
        FIELD_U32(v14, 308) = v15;
      if ( FIELD_U32(a1, 1316) != 2 )
      {
        v16 = dword_60C99DEC;
        v17 = dword_60C99DEC + 16;
        v18 = sub_603FCB6C((_DWORD *)(dword_60C99DEC + 16), FIELD_U32(a1, 1400));
        v19 = *v5;
        if ( v18 == -1 )
        {
          if ( v19 >= 6 )
            v19 = 0;
          v20 = v16 + 72 * v19;
          FIELD_U8(v20, 36) = 0;
          FIELD_U32(v20, 40) = 5;
          FIELD_U32(v20, 44) = 0;
          FIELD_U32(v20, 48) = 0;
          FIELD_U32(v20, 52) = 0;
          FIELD_U32(v20, 56) = 0;
          FIELD_U32(v20, 60) = 100663296;
          memset((void *)(v20 + 64), 0, 44);
        }
        else if ( v18 != v19 )
        {
          sub_603FCC50(v17, v19, v18);
        }
        v21 = *v5;
        if ( *v5 >= 6 )
          v21 = 0;
        v22 = v16 + 72 * v21;
        FIELD_U8(v22, 36) = 1;
        FIELD_U32(v22, 48) = FIELD_U32(a1, 1400);
        FIELD_U8(v22, 65) = 0;
        v23 = FIELD_U32(a1, 1400);
        if ( v23 <= 5 )
          FIELD_U32(v22, 52) = v23;
      }
      v24 = 0;
      v25 = 0;
      v26 = FIELD_F32(dword_60CC6484, 124) + (float)(FIELD_F32(dword_60CC6484, 108) * 0.5);
      v27[0] = FIELD_F32(dword_60CC6484, 112) + (float)(FIELD_F32(dword_60CC6484, 104) * 0.5);
      v27[1] = v26;
      v27[2] = 0.0;
      if ( *v5 < 6 )
        v25 = *v5;
      sub_60787A24(*v5, v27, *(_DWORD *)(dword_60C99DD4 + 72 * v25 + 300), FIELD_U32(a1, 1400), 0, 0);
      if ( *v5 < 4 )
        v24 = *v5;
      sub_60799130(*(_DWORD *)(PlayerMgr_instance + 4 * v24 + 32));
      goto LABEL_41;
    }
  }
  return result;
}

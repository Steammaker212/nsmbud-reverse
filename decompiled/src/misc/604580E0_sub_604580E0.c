/* sub_604580E0
 * address: 0x604580E0   size: 1656   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_604580E0(int a1, int a2)
{
  char v2; // r12
  int v3; // r8
  int v5; // r4
  int v6; // r0
  int v7; // r5
  int v8; // r8
  int *v9; // r9
  int v10; // r6
  int v11; // r0
  int v12; // r1
  char *v13; // r0
  int i; // r1
  int v15; // r4
  char *v16; // r0
  int j; // r1
  char v18; // r12
  char v19; // r12
  int v20; // r4
  unsigned int v21; // r1
  int v22; // r9
  int v23; // r5
  int v24; // r6
  int v25; // r0
  int *v26; // r0
  unsigned int v27; // s0
  int v29; // r7
  int v30; // r5
  int v31; // r0
  int v32; // r8
  int v33; // r11
  int v34; // r0
  int *v35; // r0
  unsigned int v36; // [sp+0h] [bp-48h]
  __guard *v38; // [sp+Ch] [bp-3Ch]
  float v39[11]; // [sp+1Ch] [bp-2Ch] BYREF

  v3 = a2;
  v5 = dword_60CCF448;
  v6 = dword_60C9CFB8;
  v7 = FIELD_U32(dword_60C9CFB8, 16);
  if ( FIELD_U32(dword_60CCF448, 212) )
  {
    v8 = 4;
    v9 = *(int **)(dword_60CCF448 + 220);
    do
    {
      v10 = *v9;
      if ( ((unsigned int)&dword_60C8C224 & ~(1615167860 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
      {
        dword_60C8C220 = (int)&off_60BD84A8;
        _cxa_guard_release(&dword_60C8C224);
      }
      v11 = (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C8C220);
      if ( v10 && v11 == 1 )
      {
        if ( !v8 )
          goto LABEL_12;
        --v8;
      }
      ++v9;
    }
    while ( v9 != (int *)(FIELD_U32(v5, 220) + 4 * FIELD_U32(v5, 212)) );
    v10 = 0;
LABEL_12:
    v3 = a2;
    v6 = dword_60C9CFB8;
  }
  else
  {
    v10 = 0;
  }
  if ( FIELD_U8(v6, 83) )
  {
    v12 = FIELD_U32(a1, 360);
    if ( FIELD_U8(v6, 81) )
    {
      if ( v10 && !v12 && (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 20))(v10) == 1 )
      {
        v13 = (char *)&unk_60B02400 + 152 * v7;
        for ( i = 0; i != 19; ++i )
        {
          if ( (FIELD_U32(v10, 272) & *(_DWORD *)&v13[8 * i + 4]) != 0 )
            FIELD_U32(a1, 272) |= *(_DWORD *)&v13[8 * i];
        }
        if ( FIELD_F32(v10, 288) < -0.7 )
          FIELD_U32(a1, 272) |= 4u;
        if ( (unsigned int)FIELD_U8(v10, 353) - 1 > 1
          || (v15 = 1,
              sqrtf(
                (float)(FIELD_F32(v10, 288) * FIELD_F32(v10, 288))
              + (float)(FIELD_F32(v10, 284) * FIELD_F32(v10, 284))) > 0.65) )
        {
          v15 = 1;
          FIELD_U8(a1, 448) = 1;
        }
        goto LABEL_38;
      }
    }
    else
    {
      v15 = 0;
      if ( v12 == 4 )
        goto LABEL_38;
    }
  }
  v16 = (char *)&unk_60B02400 + 152 * v7;
  for ( j = 0; j != 19; ++j )
  {
    if ( (FIELD_U32(v3, 272) & *(_DWORD *)&v16[8 * j + 4]) != 0 )
      FIELD_U32(a1, 272) |= *(_DWORD *)&v16[8 * j];
  }
  if ( FIELD_F32(v3, 288) < -0.7 )
    FIELD_U32(a1, 272) |= 4u;
  if ( (unsigned int)FIELD_U8(v3, 353) - 1 > 1
    || (v15 = 0,
        sqrtf((float)(FIELD_F32(v3, 288) * FIELD_F32(v3, 288)) + (float)(FIELD_F32(v3, 284) * FIELD_F32(v3, 284))) > 0.65) )
  {
    v15 = 0;
    FIELD_U8(a1, 448) = 1;
  }
LABEL_38:
  if ( sub_60454CDC(dword_60C9CF0C, v39) == 1 )
    sub_6090905C(a1, 1, 1, v39);
  if ( v15 )
    v3 = v10;
  if ( ((unsigned int)&dword_60C8C224 & ~(1615168548 << v18) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C224) )
  {
    dword_60C8C220 = (int)&off_60BD84A8;
    _cxa_guard_release(&dword_60C8C224);
  }
  if ( !v3 || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C8C220) != 1 )
  {
    FIELD_U32(a1, 412) = 1065353216;
    FIELD_U32(a1, 416) = 0;
LABEL_58:
    FIELD_U32(a1, 376) = 0;
    v26 = &dword_60B3B964;
    FIELD_U32(a1, 380) = 0;
    goto LABEL_59;
  }
  v20 = FIELD_U32(v3, 320);
  v21 = FIELD_U8(v3, 353);
  v22 = v3 + 316;
  v36 = v21;
  if ( v20 == v3 + 316 )
  {
    v24 = 0;
  }
  else
  {
    v23 = FIELD_U32(v3, 328);
    v24 = v20 - v23;
    while ( 1 )
    {
      if ( ((unsigned int)&dword_60C9CF00 & ~(1615168760 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF00) )
      {
        dword_60C9CEFC = (int)&off_60BFB100;
        _cxa_guard_release(&dword_60C9CF00);
      }
      v25 = (**(int (__fastcall ***)(int, int *))v24)(v24, &dword_60C9CEFC);
      if ( v24 )
      {
        if ( v25 == 1 )
          break;
      }
      v20 = FIELD_U32(v20, 4);
      v24 = v20 - v23;
      if ( v20 - v23 == v22 - FIELD_U32(v3, 328) )
      {
        v24 = 0;
        break;
      }
    }
    v21 = v36;
  }
  v29 = v24;
  if ( v21 == 2 )
  {
    v30 = FIELD_U32(v3, 320);
    if ( v30 != v22 )
    {
      v38 = (__guard *)v3;
      v31 = FIELD_U32(v3, 328);
      v32 = 1;
      v33 = v31;
      v29 = v30 - v31;
      do
      {
        if ( ((unsigned int)&dword_60C9CF00 & ~(1615169112 << v19) & 1) == 0 && _cxa_guard_acquire(&dword_60C9CF00) )
        {
          dword_60C9CEFC = (int)&off_60BFB100;
          _cxa_guard_release(&dword_60C9CF00);
        }
        v34 = (**(int (__fastcall ***)(int, int *))v29)(v29, &dword_60C9CEFC);
        if ( v29 && v34 == 1 )
        {
          if ( !v32 )
            goto LABEL_74;
          --v32;
        }
        v30 = FIELD_U32(v30, 4);
        v29 = v30 - v33;
      }
      while ( v30 - v33 != v22 - v38[82] );
      v29 = 0;
LABEL_74:
      v21 = v36;
      if ( !v24 )
        goto LABEL_82;
      goto LABEL_78;
    }
    v29 = 0;
  }
  if ( !v24 )
  {
LABEL_82:
    v35 = &dword_60B3B94C;
    goto LABEL_83;
  }
LABEL_78:
  if ( FIELD_S32(v24, 1184) < 1 )
    goto LABEL_84;
  v35 = (int *)(v24 + 80);
  if ( v21 < 3 )
    v35 = (int *)(v24 + 56);
LABEL_83:
  FIELD_U32(a1, 412) = *v35;
  FIELD_U32(a1, 416) = v35[1];
LABEL_84:
  if ( !v29 )
    goto LABEL_58;
  if ( FIELD_S32(v29, 1184) < 1 )
    goto LABEL_60;
  FIELD_U32(a1, 376) = FIELD_U32(v29, 20);
  FIELD_U32(a1, 380) = FIELD_U32(v29, 24);
  v26 = (int *)(v29 + 28);
LABEL_59:
  FIELD_U32(a1, 384) = *v26;
LABEL_60:
  v27 = (int)(float)(FIELD_F32(a1, 416) * 1073700000.0);
  FIELD_U16(a1, 434) = HIWORD(v27);
  return HIWORD(v27);
}

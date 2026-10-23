/* sub_60834718
 * address: 0x60834718   size: 928   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60834718(int a1, int a2)
{
  int v4; // r1
  _DWORD *v5; // r8
  int v6; // r7
  _DWORD *v7; // r7
  int *v8; // r3
  unsigned int v9; // r5
  unsigned int v10; // r10
  int v11; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r1
  char v14; // r1
  char v15; // r11
  int *v16; // r9
  int v17; // r0
  char *v18; // r6
  char v19; // r4
  int v20; // r0
  char *v21; // r6
  char v22; // r4
  int v23; // r0
  char *v24; // r6
  char v25; // r4
  int v26; // r0
  char *v27; // r6
  char v28; // r4
  int v29; // r0
  char *v30; // r6
  char v31; // r4
  int v32; // r0
  char *v33; // r6
  char v34; // r4
  int v35; // [sp+4h] [bp-3Ch] BYREF
  int v36; // [sp+8h] [bp-38h]
  int v37; // [sp+Ch] [bp-34h]
  int v38; // [sp+10h] [bp-30h]
  int v39; // [sp+14h] [bp-2Ch]
  int v40; // [sp+18h] [bp-28h]

  v4 = FIELD_U32(a1, 20);
  v35 = v4;
  v5 = (_DWORD *)(dword_60C99DD4 + 272);
  v6 = FIELD_U32(a1, 44);
  if ( !dword_60C99DD4 )
    v5 = (_DWORD *)(dword_60C99DEC + 16);
  v36 = FIELD_U32(a1, 44);
  v37 = FIELD_U32(a1, 68);
  v38 = FIELD_U32(a1, 92);
  v39 = FIELD_U32(a1, 116);
  v40 = FIELD_U32(a1, 140);
  if ( v5[123] )
  {
    if ( a2 >= 1 )
    {
      v7 = (_DWORD *)(a1 + 12);
      v8 = &v35;
      v9 = 0;
      do
      {
        v10 = 0;
        if ( v9 < 6 )
          v10 = v9;
        if ( *((_BYTE *)v7 - 12) )
        {
          v11 = v8[v10];
          v12 = &v5[18 * v10];
          v12[8] = v11;
          v12[9] = *(v7 - 2);
          v13 = v12 + 11;
          *((_BYTE *)v12 + 50) = 0;
          v12[7] = 0;
          v12[10] = 0;
          v12[15] = 0;
          v12[16] = 0;
          v12[17] = 0;
          v12[18] = 0;
          v12[19] = 0;
          v12[20] = 0;
          v12[21] = 0;
          v12[6] = 5;
          if ( v11 == 6 )
          {
            *v13 = *v7;
            v14 = *((_BYTE *)v7 - 11);
          }
          else
          {
            *v13 = 100663296;
            v14 = 0;
          }
          v15 = 1;
          *((_BYTE *)v12 + 48) = v14;
        }
        else
        {
          v15 = 0;
          if ( dword_60C9CFB8 )
          {
            v16 = v8;
            nullsub_19();
            v8 = v16;
          }
        }
        ++v9;
        v7 += 6;
        LOBYTE(v5[18 * v10 + 5]) = v15;
      }
      while ( a2 != v9 );
    }
    FIELD_U8(dword_60CC6D78, 98529) = 0;
    sub_6081F524();
  }
  else
  {
    v17 = sub_603FCBD8(v5, v4);
    v18 = (char *)v17;
    if ( v17 )
    {
      v19 = 1;
      FIELD_U32(v17, 16) = FIELD_U32(a1, 4);
      if ( !*(_BYTE *)a1 )
      {
        v19 = 0;
        if ( dword_60C9CFB8 )
          nullsub_19();
      }
      *v18 = v19;
      v6 = v36;
    }
    v20 = sub_603FCBD8(v5, v6);
    v21 = (char *)v20;
    if ( v20 )
    {
      v22 = 1;
      FIELD_U32(v20, 16) = FIELD_U32(a1, 28);
      if ( !FIELD_U8(a1, 24) )
      {
        v22 = 0;
        if ( dword_60C9CFB8 )
          nullsub_19();
      }
      *v21 = v22;
    }
    v23 = sub_603FCBD8(v5, v37);
    v24 = (char *)v23;
    if ( v23 )
    {
      v25 = 1;
      FIELD_U32(v23, 16) = FIELD_U32(a1, 52);
      if ( !FIELD_U8(a1, 48) )
      {
        v25 = 0;
        if ( dword_60C9CFB8 )
          nullsub_19();
      }
      *v24 = v25;
    }
    v26 = sub_603FCBD8(v5, v38);
    v27 = (char *)v26;
    if ( v26 )
    {
      v28 = 1;
      FIELD_U32(v26, 16) = FIELD_U32(a1, 76);
      if ( !FIELD_U8(a1, 72) )
      {
        v28 = 0;
        if ( dword_60C9CFB8 )
          nullsub_19();
      }
      *v27 = v28;
    }
    v29 = sub_603FCBD8(v5, v39);
    v30 = (char *)v29;
    if ( v29 )
    {
      v31 = 1;
      FIELD_U32(v29, 16) = FIELD_U32(a1, 100);
      if ( !FIELD_U8(a1, 96) )
      {
        v31 = 0;
        if ( dword_60C9CFB8 )
          nullsub_19();
      }
      *v30 = v31;
    }
    v32 = sub_603FCBD8(v5, v40);
    v33 = (char *)v32;
    if ( v32 )
    {
      v34 = 1;
      FIELD_U32(v32, 16) = FIELD_U32(a1, 124);
      if ( !FIELD_U8(a1, 120) )
      {
        v34 = 0;
        if ( dword_60C9CFB8 )
          nullsub_19();
      }
      *v33 = v34;
    }
    sub_603FCCE4(v5, &v35);
  }
}

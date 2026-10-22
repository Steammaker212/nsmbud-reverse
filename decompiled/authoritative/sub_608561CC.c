int __fastcall sub_608561CC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  unsigned int v11; // r0
  bool v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r2
  int *v16; // r5
  int v17; // r0
  int v18; // r1
  int *v19; // r3
  int v20; // r1
  int v21; // r1
  int *v22; // r2
  int *v23; // r6
  bool v24; // zf
  int v25; // r1
  int v26; // r0
  int v27; // r4
  int v28; // r1
  int v29; // r3
  char *v30; // r6
  char *v31; // r3
  int *v32; // r1
  int v33; // r5
  int v34; // r10
  int v35; // r7
  int v36; // r4
  int v37; // r0
  int v38; // r9
  int v39; // r1
  _DWORD *v40; // r0
  _DWORD v42[35]; // [sp+28h] [bp-D0h] BYREF
  _BYTE v43[68]; // [sp+B4h] [bp-44h] BYREF

  a1[9] = a5;
  memset(v42, 0, 136);
  v42[4] = a5;
  v42[5] = a1;
  v11 = *(_DWORD *)(a4 + 8);
  LOBYTE(v42[6]) = (v11 | 0x10000) == 134283264;
  v12 = 1;
  if ( HIBYTE(v11) <= 8u )
    v12 = (v11 & 0xFF000000) == 0x8000000 && (v11 & 0xFF0000) > 0x20000;
  BYTE1(v42[6]) = v12;
  if ( a7 )
  {
    v13 = a7[6];
    v42[7] = a7[5];
    v42[8] = v13;
    v14 = a7[4];
  }
  else
  {
    v42[7] = 1065353216;
    v42[8] = 1065353216;
    v14 = 0;
  }
  v42[16] = v14;
  v42[11] = *(_DWORD *)(a6 + 16);
  v42[12] = *(_DWORD *)(a6 + 20);
  v42[14] = *(_DWORD *)(a6 + 28);
  LOBYTE(v42[24]) = *(_BYTE *)(a6 + 68);
  v15 = 0;
  BYTE1(v42[24]) = *(_BYTE *)(a6 + 69);
  LOWORD(v42[17]) = 0;
  LOWORD(v42[18]) = 0;
  v42[20] = 0;
  v42[9] = 0;
  v42[10] = 0;
  v42[21] = a1[12];
  v42[22] = a1[13];
  v42[13] = a1;
  v42[25] = v11;
  v42[15] = v42;
  v16 = (int *)(a4 + *(unsigned __int16 *)(a4 + 6));
  v42[27] = v16;
  v17 = *v16;
  v42[29] = *v16;
  if ( v42[29] <= 829317487 )
  {
    if ( v17 <= 828732006 )
    {
      if ( v17 <= 828665462 )
      {
        if ( v17 != 828598640 )
        {
          v18 = 828665442;
          goto LABEL_24;
        }
        goto LABEL_40;
      }
      if ( v17 == 828665463 )
        goto LABEL_40;
      v19 = v16;
      if ( v17 != 828727664 )
        goto LABEL_49;
      v15 = 0;
      v42[32] = 0;
      v42[20] = 0;
LABEL_48:
      v19 = v16;
      goto LABEL_49;
    }
    if ( v17 > 829189733 )
    {
      if ( v17 == 829189734 )
      {
        v42[1] = v16;
      }
      else if ( v17 == 829192308 )
      {
        v42[0] = v16;
      }
      goto LABEL_48;
    }
    if ( v17 != 828732007 )
    {
      if ( v17 == 828993651 )
        v42[3] = v16;
      goto LABEL_48;
    }
    v20 = -1;
    goto LABEL_46;
  }
  if ( v17 <= 829714018 )
  {
    if ( v17 <= 829649510 )
    {
      if ( v17 == 829317488 )
        goto LABEL_40;
      v19 = v16;
      if ( v17 != 829645168 )
        goto LABEL_49;
      v15 = 0;
      v42[20] = 0;
      goto LABEL_48;
    }
    if ( v17 != 829649511 )
    {
      if ( v17 == 829710701 )
        v42[2] = v16;
      goto LABEL_48;
    }
    v20 = 1;
LABEL_46:
    v42[33] = v20;
    goto LABEL_48;
  }
  if ( v17 > 829716595 )
  {
    if ( v17 != 829716596 )
    {
      v19 = v16;
      if ( v17 != 829716844 )
        goto LABEL_49;
      v42[9] = v16[5];
      v42[10] = v16[6];
    }
  }
  else if ( v17 != 829714019 )
  {
    v18 = 829715056;
LABEL_24:
    v19 = v16;
    if ( v17 != v18 )
      goto LABEL_49;
  }
LABEL_40:
  if ( *(unsigned __int16 *)(a4 + 16) >= 2u && (v19 = (int *)((char *)v16 + v16[1]), *v19 == 828666741) )
  {
    v15 = 1;
    v42[28] = (char *)v16 + v16[1];
  }
  else
  {
    v15 = 0;
    v19 = v16;
    v42[28] = 0;
  }
LABEL_49:
  v21 = v15 + 1;
  v22 = 0;
  v42[30] = v21;
  if ( v21 < *(unsigned __int16 *)(a4 + 16) )
    v22 = (int *)((char *)v19 + v19[1]);
  while ( 1 )
  {
    v23 = v16;
    v42[31] = v22;
    if ( v17 <= 829452902 )
    {
      if ( v17 > 828665462 )
      {
        if ( v17 == 828665463 )
          goto LABEL_68;
        v25 = 829317488;
      }
      else
      {
        if ( v17 == 828598640 )
          goto LABEL_68;
        v25 = 828665442;
      }
      v16 = v22;
      if ( v17 != v25 )
        goto LABEL_71;
      goto LABEL_68;
    }
    if ( v17 <= 829715055 )
    {
      if ( v17 == 829452903 )
      {
        v33 = a1[4];
        if ( v33 )
        {
          if ( v42[33] == 1 )
          {
            v34 = a2;
            v35 = a1[3];
            v36 = a3;
            v37 = dword_60CC7F88(28, 4, dword_60CC7F90);
            v38 = v37;
            if ( v37 )
              sub_60855864(v37, v23, v35);
            else
              v38 = 0;
            sub_60855AB8(v33, v38);
            a2 = v34;
            a3 = v36;
          }
        }
        else
        {
          v40 = (_DWORD *)dword_60CC7F88(8, 4, dword_60CC7F90);
          if ( v40 )
          {
            *v40 = v40;
            v40[1] = v40;
          }
          else
          {
            v40 = 0;
          }
          a1[4] = v40;
        }
      }
      else
      {
        v16 = v22;
        if ( v17 != 829714019 )
          goto LABEL_71;
        if ( v42[11] )
        {
          sub_60853D18(v43, v23, v42[28], v19);
          (*(void (__fastcall **)(_DWORD, int, _DWORD *, _BYTE *))(*(_DWORD *)v42[11] + 8))(v42[11], a3, a1, v43);
        }
      }
      goto LABEL_70;
    }
    v24 = v17 == 829715056;
    if ( v17 != 829715056 )
      v24 = v17 == 829716596;
    if ( !v24 )
    {
      v16 = v22;
      if ( v17 != 829716844 )
        goto LABEL_71;
      a1[5] = v23[3];
      a1[6] = v23[4];
      a1[7] = v23 + 7;
      a1[8] = v42[28];
      goto LABEL_70;
    }
LABEL_68:
    v42[23] = v42[28];
    v26 = (*(int (__fastcall **)(_DWORD *, int, int, int *, _DWORD *, _DWORD *, _DWORD *, int))(*a1 + 60))(
            a1,
            a2,
            a3,
            v23,
            a7,
            &v42[7],
            v42,
            v17);
    if ( v26 )
      v42[32] = v26;
LABEL_70:
    v16 = (int *)v42[31];
LABEL_71:
    if ( !v16 )
      return 1;
    v42[27] = v16;
    v27 = v42[30];
    v42[26] = v42[30];
    v17 = *v16;
    v42[29] = *v16;
    if ( v42[29] <= 829317487 )
    {
      if ( v17 > 828732006 )
      {
        if ( v17 > 829189733 )
        {
          if ( v17 == 829189734 )
          {
            v42[1] = v16;
          }
          else if ( v17 == 829192308 )
          {
            v42[0] = v16;
          }
          goto LABEL_135;
        }
        if ( v17 != 828732007 )
        {
          if ( v17 == 828993651 )
            v42[3] = v16;
          goto LABEL_135;
        }
        v39 = v42[33] - 1;
        goto LABEL_125;
      }
      if ( v17 > 828665462 )
      {
        if ( v17 != 828665463 )
        {
          if ( v17 == 828727664 )
          {
            v42[32] = v42[20];
            if ( v42[20] )
              v28 = *(_DWORD *)(v42[20] + 12);
            else
              v28 = 0;
            v42[20] = v28;
          }
          goto LABEL_135;
        }
      }
      else if ( v17 != 828598640 && v17 != 828665442 )
      {
        goto LABEL_135;
      }
      goto LABEL_109;
    }
    if ( v17 <= 829714018 )
    {
      if ( v17 > 829649510 )
      {
        if ( v17 != 829649511 )
        {
          if ( v17 == 829710701 )
            v42[2] = v16;
          goto LABEL_135;
        }
        v39 = v42[33] + 1;
LABEL_125:
        v42[33] = v39;
LABEL_135:
        v32 = v16;
        goto LABEL_136;
      }
      if ( v17 != 829317488 )
      {
        if ( v17 == 829645168 )
          v42[20] = v42[32];
        goto LABEL_135;
      }
      goto LABEL_109;
    }
    if ( v17 > 829716595 )
    {
      if ( v17 == 829716596 )
        goto LABEL_109;
      if ( v17 != 829716844 )
        goto LABEL_135;
      v29 = v42[30] + 1;
      v30 = 0;
      v42[9] = v16[5];
      v42[10] = v16[6];
      if ( v42[30] + 1 >= *(unsigned __int16 *)(a4 + 16) )
      {
LABEL_123:
        v32 = v16;
        v42[28] = 0;
        goto LABEL_136;
      }
    }
    else
    {
      if ( v17 != 829714019 )
      {
        if ( v17 != 829715056 )
          goto LABEL_135;
LABEL_109:
        v31 = 0;
        if ( v42[30] + 1 >= *(unsigned __int16 *)(a4 + 16) )
        {
          v32 = v16;
          v42[28] = 0;
        }
        else
        {
          v32 = (int *)((char *)v16 + v16[1]);
          if ( *v32 == 828666741 )
          {
            v31 = (char *)v16 + v16[1];
            v27 = v42[30] + 1;
          }
          else
          {
            v32 = v16;
          }
          v42[28] = v31;
        }
        goto LABEL_136;
      }
      v29 = v42[30] + 1;
      v30 = 0;
      if ( v42[30] + 1 >= *(unsigned __int16 *)(a4 + 16) )
        goto LABEL_123;
    }
    v32 = (int *)((char *)v16 + v16[1]);
    if ( *v32 == 828666741 )
    {
      v27 = v29;
      v30 = (char *)v16 + v16[1];
    }
    else
    {
      v32 = v16;
    }
    v42[28] = v30;
LABEL_136:
    v19 = (int *)(v27 + 1);
    v22 = 0;
    v42[30] = v27 + 1;
    if ( v27 + 1 < *(unsigned __int16 *)(a4 + 16) )
      v22 = (int *)((char *)v32 + v32[1]);
  }
}

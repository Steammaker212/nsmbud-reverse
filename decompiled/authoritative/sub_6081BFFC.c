int __fastcall sub_6081BFFC(int a1)
{
  int v2; // r0
  int (__fastcall ***v3)(_DWORD, int *); // r4
  char v4; // r12
  int v5; // r0
  unsigned int v6; // r0
  const char *v7; // r0
  int i; // r8
  int v9; // r0
  char *v10; // r6
  int j; // r1
  int v12; // r1
  bool v13; // cc
  char *v14; // r0
  int v15; // r6
  char *v16; // r9
  char *v17; // r11
  signed int v18; // r10
  char *v19; // r6
  int k; // r1
  int v21; // r1
  char *v22; // r0
  int v23; // r6
  char *v24; // r8
  char *v25; // r9
  signed int v26; // r6
  int result; // r0
  int v28; // [sp+18h] [bp-298h]
  int v29; // [sp+20h] [bp-290h]
  int (**v30)(); // [sp+44h] [bp-26Ch] BYREF
  char *v31; // [sp+48h] [bp-268h]
  int (**v32)(); // [sp+4Ch] [bp-264h] BYREF
  char *v33; // [sp+50h] [bp-260h]
  int v34; // [sp+54h] [bp-25Ch]
  _BYTE v35[64]; // [sp+58h] [bp-258h] BYREF
  int (**v36)(); // [sp+98h] [bp-218h] BYREF
  char *v37; // [sp+9Ch] [bp-214h]
  int v38; // [sp+A0h] [bp-210h]
  int v39; // [sp+A4h] [bp-20Ch] BYREF
  int (**v40)(); // [sp+C4h] [bp-1ECh] BYREF
  int *v41; // [sp+C8h] [bp-1E8h]
  int v42; // [sp+CCh] [bp-1E4h]
  int v43; // [sp+D0h] [bp-1E0h] BYREF
  int (**v44)(); // [sp+F0h] [bp-1C0h] BYREF
  char *v45; // [sp+F4h] [bp-1BCh]
  int v46; // [sp+F8h] [bp-1B8h]
  int v47; // [sp+FCh] [bp-1B4h] BYREF
  _BYTE v48[32]; // [sp+1FCh] [bp-B4h] BYREF
  sead::SafeString v49; // [sp+21Ch] [bp-94h] BYREF
  int v50; // [sp+224h] [bp-8Ch]
  int v51; // [sp+228h] [bp-88h]
  int v52; // [sp+22Ch] [bp-84h]
  int v53; // [sp+230h] [bp-80h]
  int v54; // [sp+234h] [bp-7Ch]
  int v55; // [sp+238h] [bp-78h]
  int v56; // [sp+23Ch] [bp-74h]
  int v57; // [sp+240h] [bp-70h]
  int v58; // [sp+244h] [bp-6Ch]
  int v59; // [sp+248h] [bp-68h]
  char v60; // [sp+24Ch] [bp-64h]
  int v61; // [sp+250h] [bp-60h]
  _DWORD v62[2]; // [sp+254h] [bp-5Ch] BYREF
  _DWORD v63[21]; // [sp+25Ch] [bp-54h] BYREF

  v44 = (int (**)())sub_608FD248();
  switch ( (unsigned int)v44 )
  {
    case 0u:
      v2 = 0;
      goto LABEL_18;
    case 2u:
      v2 = 3;
      goto LABEL_18;
    case 3u:
      v2 = 2;
      goto LABEL_18;
    case 4u:
      *(_DWORD *)(a1 + 16) = 1;
      *(_BYTE *)(a1 + 76) = 1;
      goto LABEL_19;
    case 5u:
      v2 = 4;
      goto LABEL_18;
    case 6u:
      v2 = 8;
      goto LABEL_18;
    case 7u:
      v2 = 5;
      goto LABEL_18;
    case 8u:
      v2 = 6;
      goto LABEL_18;
    case 9u:
      v2 = 7;
      goto LABEL_18;
    case 0xAu:
      v2 = 10;
      goto LABEL_18;
    case 0xBu:
      v2 = 9;
      goto LABEL_18;
    case 0xCu:
      v2 = 11;
      goto LABEL_18;
    case 0xDu:
      v2 = 12;
      goto LABEL_18;
    case 0xEu:
      v2 = 13;
      goto LABEL_18;
    case 0xFu:
      v2 = 14;
      goto LABEL_18;
    default:
      v2 = 1;
LABEL_18:
      *(_DWORD *)(a1 + 16) = v2;
LABEL_19:
      sub_6081CA7C(a1);
      memset(&v63[1], 0, 44);
      v63[0] = &off_60BF9CF0;
      v62[0] = &`vtable for'sead::SafeStringBase_char;
      v62[1] = "System/Revision.yml";
      sub_608E6578(*(_DWORD *)(dword_60CCEBD0 + 28));
      if ( !v63[1] )
        goto LABEL_120;
      sub_608E7A54(v63);
      v49.vtable = &`vtable for'sead::SafeStringBase_char;
      v49.cstr = &byte_60B3BA34;
      v50 = 0;
      v51 = 0;
      v52 = 32;
      v59 = 0;
      v58 = 0;
      v57 = 0;
      v56 = 0;
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v60 = 1;
      v61 = 0;
      sead::SafeStringBase_char::operator=((int)&v49, (int)v62);
      v3 = (int (__fastcall ***)(_DWORD, int *))sead_ResourceMgr_OpenFileRelated(
                                                  sead::ResourceMgr::sInstance,
                                                  (int)&v49);
      if ( ((unsigned int)&dword_60C9BB2C & ~(1619116548 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
      {
        dword_60C9BB28 = (int)&off_60BF9F4C;
        _cxa_guard_release(&dword_60C9BB2C);
      }
      if ( v3 )
      {
        v5 = (**v3)(v3, &dword_60C9BB28);
        if ( v5 )
          v5 = (int)v3;
      }
      else
      {
        v5 = 0;
      }
      sub_609051E4(v48, *(_DWORD *)(v5 + 4), *(_DWORD *)(v5 + 8), 1, 0);
      v45 = (char *)&v47;
      v44 = &BufferedSafeStringBase_char_vtable_probably;
      v46 = 256;
      sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v44);
      *v45 = 0;
      v44 = &off_60BD94BC;
      v41 = &v43;
      v40 = &BufferedSafeStringBase_char_vtable_probably;
      v42 = 32;
      sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v40);
      *(_BYTE *)v41 = 0;
      v40 = &off_60BD4C20;
      v6 = sub_608FD248();
      v7 = (const char *)sub_6081D400(v6);
      sub_608FDDF4((int)&v40, "%s:", v7);
      if ( sub_60905330(v48) )
        goto LABEL_119;
      v29 = a1;
      v28 = a1 + 88;
      break;
  }
  do
  {
    sub_60905500(v48, &v44, v46);
    for ( i = 0; i != 2; ++i )
    {
      v37 = (char *)&v39;
      v36 = &BufferedSafeStringBase_char_vtable_probably;
      v38 = 32;
      sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v36);
      *v37 = 0;
      v36 = &off_60BD4C20;
      v9 = sub_6081D7B4(i);
      sub_608FDDF4((int)&v36, "%s:", v9);
      ((void (__fastcall *)(int (***)()))v44[3])(&v44);
      ((void (__fastcall *)(int (***)()))v44[3])(&v44);
      v10 = v45;
      ((void (__fastcall *)(int (***)()))v36[3])(&v36);
      if ( v10 == v37 )
      {
LABEL_39:
        sub_60905500(v48, &v44, v46);
        v33 = v35;
        v32 = &BufferedSafeStringBase_char_vtable_probably;
        v34 = 64;
        sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v32);
        *v33 = 0;
        v32 = &off_60BD4BF0;
        ((void (__fastcall *)(int (***)()))v44[3])(&v44);
        v12 = 0;
        while ( 1 )
        {
          if ( !v45[v12] )
            goto LABEL_48;
          if ( !v45[v12 + 1] )
          {
            if ( v12 + 1 > 0 )
              goto LABEL_49;
            goto LABEL_50;
          }
          if ( !v45[v12 + 2] )
            break;
          v13 = v12 + 2 <= 0x7FFFF;
          v12 += 3;
          if ( !v13 )
            goto LABEL_50;
        }
        v12 += 2;
LABEL_48:
        if ( v12 > 0 )
        {
LABEL_49:
          v14 = v45 + 1;
          goto LABEL_51;
        }
LABEL_50:
        v14 = off_60C5CB34;
LABEL_51:
        v31 = v14;
        v30 = &`vtable for'sead::SafeStringBase_char;
        ((void (__fastcall *)(int (***)()))v44[3])(&v44);
        v15 = 0;
        while ( v45[v15] )
        {
          if ( !v45[v15 + 1] )
          {
            ++v15;
            break;
          }
          if ( !v45[v15 + 2] )
          {
            v15 += 2;
            break;
          }
          v13 = v15 + 2 <= 0x7FFFF;
          v15 += 3;
          if ( !v13 )
          {
            v15 = 0;
            break;
          }
        }
        v16 = v33;
        ((void (__fastcall *)(int (***)()))v30[3])(&v30);
        v17 = v31;
        if ( v16 != v31 )
        {
          if ( v15 > 1 )
          {
            v18 = v15 - 2;
          }
          else
          {
            ((void (__fastcall *)(int (***)()))v30[3])(&v30);
            v18 = 0;
            while ( v31[v18] )
            {
              if ( !v31[v18 + 1] )
              {
                ++v18;
                break;
              }
              if ( !v31[v18 + 2] )
              {
                v18 += 2;
                break;
              }
              v13 = v18 + 2 <= 0x7FFFF;
              v18 += 3;
              if ( !v13 )
              {
                v18 = 0;
                break;
              }
            }
          }
          if ( v18 >= v34 )
            v18 = v34 - 1;
          qmemcpy(v16, v17, v18);
          v16[v18] = 0;
          a1 = v29;
        }
        sub_608FF3E8(a1 + 4 * i + 80, &v32, -1);
      }
      else
      {
        for ( j = 1; v45[j - 1] == v37[j - 1]; j += 2 )
        {
          if ( !v45[j - 1] )
            goto LABEL_39;
          if ( j >= 524289 || v45[j] != v37[j] )
            break;
          if ( !v45[j] )
            goto LABEL_39;
        }
      }
    }
    ((void (__fastcall *)(int (***)()))v44[3])(&v44);
    ((void (__fastcall *)(int (***)()))v44[3])(&v44);
    v19 = v45;
    ((void (__fastcall *)(int (***)()))v40[3])(&v40);
    if ( v19 == (char *)v41 )
    {
LABEL_83:
      sub_60905500(v48, &v44, v46);
      v33 = v35;
      v32 = &BufferedSafeStringBase_char_vtable_probably;
      v34 = 64;
      sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v32);
      *v33 = 0;
      v32 = &off_60BD4BF0;
      ((void (__fastcall *)(int (***)()))v44[3])(&v44);
      v21 = 0;
      while ( 1 )
      {
        if ( !v45[v21] )
          goto LABEL_92;
        if ( !v45[v21 + 1] )
        {
          if ( v21 + 1 > 0 )
            goto LABEL_93;
          goto LABEL_94;
        }
        if ( !v45[v21 + 2] )
          break;
        v13 = v21 + 2 <= 0x7FFFF;
        v21 += 3;
        if ( !v13 )
          goto LABEL_94;
      }
      v21 += 2;
LABEL_92:
      if ( v21 > 0 )
      {
LABEL_93:
        v22 = v45 + 1;
        goto LABEL_95;
      }
LABEL_94:
      v22 = off_60C5CB34;
LABEL_95:
      v37 = v22;
      v36 = &`vtable for'sead::SafeStringBase_char;
      ((void (__fastcall *)(int (***)()))v44[3])(&v44);
      v23 = 0;
      while ( v45[v23] )
      {
        if ( !v45[v23 + 1] )
        {
          ++v23;
          break;
        }
        if ( !v45[v23 + 2] )
        {
          v23 += 2;
          break;
        }
        v13 = v23 + 2 <= 0x7FFFF;
        v23 += 3;
        if ( !v13 )
        {
          v23 = 0;
          break;
        }
      }
      v24 = v33;
      ((void (__fastcall *)(int (***)()))v36[3])(&v36);
      v25 = v37;
      if ( v24 != v37 )
      {
        if ( v23 > 1 )
        {
          v26 = v23 - 2;
        }
        else
        {
          ((void (__fastcall *)(int (***)()))v36[3])(&v36);
          v26 = 0;
          while ( v37[v26] )
          {
            if ( !v37[v26 + 1] )
            {
              ++v26;
              break;
            }
            if ( !v37[v26 + 2] )
            {
              v26 += 2;
              break;
            }
            v13 = v26 + 2 <= 0x7FFFF;
            v26 += 3;
            if ( !v13 )
            {
              v26 = 0;
              break;
            }
          }
        }
        if ( v26 >= v34 )
          v26 = v34 - 1;
        qmemcpy(v24, v25, v26);
        v24[v26] = 0;
      }
      sub_608FF3E8(v28, &v32, -1);
    }
    else
    {
      for ( k = 1; v45[k - 1] == *((_BYTE *)v41 + k - 1); k += 2 )
      {
        if ( !v45[k - 1] )
          goto LABEL_83;
        if ( k >= 524289 || v45[k] != *((_BYTE *)v41 + k) )
          break;
        if ( !v45[k] )
          goto LABEL_83;
      }
    }
  }
  while ( sub_60905330(v48) != 1 );
LABEL_119:
  sub_60905250(v48);
LABEL_120:
  v63[0] = &off_60BF9CF0;
  result = v63[2];
  if ( v63[2] )
    return sub_608E6738(v63[2]);
  return result;
}

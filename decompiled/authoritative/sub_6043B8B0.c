signed int __fastcall sub_6043B8B0(int a1, int a2, int a3, int a4, _DWORD *a5, void *heap)
{
  int v9; // r0
  const char *v10; // r6
  const char *v11; // r9
  int v12; // r4
  signed int v13; // r9
  signed int v14; // r0
  int v15; // r9
  int v16; // r5
  int v17; // r2
  bool v18; // cc
  char *v19; // r2
  int i; // r0
  int (__fastcall ***v21)(_DWORD, int *); // r6
  char v22; // r12
  char *v23; // r0
  int *v24; // r6
  int *v25; // r9
  int v26; // r0
  signed int v27; // r10
  int v28; // r7
  int v29; // r10
  signed int v30; // r6
  _DWORD *v31; // r7
  int *v32; // r9
  int *v33; // r0
  int v34; // r1
  int v35; // r3
  bool v36; // nf
  _DWORD *v37; // r0
  int v38; // r7
  sead_IDisposer *v39; // r10
  int *containingHeap; // r9
  bool v41; // zf
  int (__fastcall ***v43)(_DWORD, int *); // [sp+Ch] [bp-304h]
  int *v44; // [sp+Ch] [bp-304h]
  int v45; // [sp+1Ch] [bp-2F4h]
  int v46; // [sp+24h] [bp-2ECh]
  int v47; // [sp+34h] [bp-2DCh]
  int *v48; // [sp+40h] [bp-2D0h]
  int *v49; // [sp+40h] [bp-2D0h]
  const char *v50; // [sp+54h] [bp-2BCh]
  const char *v51; // [sp+80h] [bp-290h]
  int v52; // [sp+84h] [bp-28Ch]
  sead_IDisposer *v53; // [sp+88h] [bp-288h] BYREF
  int (**v54)(); // [sp+8Ch] [bp-284h] BYREF
  int *v55; // [sp+90h] [bp-280h]
  int v56; // [sp+94h] [bp-27Ch]
  int v57; // [sp+98h] [bp-278h] BYREF
  _DWORD v58[12]; // [sp+D8h] [bp-238h] BYREF
  char v59; // [sp+108h] [bp-208h]
  int v60; // [sp+10Ch] [bp-204h]
  sead_IDisposer v61; // [sp+110h] [bp-200h] BYREF
  int v62; // [sp+120h] [bp-1F0h]
  int v63; // [sp+124h] [bp-1ECh]
  sead_IDisposer *v64; // [sp+128h] [bp-1E8h]
  int v65; // [sp+12Ch] [bp-1E4h]
  int (**v66)(); // [sp+130h] [bp-1E0h] BYREF
  int *v67; // [sp+134h] [bp-1DCh]
  int v68; // [sp+138h] [bp-1D8h]
  int v69; // [sp+13Ch] [bp-1D4h] BYREF
  int (**v70)(); // [sp+15Ch] [bp-1B4h] BYREF
  char *v71; // [sp+160h] [bp-1B0h]
  int v72; // [sp+164h] [bp-1ACh]
  int v73; // [sp+168h] [bp-1A8h] BYREF
  char v74; // [sp+268h] [bp-A8h]
  _DWORD v75[11]; // [sp+26Ch] [bp-A4h] BYREF
  _BYTE v76[120]; // [sp+298h] [bp-78h] BYREF

  v9 = sub_60822808(ArchiveManagerMaybe_instance);
  sub_6043C320(v76, v9);
  memset(&v75[1], 0, 40);
  v75[0] = &off_60BFAA14;
  v70 = &vtable_sead_SafeStringBase_char;
  v71 = &byte_60ABC94D;
  sub_608E6B4C(v76, v75, &v70);
  if ( !v75[1] )
  {
    v12 = -1;
    goto LABEL_102;
  }
  v46 = a4;
  v71 = (char *)&v73;
  v70 = &BufferedSafeStringBase_char_vtable_probably;
  v72 = 256;
  sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v70);
  *v71 = 0;
  v47 = a1;
  v70 = &off_60BD94BC;
  v74 = 0;
  v45 = a1 + 16;
  v10 = ".";
  v11 = "sarc";
  v52 = 0;
  while ( sub_608E7F80(v75, &v70, 1) )
  {
    if ( !v74 )
    {
      v51 = v11;
      v50 = v10;
      v61.vtable = (int)&vtable_sead_SafeStringBase_char;
      v61.containingHeap = (int)v10;
      v16 = sub_6043C4B4(&v70, &v61);
      v61.vtable = (int)off_60C5CB68;
      v62 = 0;
      v63 = 0;
      v64 = &v61;
      v65 = 0;
      sead_IDisposer_ctor(&v61);
      v61.vtable = (int)off_60C5CB68;
      v67 = &v69;
      v66 = &BufferedSafeStringBase_char_vtable_probably;
      v68 = 32;
      sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v66);
      *(_BYTE *)v67 = 0;
      v58[0] = &vtable_sead_SafeStringBase_char;
      v66 = &off_60BD4C20;
      v61.vtable = (int)off_60BF9EF4;
      v58[1] = &byte_60B3BA34;
      v58[3] = 0;
      v58[4] = 32;
      memset(&v58[5], 0, 16);
      v58[11] = 0;
      v59 = 1;
      v60 = 0;
      v58[10] = v76;
      v58[9] = &v61;
      v58[2] = heap;
      v55 = &v57;
      v54 = &BufferedSafeStringBase_char_vtable_probably;
      v56 = 64;
      sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v54);
      *(_BYTE *)v55 = 0;
      v54 = &off_60BD4BF0;
      if ( v16 >= 0 )
      {
        ((void (__fastcall *)(int (***)()))v70[3])(&v70);
        v17 = 0;
        while ( v71[v17] )
        {
          if ( !v71[v17 + 1] )
          {
            ++v17;
            break;
          }
          if ( !v71[v17 + 2] )
          {
            v17 += 2;
            break;
          }
          v18 = v17 + 2 <= 0x7FFFF;
          v17 += 3;
          if ( !v18 )
          {
            v17 = 0;
            break;
          }
        }
        v18 = v17 <= v16;
        v19 = off_60C5CB34;
        if ( !v18 )
          v19 = &v71[v16 + 1];
        if ( v19 == "sarc" )
        {
LABEL_35:
          sead__SafeStringBase_char__operator=((int)v58, (int)&v70);
          v21 = (int (__fastcall ***)(_DWORD, int *))sead_ResourceMgr_OpenFileRelated(
                                                       sead::ResourceMgr::sInstance,
                                                       (int)v58);
          if ( ((unsigned int)&dword_60C9BB24 & ~(1615052296 << v22) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
          {
            dword_60C9BB20 = (int)&off_60BF9F40;
            _cxa_guard_release(&dword_60C9BB24);
          }
          if ( v21 && (**v21)(v21, &dword_60C9BB20) == 1 )
          {
            v43 = v21;
            if ( v72 <= v16 )
            {
              ((void (__fastcall *)(int (***)()))v70[3])(&v70);
            }
            else
            {
              v23 = v71;
              if ( v16 > 0 )
                v23 = &v71[v16];
              *v23 = 0;
            }
            v24 = v55;
            (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
            v25 = (int *)a5[1];
            if ( v24 != v25 )
            {
              (*(void (__fastcall **)(_DWORD *))(*a5 + 12))(a5);
              v26 = a5[1];
              v27 = 0;
              while ( *(_BYTE *)(v26 + v27) )
              {
                if ( !*(_BYTE *)(v26 + v27 + 1) )
                {
                  ++v27;
                  break;
                }
                if ( !*(_BYTE *)(v26 + v27 + 2) )
                {
                  v27 += 2;
                  break;
                }
                v18 = v27 + 2 <= 0x7FFFF;
                v27 += 3;
                if ( !v18 )
                {
                  v27 = 0;
                  break;
                }
              }
              if ( v27 >= v56 )
                v27 = v56 - 1;
              qmemcpy(v24, v25, v27);
              *((_BYTE *)v24 + v27) = 0;
            }
            v48 = v55;
            ((void (__fastcall *)(int (***)()))v54[3])(&v54);
            v28 = 0;
            while ( *((_BYTE *)v55 + v28) )
            {
              if ( !*((_BYTE *)v55 + v28 + 1) )
              {
                ++v28;
                break;
              }
              if ( !*((_BYTE *)v55 + v28 + 2) )
              {
                v28 += 2;
                break;
              }
              v18 = v28 + 2 <= 0x7FFFF;
              v28 += 3;
              if ( !v18 )
              {
                v28 = 0;
                break;
              }
            }
            ((void (__fastcall *)(int (***)()))v70[3])(&v70);
            v29 = 0;
            v30 = 0;
            if ( v28 > 0 )
              v29 = v28;
            while ( v71[v30] )
            {
              if ( !v71[v30 + 1] )
              {
                ++v30;
                break;
              }
              if ( !v71[v30 + 2] )
              {
                v30 += 2;
                break;
              }
              v18 = v30 + 2 <= 0x7FFFF;
              v30 += 3;
              if ( !v18 )
              {
                v30 = 0;
                break;
              }
            }
            if ( v30 >= v56 - v29 )
              v30 = v56 - v29 - 1;
            if ( v30 >= 1 )
            {
              ((void (__fastcall *)(int (***)()))v70[3])(&v70);
              qmemcpy((char *)v48 + v29, v71, v30);
              if ( v30 + v29 > v28 )
                *((_BYTE *)v48 + v30 + v29) = 0;
            }
            v31 = *(_DWORD **)(v47 + 16);
            if ( v31 )
            {
              while ( 2 )
              {
                ((void (__fastcall *)(int (***)()))v54[3])(&v54);
                ((void (__fastcall *)(int (***)()))v54[3])(&v54);
                v32 = v55;
                (*(void (__fastcall **)(_DWORD *))(v31[4] + 12))(v31 + 4);
                v33 = (int *)v31[5];
                if ( v32 != v33 )
                {
                  v34 = 0;
                  while ( 1 )
                  {
                    v35 = *((unsigned __int8 *)v55 + v34);
                    v36 = v35 - *((unsigned __int8 *)v33 + v34) < 0;
                    if ( v35 != *((unsigned __int8 *)v33 + v34) )
                      break;
                    if ( *((_BYTE *)v55 + v34) )
                    {
                      if ( ++v34 < 0x80000 )
                        continue;
                    }
                    if ( !v31 )
                      goto LABEL_93;
                    goto LABEL_92;
                  }
                  v37 = v31 + 2;
                  if ( v36 )
                    v37 = v31 + 1;
                  v31 = (_DWORD *)*v37;
                  if ( *v37 )
                    continue;
                  goto LABEL_93;
                }
                break;
              }
LABEL_92:
              if ( !*(_DWORD *)(v31[6] + 60) )
                goto LABEL_93;
            }
            else
            {
LABEL_93:
              v38 = __operator_new_al(0x208u, heap, 4);
              sub_60439BC8();
              if ( v38 )
              {
                sub_60439ED4(v38, v43, &v70, 0, heap);
                v39 = (sead_IDisposer *)__operator_new_al(0x40u, heap, 4);
                sead_IDisposer_ctor(v39);
                v39->vtable = (int)off_60BFAA04;
                v39[1].containingHeap = (int)&v39[1].field_C;
                v39[1].vtable = (int)&BufferedSafeStringBase_char_vtable_probably;
                v39[1].field_8 = 32;
                sead__BufferedSafeStringBase_char__assureTerminationImpl_((int)&v39[1]);
                *(_BYTE *)v39[1].containingHeap = 0;
                v39[1].vtable = (int)&off_60BD4C20;
                v39[3].field_C = v38;
                containingHeap = (int *)v39[1].containingHeap;
                ((void (__fastcall *)(int (***)()))v54[3])(&v54);
                v49 = containingHeap;
                v41 = containingHeap == v55;
                v15 = v46;
                if ( !v41 )
                {
                  v44 = v55;
                  ((void (__fastcall *)(int (***)()))v54[3])(&v54);
                  v13 = 0;
                  while ( *((_BYTE *)v55 + v13) )
                  {
                    if ( !*((_BYTE *)v55 + v13 + 1) )
                    {
                      ++v13;
                      break;
                    }
                    if ( !*((_BYTE *)v55 + v13 + 2) )
                    {
                      v13 += 2;
                      break;
                    }
                    v18 = v13 + 2 <= 0x7FFFF;
                    v13 += 3;
                    if ( !v18 )
                    {
                      v13 = 0;
                      break;
                    }
                  }
                  v14 = v39[1].field_8;
                  if ( v13 >= v14 )
                    v13 = v14 - 1;
                  qmemcpy(v49, v44, v13);
                  *((_BYTE *)v49 + v13) = 0;
                  v15 = v46;
                }
                v53 = v39;
                sub_6043B624(v45, &v54, &v53);
                if ( a3 )
                {
                  if ( v52 < v15 )
                    *(_DWORD *)(a3 + 4 * v52) = v38;
                }
                ++v52;
              }
            }
            v10 = v50;
            v11 = v51;
            goto LABEL_4;
          }
        }
        else
        {
          for ( i = 0; i < 524289; ++i )
          {
            if ( v19[i] != v11[i] )
              break;
            if ( !v19[i] )
              goto LABEL_35;
          }
        }
        v10 = v50;
      }
LABEL_4:
      sub_60902104(&v61);
    }
  }
  v12 = v52;
LABEL_102:
  v75[0] = &off_60BFAA14;
  if ( v75[2] )
    sub_608E6B98(v75[2], v75);
  sub_608E60A4(v76);
  return v12;
}

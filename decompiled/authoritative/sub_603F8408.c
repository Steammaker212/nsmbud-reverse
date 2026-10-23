int __fastcall sub_603F8408(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  _BOOL4 v5; // r1
  bool v6; // zf
  int v7; // r0
  _DWORD *v8; // r9
  bool v9; // r2
  unsigned int v10; // r3
  int v11; // r5
  int v12; // r0
  int v13; // r7
  int v14; // r1
  int (***v15)(); // r2
  int v16; // r5
  int v17; // r0
  int v18; // r6
  int v19; // r5
  int v20; // r0
  int v21; // r6
  int v22; // r5
  int v23; // r0
  int v24; // r6
  int v25; // r5
  int v26; // r0
  int v27; // r6
  int v28; // r10
  int v29; // r0
  int v30; // r5
  int v31; // r4
  int v32; // r7
  int Area; // r0
  const char *v34; // r4
  int v35; // r0
  const char *v36; // r4
  int v37; // r0
  const char *v38; // r4
  int v39; // r0
  const char *v40; // r4
  int v41; // r5
  _DWORD *v42; // r9
  _WORD *v43; // r1
  unsigned __int16 v44; // r10
  unsigned __int16 v45; // r7
  unsigned __int16 v46; // r5
  int v47; // r1
  int v48; // r2
  int v49; // r0
  bool v50; // zf
  unsigned int v51; // r1
  unsigned int v52; // r3
  _DWORD *v53; // r2
  int v54; // r0
  int v55; // r1
  int v56; // r5
  int v57; // r0
  int v58; // r6
  int v59; // r5
  int v60; // r0
  int v61; // r6
  int v62; // r5
  int v63; // r0
  int v64; // r6
  void (__fastcall ***v65)(_DWORD); // r0
  signed int *v66; // r0
  int v67; // r0
  int v69; // [sp+Ch] [bp-44h]
  _DWORD v70[2]; // [sp+10h] [bp-40h] BYREF
  int (**v71)(); // [sp+18h] [bp-38h] BYREF
  const char *v72; // [sp+1Ch] [bp-34h]
  int v73; // [sp+20h] [bp-30h]
  int v74; // [sp+24h] [bp-2Ch] BYREF

  if ( (unsigned int)(*(_DWORD *)(dword_60CC6C28 + 16) - 1) <= 1 )
    sub_6081AF10();
  v2 = nullsub_14(0);
  sub_600238B8(v2);
  sub_6040D2FC(LevelInfo_instance);
  qmemcpy((void *)(a1 + 272), (const void *)(dword_60C99DEC + 16), 0x280u);
  sub_603FCFB8(a1 + 272);
  *(_BYTE *)(a1 + 1388) = 0;
  *(_BYTE *)(a1 + 1396) = 0;
  *(_BYTE *)(a1 + 1397) = 0;
  *(_BYTE *)(dword_60CC6D78 + 109050) = 0;
  v3 = LevelInfo_instance;
  if ( !sub_6040E3D0(LevelInfo_instance) && sub_6040E438(v3) != 1 )
  {
    v4 = sub_603F6960(a1 + 272, *(unsigned __int8 *)(v3 + 16), *(unsigned __int8 *)(v3 + 17));
    v5 = 0;
    if ( *(_BYTE *)(v3 + 30) == 2 )
      v5 = *(_DWORD *)(v3 + 32) != 2;
    v6 = v4 == -1;
    if ( v4 != -1 )
      v6 = v5;
    if ( v6 )
      sub_603F692C(a1 + 272, v5);
  }
  *(_BYTE *)(a1 + 733) = *(_BYTE *)(a1 + 288);
  *(_BYTE *)(a1 + 734) = *(_BYTE *)(a1 + 289);
  *(_BYTE *)(a1 + 735) = *(_BYTE *)(a1 + 290);
  *(_BYTE *)(a1 + 736) = sub_60408230(
                           dword_60CC6D78 + 52,
                           *(unsigned __int8 *)(LevelInfo_instance + 16),
                           *(unsigned __int8 *)(LevelInfo_instance + 17));
  v8 = (_DWORD *)(a1 + 764);
  v7 = *(_DWORD *)(a1 + 764);
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 1) > 1 )
      goto LABEL_18;
  }
  else if ( (*(_BYTE *)(dword_60CC6D78 + 44) & 5) != 0 )
  {
    goto LABEL_18;
  }
  if ( !sub_6040E3D0(LevelInfo_instance) )
    sub_6040E538(LevelInfo_instance);
LABEL_18:
  if ( *v8 == 3 || sub_6040E510(LevelInfo_instance) || sub_6040E438(LevelInfo_instance) == 1 )
    *(_BYTE *)(a1 + 732) = 0;
  v9 = 0;
  if ( *(_BYTE *)(dword_60CC6D78 + 109032) )
  {
    v10 = *(unsigned __int8 *)(LevelInfo_instance + 16);
    v9 = 0;
    if ( v10 <= 6 )
      v9 = (*(_BYTE *)(dword_60CC6D78 + 109034) & (unsigned __int8)(1 << v10)) != 0;
  }
  v69 = a1 + 272;
  *(_BYTE *)(a1 + 908) = v9;
  v11 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "InputMgr";
  v12 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v13 = v12;
  if ( v12 )
    v11 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v12);
  sub_60451FEC(0);
  if ( **(_BYTE **)(dword_60CC6D78 + 140) )
  {
    v15 = (int (***)())(dword_60CC6D78 + 136);
    v14 = 2;
  }
  else
  {
    v15 = &off_60C5CB30;
    v14 = *v8 == 4;
  }
  sub_6045217C(dword_60C9CF0C, v14, v15, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 20))(v13);
  if ( v11 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v11);
  sub_603E50C0(0);
  sub_600074EC();
  sub_60009B2C(0);
  sub_60729104(0);
  sub_6071A7C8(0);
  sub_6071B890(0);
  sub_607188FC(0);
  sub_60786E30(0);
  sub_605E7988(0);
  sub_603F7A24(0);
  sub_6015AE88(0);
  sub_6072990C(0);
  sub_606E8BAC(0);
  sub_60004170(0);
  sub_605823C8(0);
  sub_605B8CBC(0);
  sub_60021ADC(0);
  sub_603FC4E4(0);
  ColliderMgr_createInstance(0);
  sub_601675C0(0);
  sub_60253E2C(0);
  sub_603FD628(0);
  sub_60726854(0);
  sub_60407C0C(0);
  sub_603F7FF8(0);
  sub_60401BB8(0);
  sub_603F9738(a1);
  sub_603EFADC(0);
  v16 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "TexQuadMgrInstance";
  v17 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v18 = v17;
  if ( v17 )
    v16 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v17);
  sub_6044EE58(0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 20))(v18);
  if ( v16 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v16);
  v19 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "MaskMgrInstance";
  v20 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v21 = v20;
  if ( v20 )
    v19 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v20);
  MaskManager_createInstance_(0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 20))(v21);
  if ( v19 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v19);
  sub_603F5508(0);
  sub_606E69A0(0);
  sub_606E6A1C(dword_60CBBFA4);
  v22 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "DynamicLightMgr";
  v23 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v24 = v23;
  if ( v23 )
    v22 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v23);
  sub_604117C4(0);
  sub_60413E08(dword_60C9A698, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 20))(v24);
  if ( v22 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v22);
  sub_60731168(0);
  sub_60731290(dword_60CBDBF8);
  sub_6042F520(0);
  if ( sub_603FD554(a1 + 764) == 1 )
  {
    v25 = 1;
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = "WmModeDB";
    v26 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
    v27 = v26;
    if ( v26 )
      v25 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v26);
    sub_6042F798(dword_60C9C2D0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 20))(v27);
    if ( v25 != 1 )
      sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v25);
  }
  sub_60726908(dword_60CBD894, 0);
  v28 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "CourseUnitData";
  v29 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v30 = v29;
  if ( v29 )
    v28 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v29);
  if ( (unsigned int)(*(_DWORD *)(dword_60CC6C28 + 16) - 1) >= 2 )
  {
    v31 = LevelInfo_instance;
    v72 = (const char *)&v74;
    v71 = &BufferedSafeStringBase_char_vtable_probably;
    v73 = 8;
    sead::BufferedSafeStringBase_char::assureTerminationImpl_((int)&v71);
    *v72 = 0;
    v71 = &off_60BD4B8C;
    sub_60727C38(*(unsigned __int8 *)(v31 + 16), *(unsigned __int8 *)(v31 + 17), (int)&v71);
    v32 = ArchiveManagerMaybe_instance;
    ((void (__fastcall *)(int (***)()))v71[3])(&v71);
    v70[0] = &`vtable for'sead::SafeStringBase_char;
    v70[1] = v72;
    sub_60820F8C(v32, v70, 0);
    Level_createInstance(0);
    sub_607279C0((_DWORD *)Level_instance);
  }
  Area = Level_getArea(Level_instance, 0);
  if ( Area )
  {
    v34 = *(const char **)(Area + 4);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v34;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v34 + 32;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v34 + 64;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v34 + 96;
    sub_603F9BD8(&v71);
  }
  v35 = Level_getArea(Level_instance, 1u);
  if ( v35 )
  {
    v36 = *(const char **)(v35 + 4);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v36;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v36 + 32;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v36 + 64;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v36 + 96;
    sub_603F9BD8(&v71);
  }
  v37 = Level_getArea(Level_instance, 2u);
  if ( v37 )
  {
    v38 = *(const char **)(v37 + 4);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v38;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v38 + 32;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v38 + 64;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v38 + 96;
    sub_603F9BD8(&v71);
  }
  v39 = Level_getArea(Level_instance, 3u);
  if ( v39 )
  {
    v40 = *(const char **)(v39 + 4);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v40;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v40 + 32;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v40 + 64;
    sub_603F9BD8(&v71);
    v71 = &`vtable for'sead::SafeStringBase_char;
    v72 = v40 + 96;
    sub_603F9BD8(&v71);
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 20))(v30);
  if ( v28 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v28);
  v41 = LevelInfo_instance;
  sub_6040D310(LevelInfo_instance);
  sub_6040D3F4(v41, *(_DWORD *)(v41 + 24));
  *(_BYTE *)(a1 + 194) = *(_DWORD *)(v41 + 24) == 2;
  sub_60582544(dword_60CAF15C);
  if ( *(_DWORD *)(a1 + 764) == 3 )
    *(_DWORD *)(a1 + 912) = sub_603F9D9C();
  sub_60023F68();
  LoadProfileArchives(1, 0);
  if ( sub_603FD564(a1 + 764) == 1 )
    sub_6023446C(*(_DWORD *)(a1 + 4 * *(_DWORD *)(a1 + 88) + 68));
  sub_603FD69C(dword_60C99DF4);
  if ( *v8 == 4 )
    sub_604089F4(dword_60C9A1F0, *(unsigned __int8 *)(dword_60C9A1F0 + 6558));
  if ( !sub_604091F0(dword_60C9A1F0) )
  {
    v42 = (_DWORD *)Level_getArea(Level_instance, *(unsigned __int8 *)(LevelInfo_instance + 18));
    v43 = (_WORD *)v42[2];
    v44 = v43[11];
    v45 = v43[10];
    v46 = v43[5];
    if ( !v44 )
      v44 = 200;
    if ( *(_BYTE *)(dword_60CC6D78 + 109032) )
      v44 = 100;
    if ( !v43[10] )
      v45 = 300;
    if ( *(_BYTE *)(dword_60CC6D78 + 109032) )
      v45 = 100;
    if ( !v43[5] )
      v46 = 500;
    if ( *(_BYTE *)(dword_60CC6D78 + 109032) )
      v46 = 100;
    if ( !sub_6040E3D0(LevelInfo_instance) && sub_603FD0E8(v69) == 1 )
    {
      v44 += 100;
      v45 += 100;
      v46 += 100;
    }
    v47 = v42[2];
    v48 = *(unsigned __int8 *)(v47 + 16);
    v49 = *(unsigned __int8 *)(LevelInfo_instance + 19);
    v50 = v49 == v48;
    if ( v49 != v48 )
      v50 = v49 == *(unsigned __int8 *)(v47 + 19);
    if ( v50 )
      goto LABEL_95;
    v51 = v42[38];
    if ( !v51 )
      goto LABEL_95;
    v52 = 0;
    v53 = (_DWORD *)(v42[8] + 8);
    while ( *((_WORD *)v53 - 4) != 25 || v49 != (unsigned __int8)BYTE2(*v53) )
    {
      ++v52;
      v53 += 6;
      if ( v52 >= v51 )
        goto LABEL_95;
    }
    if ( (*v53 & 0xF) == 1 )
    {
      v55 = v44;
      v54 = dword_60C99DE4;
      goto LABEL_96;
    }
    if ( (*v53 & 0xF) != 0 )
    {
LABEL_95:
      v54 = dword_60C99DE4;
      v55 = v46;
    }
    else
    {
      v55 = v45;
      v54 = dword_60C99DE4;
    }
LABEL_96:
    sub_603FC56C(v54, v55);
  }
  sub_60007B5C(ActorMgr::instance, 0);
  sub_60787024(PlayerMgr_instance, v69);
  sub_605E7E8C(dword_60CB1BE4, v69);
  sub_60729980(EventMgr::instance);
  v56 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "BgGlobal";
  v57 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v58 = v57;
  if ( v57 )
    v56 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v57);
  sub_6071AA08(TilesetMgr_instance, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 20))(v58);
  if ( v56 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v56);
  v59 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "BgRenderer";
  v60 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v61 = v60;
  if ( v60 )
    v59 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v60);
  sub_6071C67C((_DWORD *)dword_60CBD830, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 20))(v61);
  if ( v59 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v59);
  v62 = 1;
  v71 = &`vtable for'sead::SafeStringBase_char;
  v72 = "TexQuad";
  v63 = sead::ExpHeap::create(0, (int)&v71, 0, 4, 1, 0);
  v64 = v63;
  if ( v63 )
    v62 = sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v63);
  sub_60450BAC(dword_60C9CEF0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v64 + 20))(v64);
  if ( v62 != 1 )
    sead::HeapMgr::setCurrentHeap_(sead::HeapMgr::sInstance, v62);
  v65 = *(void (__fastcall ****)(_DWORD))(a1 + 196);
  if ( v65 )
    (**v65)(v65);
  if ( *(_DWORD *)(a1 + 200) )
    sub_605505C0();
  if ( dword_60C9EBB4 )
    nullsub_24();
  if ( dword_60CA2674 )
    sub_604BB6B8();
  if ( dword_60C9F2CC )
    sub_60485B7C();
  if ( *(_DWORD *)(a1 + 204) )
    sub_6055A1D4();
  v66 = *(signed int **)(a1 + 208);
  if ( v66 )
    sub_604BC0EC(v66);
  if ( *(_DWORD *)(a1 + 220) )
    sub_6054BAC0();
  if ( *(_DWORD *)(a1 + 224) )
    sub_6054B3D8();
  if ( *(_DWORD *)(a1 + 228) )
    sub_60549E38();
  if ( *(_DWORD *)(a1 + 212) )
    sub_60482AB8();
  if ( *(_DWORD *)(a1 + 216) )
    sub_60484D80();
  if ( *(_DWORD *)(a1 + 232) )
    sub_604FE6A8();
  if ( *(_DWORD *)(a1 + 236) )
    sub_60547BF4();
  if ( *(_DWORD *)(a1 + 256) )
  {
    sub_6052CF48();
    sub_6052D264(*(_DWORD *)(a1 + 256));
  }
  if ( *(_DWORD *)(a1 + 240) )
    sub_6051F028();
  if ( *(_DWORD *)(a1 + 244) )
    sub_604FEEFC();
  if ( *(_DWORD *)(a1 + 248) )
    sub_60480EAC();
  if ( *(_DWORD *)(a1 + 252) )
    sub_60480EAC();
  if ( *(_DWORD *)(a1 + 260) )
    sub_6055ABE4();
  if ( *(_DWORD *)(a1 + 264) )
    sub_6054D0C8();
  if ( *(_DWORD *)(a1 + 268) )
    sub_6054FD98();
  sub_60407D28(dword_60C9A1E8);
  sub_603F807C(dword_60C99DD0);
  sub_60401ED4(dword_60C99E68);
  if ( dword_60CA83DC )
    sub_60510E6C();
  nullsub_30(dword_60CA7344);
  sub_603EFBA8(dword_60C99D6C);
  if ( dword_60CA059C )
    sub_60498FAC(dword_60CA059C, 10, 15);
  if ( dword_60C99E24 )
    sub_603FEF70();
  if ( dword_60C99E1C )
    sub_603FE52C();
  sub_605422E4(dword_60CABDE4);
  if ( dword_60CAD908 )
    sub_6055991C();
  sub_60377120(0);
  sub_603771C8(dword_60C96478);
  v67 = sub_607F5EBC(dword_60CC62E4, a1);
  return sub_600240A4(v67);
}

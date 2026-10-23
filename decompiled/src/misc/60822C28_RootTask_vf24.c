/* RootTask_vf24
 * address: 0x60822C28   size: 6912   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RootTask_vf24(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r5
  int v5; // r0
  char v6; // r12
  nn__diag *v7; // r0
  sead_ListNode *v8; // r4
  __int64 v9; // r6
  void *v10; // r4
  const void *containingHeap; // r5
  signed int v12; // r6
  bool v13; // cc
  _DWORD *v14; // r4
  _DWORD *v15; // r0
  sead_ListNode *v16; // r4
  _DWORD *v17; // r0
  int v18; // r4
  int v19; // r0
  int v20; // r5
  sead_IDisposer *v21; // r4
  int v22; // r9
  int v23; // r0
  int v24; // r4
  int v25; // r5
  signed int i; // r7
  int v27; // r5
  int (__fastcall ***v28)(_DWORD, int *); // r7
  char v29; // r12
  int v30; // r4
  void *v31; // r4
  float v32; // s0
  char *v33; // r0
  int v34; // r1
  int v35; // r7
  unsigned int v36; // r2
  _BYTE *v37; // r6
  int v38; // r3
  int v39; // r1
  char *v40; // r0
  int v41; // r4
  int v42; // r4
  char v43; // r12
  int v44; // r4
  int v45; // r0
  void *v46; // r5
  int v47; // r4
  int v48; // r6
  int v49; // r0
  unsigned int v50; // r0
  const char *v51; // r0
  int (__fastcall ***v52)(_DWORD, int *); // r7
  char v53; // r12
  int v54; // r5
  int v55; // r2
  int v56; // r3
  int v57; // r0
  int v58; // r5
  int v59; // r0
  unsigned int v60; // r0
  const char *v61; // r0
  int (__fastcall ***v62)(_DWORD, int *); // r4
  char v63; // r12
  int v64; // r6
  void *v65; // r5
  int v66; // r0
  char *v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r6
  sead_IDisposer *v71; // r0
  sead_IDisposer *v72; // r9
  int (__fastcall ***v73)(_DWORD, int *); // r4
  char v74; // r12
  int v75; // r0
  int v76; // r4
  int v77; // r4
  int v78; // r0
  int v79; // r5
  int v80; // r4
  char v81; // r12
  unsigned __int64 v82; // r2
  __int64 v83; // r0
  bool v84; // vf
  int result; // r0
  int v86; // [sp+14h] [bp-2BCh]
  int v87; // [sp+14h] [bp-2BCh]
  int v88; // [sp+18h] [bp-2B8h]
  int v89; // [sp+18h] [bp-2B8h]
  int v90; // [sp+18h] [bp-2B8h]
  _DWORD v91[2]; // [sp+20h] [bp-2B0h] BYREF
  __int64 v92; // [sp+28h] [bp-2A8h] BYREF
  __int16 v93; // [sp+30h] [bp-2A0h]
  int v94; // [sp+38h] [bp-298h] BYREF
  char *v95; // [sp+3Ch] [bp-294h]
  int v96; // [sp+40h] [bp-290h]
  int v97; // [sp+44h] [bp-28Ch]
  int v98; // [sp+48h] [bp-288h]
  int v99; // [sp+4Ch] [bp-284h]
  char v100; // [sp+50h] [bp-280h]
  int v101; // [sp+54h] [bp-27Ch]
  int v102; // [sp+58h] [bp-278h]
  int v103; // [sp+5Ch] [bp-274h]
  __int64 v104; // [sp+60h] [bp-270h] BYREF
  __int16 v105; // [sp+68h] [bp-268h]
  int (**v106)(); // [sp+6Ch] [bp-264h] BYREF
  char *v107; // [sp+70h] [bp-260h]
  int v108; // [sp+74h] [bp-25Ch]
  int v109; // [sp+78h] [bp-258h]
  int v110; // [sp+7Ch] [bp-254h]
  int v111; // [sp+80h] [bp-250h]
  int v112; // [sp+84h] [bp-24Ch]
  int v113; // [sp+88h] [bp-248h]
  int v114; // [sp+8Ch] [bp-244h]
  sead_IDisposer *v115; // [sp+90h] [bp-240h]
  int v116; // [sp+94h] [bp-23Ch]
  int v117; // [sp+98h] [bp-238h]
  char v118; // [sp+9Ch] [bp-234h]
  int v119; // [sp+A0h] [bp-230h]
  sead_IDisposer a1a; // [sp+A4h] [bp-22Ch] BYREF
  int v121; // [sp+B4h] [bp-21Ch]
  int v122; // [sp+B8h] [bp-218h]
  sead_IDisposer *p_a1a; // [sp+BCh] [bp-214h]
  int v124; // [sp+C0h] [bp-210h]
  int (**v125)(); // [sp+C4h] [bp-20Ch] BYREF
  int *v126; // [sp+C8h] [bp-208h]
  int v127; // [sp+CCh] [bp-204h]
  _BYTE v128[32]; // [sp+D0h] [bp-200h] BYREF
  sead_IDisposer v129[8]; // [sp+F0h] [bp-1E0h] BYREF
  _BYTE uid[124]; // [sp+170h] [bp-160h] BYREF
  int (__fastcall *v131)(int); // [sp+1ECh] [bp-E4h]
  char v132; // [sp+2A9h] [bp-27h]
  char v133; // [sp+2AAh] [bp-26h]

  v2 = 1;
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "RegionLanguageMgr";
  v3 = sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v4 = v3;
  if ( v3 )
    v2 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v3);
  v5 = sub_608FC0A4(0);
  *(_DWORD *)uid = off_60C5CB2C;
  *(_DWORD *)&uid[4] = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[8] = &byte_60B3BA34;
  *(_DWORD *)&uid[24] = 0;
  *(_DWORD *)&uid[12] = "System/RegionLangMask.txt";
  *(_DWORD *)&uid[16] = "System/DevRegionLang.txt";
  *(_DWORD *)&uid[20] = v4;
  sub_608FCB98(v5, uid);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  if ( v2 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v2);
  sub_6081BEE0(0);
  System_Revision_yml_ref(dword_60CC6C3C);
  sub_6081E020(0);
  if ( ((unsigned int)&dword_60CC6DD0 & ~(1619144020 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6DD0) )
  {
    dword_60CC6D98 = &off_60C2A660;
    dword_60CC6D9C = 0x10000;
    dword_60CC6DA0 = 0x2000;
    dword_60CC6DA4 = 0x2000;
    dword_60CC6DA8 = 9010;
    dword_60CC6DAC = 1;
    dword_60CC6DB0 = 5133;
    byte_60CC6DB4 = 1;
    _cxa_guard_release(&dword_60CC6DD0);
  }
  dword_60CC6DA0 = 0x40000;
  dword_60CC6DA4 = 0x40000;
  dword_60CC6D9C = 3145728;
  dword_60CC6DB0 &= 0xFFFFFFEE;
  v7 = (nn__diag *)sub_608ED418(uid);
  *(_DWORD *)uid = &dword_60CC6D98;
  *(_DWORD *)&uid[4] = 0;
  if ( !nn__diag__IsDebuggerAttached(v7) )
  {
    *(_QWORD *)&uid[8] = 25 * qword_60CCFB50;
    *(_DWORD *)&uid[16] = 0x10000;
  }
  (*(void (__fastcall **)(_DWORD, int, _BYTE *))(**(_DWORD **)(FIELD_U32(a1, 92) + 40) + 24))(
    *(_DWORD *)(FIELD_U32(a1, 92) + 40),
    a1,
    uid);
  if ( dword_60CCEBFC )
    FIELD_U8(dword_60CCEBFC, 204) = 0;
  UserInfo_createInstance(0);
  UserInfo_init(UserInfo_istance);
  v8 = (sead_ListNode *)operator_new(0x5Cu);
  LODWORD(v9) = &sead__SafeStringBase__vtable;
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  HIDWORD(v9) = "save";
  *(_DWORD *)&uid[4] = "save";
  sub_608E3820((int)v8, (int)uid);
  *(_QWORD *)uid = v9;
  sub_608E83B4((sead_ListNode *)dword_60CCEBD0, v8, uid);
  UserInfo_getUid(UserInfo_istance, uid);
  if ( *(_QWORD *)uid || *(_QWORD *)&uid[8] )
    nn__fs__MountSaveData((int)"save", (int)uid);
  memset(&v129[0].containingHeap, 0, 40);
  v129[0].vtable = (int)&off_60BFAA14;
  a1a.vtable = (int)&sead__SafeStringBase__vtable;
  a1a.containingHeap = (int)"%PROJECT_ROOT%/App/Debug/Save";
  *(_DWORD *)&uid[4] = &uid[12];
  *(_DWORD *)uid = &BufferedSafeStringBase_char_vtable_probably;
  *(_DWORD *)&uid[8] = 260;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)uid);
  *(_DWORD *)uid = &off_60C2A690;
  v10 = *(void **)&uid[4];
  ((void (__fastcall *)(sead_IDisposer *))off_60BC0244)(&a1a);
  containingHeap = (const void *)a1a.containingHeap;
  if ( v10 != (void *)a1a.containingHeap )
  {
    (*(void (__fastcall **)(sead_IDisposer *))(a1a.vtable + 12))(&a1a);
    v12 = 0;
    while ( *(_BYTE *)(a1a.containingHeap + v12) )
    {
      if ( !*(_BYTE *)(a1a.containingHeap + v12 + 1) )
      {
        ++v12;
        break;
      }
      if ( !*(_BYTE *)(a1a.containingHeap + v12 + 2) )
      {
        v12 += 2;
        break;
      }
      v13 = v12 + 2 <= 0x7FFFF;
      v12 += 3;
      if ( !v13 )
      {
        v12 = 0;
        break;
      }
    }
    if ( v12 >= *(int *)&uid[8] )
      v12 = *(_DWORD *)&uid[8] - 1;
    qmemcpy(v10, containingHeap, v12);
    *((_BYTE *)v10 + v12) = 0;
  }
  *(_DWORD *)uid = &off_60BF9688;
  v14 = (_DWORD *)operator_new(0x16Cu);
  a1a.vtable = (int)&sead__SafeStringBase__vtable;
  a1a.containingHeap = (int)"%PROJECT_ROOT%";
  v15 = sub_6081A0C0(v14, (int)&a1a);
  if ( sub_608E6138(v15) == 1 )
  {
    a1a.vtable = (int)&sead__SafeStringBase__vtable;
    a1a.containingHeap = (int)"/App/Debug/Save";
    sub_608E6D00(v14, &a1a, 1604);
  }
  v16 = (sead_ListNode *)operator_new(0x16Cu);
  v17 = sub_6081A0C0(v16, (int)uid);
  if ( sub_608E6138(v17) == 1 )
  {
    a1a.vtable = (int)&sead__SafeStringBase__vtable;
    a1a.containingHeap = (int)"debug";
    sub_608E83B4((sead_ListNode *)dword_60CCEBD0, v16, &a1a);
  }
  v129[0].vtable = (int)&off_60BFAA14;
  if ( v129[0].field_8 )
    sub_608E6B98(v129[0].field_8, v129);
  v18 = 1;
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "ResMgr";
  v19 = sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v20 = v19;
  if ( v19 )
    v18 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v19);
  sub_60820E5C(0);
  sub_60820F34(ArchiveManagerMaybe_instance, v20);
  (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 20))(v20);
  if ( v18 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v18);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "System/PrimitiveRenderer/primitive_drawer_nvn_shader.bin";
  sub_608F4C80(0, uid);
  v21 = (sead_IDisposer *)operator_new(0x4Cu);
  FIELD_U32(v21, 0x0) = (int)off_60C5CB68;
  v21[1].vtable = 0;
  v21[1].containingHeap = 0;
  v21[1].field_8 = (int)v21;
  v21[1].field_C = 0;
  sead_IDisposer_ctor(v21);
  FIELD_U32(v21, 0x0) = (int)off_60C5CB68;
  v21[2].containingHeap = (int)&v21[2].field_C;
  v21[2].vtable = (int)&BufferedSafeStringBase_char_vtable_probably;
  v21[2].field_8 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v21[2]);
  *(_BYTE *)v21[2].containingHeap = 0;
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "sarc";
  v21[2].vtable = (int)&off_60BD4C20;
  FIELD_U32(v21, 0x0) = (int)off_60BF9EF4;
  sub_6090261C(sead__ResourceMgr__sInstance, v21, uid);
  nn__os__GetSystemTick((nn__os *)uid);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  v22 = 1;
  *(_DWORD *)&uid[4] = "AglHeap";
  v23 = sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v24 = v23;
  if ( v23 )
    v22 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v23);
  sub_609195BC(uid);
  v25 = *(_DWORD *)&uid[48];
  if ( *(char **)&uid[48] != "Filter = designer" )
  {
    for ( i = 0; aFilterDesigner[i]; i += 2 )
    {
      if ( i > 0x7FFFF )
      {
        i = 0;
        break;
      }
      if ( !aFilterDesigner[i + 1] )
      {
        ++i;
        break;
      }
    }
    if ( i >= *(int *)&uid[52] )
      i = *(_DWORD *)&uid[52] - 1;
    qmemcpy(*(void **)&uid[48], "Filter = designer", i);
    *(_BYTE *)(v25 + i) = 0;
  }
  v27 = 0;
  *(_QWORD *)uid = 0x80000000000000LL;
  *(_QWORD *)&uid[8] = 0x80000000000000LL;
  *(_DWORD *)&uid[28] = 0x100000;
  *(_DWORD *)&uid[16] = 256;
  *(_DWORD *)&uid[20] = 100663296;
  *(_DWORD *)&uid[24] = 83886080;
  v132 = 1;
  v133 = 1;
  *(_DWORD *)uid = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)uid + 60))(*(_DWORD *)uid);
  sub_60919748((int *)uid);
  *(_DWORD *)uid = 0;
  nullsub_117(0);
  v129[0].vtable = (int)&sead__SafeStringBase__vtable;
  a1a.vtable = (int)&sead__SafeStringBase__vtable;
  v129[0].containingHeap = (int)&byte_60B3BA34;
  v129[0].field_8 = 0;
  v129[0].field_C = 0;
  v129[1].vtable = 32;
  memset(&v129[2], 0, sizeof(sead_IDisposer));
  v129[1].field_C = 0;
  v129[1].field_8 = 0;
  LOBYTE(v129[3].vtable) = 1;
  v129[3].containingHeap = 0;
  v129[1].containingHeap = 4096;
  a1a.containingHeap = (int)"System/Agl/agl_resource.Nin_NX_NVN.release.sarc";
  sead__SafeStringBase__operator_assign((int)v129, (int)&a1a);
  v28 = (int (__fastcall ***)(_DWORD, int *))sead_ResourceMgr_OpenFileRelated(sead__ResourceMgr__sInstance, (int)v129);
  if ( ((unsigned int)&dword_60C9BB24 & ~(1619145916 << v29) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB24) )
  {
    dword_60C9BB20 = (int)&off_60BF9F40;
    _cxa_guard_release(&dword_60C9BB24);
  }
  if ( v28 )
  {
    v27 = (**v28)(v28, &dword_60C9BB20);
    if ( v27 )
      v27 = (int)v28;
  }
  sub_60919C10(v27);
  byte_60CCFCA0 = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 20))(v24);
  if ( v22 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v22);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "GfxParameter";
  v30 = sead__ExpHeap__tryCreate(0, (int)uid, 0, 4, 1, 0);
  sub_60420BFC(v30);
  Env_env_pack_szs_ref(dword_60C9BAFC, v30);
  (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 20))(v30);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "FrameBufferKeeper";
  v31 = (void *)sead__ExpHeap__tryCreate(0, (int)uid, 0, 4, 1, 0);
  sub_604172E8((int)v31);
  v32 = sub_60417498(dword_60C9BAAC, v31);
  (*(void (__fastcall **)(void *, float))(*(_DWORD *)v31 + 20))(v31, v32);
  nn__os__GetSystemTick((nn__os *)uid);
  *(_DWORD *)uid = 2;
  *(_DWORD *)&uid[4] = sub_608248C4;
  v33 = (char *)sub_608EF048(v129, (int *)uid);
  v129[5].field_C = a1;
  v34 = dword_60CCEEA4;
  if ( dword_60CCEEA4 >= 1 )
  {
    v35 = dword_60CCEEA4 & 3;
    v36 = dword_60CCEEA4 - 1;
    if ( (dword_60CCEEA4 & 3) != 0 )
    {
      v37 = v33 + 24;
      v38 = 0;
      do
      {
        ++v38;
        *v37 = 1;
        v37 += 20;
      }
      while ( v35 != v38 );
    }
    else
    {
      v38 = 0;
    }
    if ( v36 >= 3 )
    {
      v39 = v34 - v38;
      v40 = &v33[20 * v38 + 84];
      do
      {
        *(v40 - 60) = 1;
        *(v40 - 40) = 1;
        *(v40 - 20) = 1;
        *v40 = 1;
        v40 += 80;
        v39 -= 4;
      }
      while ( v39 );
    }
  }
  v41 = FIELD_U32(a1, 92);
  qmemcpy(uid, v129, sizeof(uid));
  v131 = sub_60421CD4;
  v42 = sub_608F01B0(v41, uid);
  if ( ((unsigned int)&dword_60C9BB50 & ~(1619146516 << v43) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB50) )
  {
    dword_60C9BB4C = (int)&off_60BD83C8;
    _cxa_guard_release(&dword_60C9BB50);
  }
  if ( v42 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v42 + 8))(v42, &dword_60C9BB4C);
  v44 = 1;
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "RDashMgr";
  v45 = sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v46 = (void *)v45;
  if ( v45 )
    v44 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v45);
  sub_60820C04((int)v46);
  RDashRes_ref(dword_60CC6D8C, v46);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v46 + 20))(v46);
  if ( v44 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v44);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "Renderer";
  v47 = sead__ExpHeap__tryCreate(0, (int)uid, 0, 4, 1, 0);
  sub_60442E20(v47);
  (*(void (__fastcall **)(int))(*(_DWORD *)v47 + 20))(v47);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "FontMgr";
  v48 = sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v49 = 1;
  if ( v48 )
    v49 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v48);
  v88 = v49;
  sub_609864AC(0);
  *(_DWORD *)&uid[4] = &uid[12];
  *(_DWORD *)uid = &BufferedSafeStringBase_char_vtable_probably;
  *(_DWORD *)&uid[8] = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)uid);
  **(_BYTE **)&uid[4] = 0;
  *(_DWORD *)uid = &off_60BD94BC;
  v50 = sub_608FD200();
  v51 = (const char *)JP_US_EU_KR_CN_TW_ref(v50);
  sub_608FDDF4((int)uid, "Font/BmpFont_%s.szs", v51);
  v86 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v48 + 24))(v48, 0x100000, -64);
  sub_60903F5C(v129, 0x100000u, v86);
  a1a.vtable = (int)off_60C5CB68;
  v121 = 0;
  v122 = 0;
  p_a1a = &a1a;
  v124 = 0;
  sead_IDisposer_ctor(&a1a);
  a1a.vtable = (int)off_60C5CB68;
  v126 = (int *)v128;
  v125 = &BufferedSafeStringBase_char_vtable_probably;
  v127 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v125);
  *(_BYTE *)v126 = 0;
  v125 = &off_60BD4C20;
  a1a.vtable = (int)off_60BFCA34;
  v106 = &sead__SafeStringBase__vtable;
  v107 = &byte_60B3BA34;
  v108 = 0;
  v109 = 0;
  v110 = 32;
  v117 = 0;
  v116 = 0;
  v115 = 0;
  v114 = 0;
  v113 = 0;
  v112 = 0;
  v111 = 0;
  v118 = 1;
  v119 = 0;
  sead__SafeStringBase__operator_assign((int)&v106, (int)uid);
  v108 = v48;
  v109 = v48;
  v94 = (int)&sead__SafeStringBase__vtable;
  v110 = 0x2000;
  v111 = 0x2000;
  v115 = &a1a;
  v95 = &byte_60ABC94D;
  v52 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(sead__ResourceMgr__sInstance, &v106, &v94, v129);
  if ( ((unsigned int)&dword_60C9BB2C & ~(1619147420 << v53) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  if ( v52 )
  {
    v54 = (**v52)(v52, &dword_60C9BB28);
    if ( v54 )
      v54 = (int)v52;
  }
  else
  {
    v54 = 0;
  }
  if ( ((unsigned int)&dword_60CC6DD4 & ~(1619147664 << v53) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6DD4) )
  {
    dword_60CC6DE0 = (int)"redpro_MarioFontOutline_86.bffnt";
    dword_60CC6DE4 = (int)"redpro_MarioFontSolid_86.bffnt";
    dword_60CC6DE8 = (int)"redpro_MarioNumberFont.bffnt";
    dword_60CC6DEC = (int)"redpro_MessageFontOutline_42.bffnt";
    dword_60CC6DF0 = (int)"redpro_NumberFontOutline_32.bffnt";
    dword_60CC6DF4 = (int)"redpro_PictureFontOutline_42_RGBA8.bffnt";
    _cxa_guard_release(&dword_60CC6DD4);
  }
  v55 = FIELD_U32(v54, 4);
  v56 = FIELD_U32(v54, 8);
  v94 = 6;
  v95 = (char *)&dword_60CC6DE0;
  sub_609865C0(dword_60CD0C24, v48, v55, v56, &v94, 0);
  v94 = (int)&sead__SafeStringBase__vtable;
  v95 = "redpro_PictureFontOutline_42_RGBA8.bffnt";
  v57 = sub_60986AC8(dword_60CD0C24, &v94);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v57 + 120))(v57, 0);
  sub_60902104(&a1a);
  v129[0].vtable = (int)sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)v129);
  sead__IDisposer__dtor(v129);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v48 + 28))(v48, v86);
  (*(void (__fastcall **)(int))(*(_DWORD *)v48 + 20))(v48);
  if ( v88 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v88);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "MessageMgr";
  v58 = sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v59 = 1;
  if ( v58 )
    v59 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v58);
  v89 = v59;
  sub_60986C38(0);
  *(_DWORD *)&uid[4] = &uid[12];
  *(_DWORD *)uid = &BufferedSafeStringBase_char_vtable_probably;
  *(_DWORD *)&uid[8] = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)uid);
  **(_BYTE **)&uid[4] = 0;
  *(_DWORD *)uid = &off_60BD94BC;
  v60 = sub_608FD248();
  v61 = (const char *)sub_6081D400(v60);
  sub_608FDDF4((int)uid, "Message/CommonMsg_%s.szs", v61);
  v87 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v58 + 24))(v58, 0x100000, -64);
  sub_60903F5C(v129, 0x100000u, v87);
  a1a.vtable = (int)off_60C5CB68;
  v121 = 0;
  v122 = 0;
  p_a1a = &a1a;
  v124 = 0;
  sead_IDisposer_ctor(&a1a);
  a1a.vtable = (int)off_60C5CB68;
  v126 = (int *)v128;
  v125 = &BufferedSafeStringBase_char_vtable_probably;
  v127 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v125);
  *(_BYTE *)v126 = 0;
  v125 = &off_60BD4C20;
  a1a.vtable = (int)off_60BFCA34;
  v106 = &sead__SafeStringBase__vtable;
  v107 = &byte_60B3BA34;
  v108 = 0;
  v109 = 0;
  v110 = 32;
  v117 = 0;
  v116 = 0;
  v115 = 0;
  v114 = 0;
  v113 = 0;
  v112 = 0;
  v111 = 0;
  v118 = 1;
  v119 = 0;
  sead__SafeStringBase__operator_assign((int)&v106, (int)uid);
  v108 = v58;
  v109 = v58;
  v94 = (int)&sead__SafeStringBase__vtable;
  v110 = 4096;
  v111 = 4096;
  v115 = &a1a;
  v95 = &byte_60ABC94D;
  v62 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(sead__ResourceMgr__sInstance, &v106, &v94, v129);
  if ( ((unsigned int)&dword_60C9BB2C & ~(1619148584 << v63) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  if ( v62 )
  {
    v64 = (**v62)(v62, &dword_60C9BB28);
    if ( v64 )
      v64 = (int)v62;
  }
  else
  {
    v64 = 0;
  }
  sub_60986D00(dword_60CD0C2C, v58, 1);
  (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_60CD0C2C + 16))(
    dword_60CD0C2C,
    v58,
    FIELD_U32(v64, 4),
    FIELD_U32(v64, 8));
  sub_60902104(&a1a);
  v129[0].vtable = (int)sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)v129);
  sead__IDisposer__dtor(v129);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v58 + 28))(v58, v87);
  (*(void (__fastcall **)(int))(*(_DWORD *)v58 + 20))(v58);
  if ( v89 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v89);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "ScreenMgr";
  v65 = (void *)sead__ExpHeap__create(0, (int)uid, 0, 4, 1, 0);
  v66 = 1;
  if ( v65 )
    v66 = sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, (int)v65);
  v90 = v66;
  v99 = 0;
  v98 = 0;
  v97 = 0;
  v96 = 0;
  v95 = 0;
  v94 = 0;
  v100 = 10;
  v101 = 0;
  v102 = 0;
  v103 = 512;
  sub_6098B2FC(&v104);
  sub_6098B2FC(&v92);
  v94 = (int)v65;
  LODWORD(v92) = 0x400000;
  v67 = (char *)operator_new_8DE25C(4u, v65, 4);
  *(_DWORD *)v67 = &off_60C2A670;
  v95 = v67;
  v68 = operator_new_8DE25C(0x14u, v65, 4);
  v96 = sub_6098A4FC(v68);
  v69 = operator_new_8DE25C(0x18u, v65, 4);
  v97 = sub_6097C5C0(v69);
  v70 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)v65 + 24))(v65, 0x100000, -64);
  *(_DWORD *)&uid[4] = &uid[12];
  *(_DWORD *)uid = &BufferedSafeStringBase_char_vtable_probably;
  *(_DWORD *)&uid[8] = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)uid);
  **(_BYTE **)&uid[4] = 0;
  *(_DWORD *)uid = &off_60BD94BC;
  sub_608FDDF4((int)uid, "Layout/MultiFilter.Nin_NX_NVN.szs");
  sub_60903F5C(v129, 0x100000u, v70);
  a1a.vtable = (int)off_60C5CB68;
  v121 = 0;
  v122 = 0;
  p_a1a = &a1a;
  v124 = 0;
  v71 = sead_IDisposer_ctor(&a1a);
  a1a.vtable = (int)off_60C5CB68;
  v72 = v71;
  v126 = &v71[2].field_C;
  v125 = &BufferedSafeStringBase_char_vtable_probably;
  v127 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v71[2]);
  *(_BYTE *)v126 = 0;
  v125 = &off_60BD4C20;
  a1a.vtable = (int)off_60BFCA34;
  v106 = &sead__SafeStringBase__vtable;
  v107 = &byte_60B3BA34;
  v108 = 0;
  v109 = 0;
  v110 = 32;
  v117 = 0;
  v116 = 0;
  v115 = 0;
  v114 = 0;
  v113 = 0;
  v112 = 0;
  v111 = 0;
  v118 = 1;
  v119 = 0;
  sead__SafeStringBase__operator_assign((int)&v106, (int)uid);
  v108 = (int)v65;
  v109 = (int)v65;
  v91[0] = &sead__SafeStringBase__vtable;
  v110 = 0x2000;
  v111 = 0x2000;
  v115 = v72;
  v91[1] = &byte_60ABC94D;
  v73 = (int (__fastcall ***)(_DWORD, int *))sub_60902A08(sead__ResourceMgr__sInstance, &v106, v91, v129);
  if ( ((unsigned int)&dword_60C9BB2C & ~(1619149688 << v74) & 1) == 0 && _cxa_guard_acquire(&dword_60C9BB2C) )
  {
    dword_60C9BB28 = (int)&off_60BF9F4C;
    _cxa_guard_release(&dword_60C9BB2C);
  }
  if ( v73 )
  {
    v75 = (**v73)(v73, &dword_60C9BB28);
    if ( v75 )
      v75 = (int)v73;
  }
  else
  {
    v75 = 0;
  }
  v98 = FIELD_U32(v75, 4);
  v99 = FIELD_U32(v75, 8);
  sub_60902104(&a1a);
  v129[0].vtable = (int)sead_Decompressor_vtable;
  if ( sead__ResourceMgr__sInstance )
    sub_609029CC(sead__ResourceMgr__sInstance, (int)v129);
  sead__IDisposer__dtor(v129);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)v65 + 28))(v65, v70);
  v100 = 10;
  v101 = 0;
  v102 = 0;
  v103 = 512;
  v105 = v93;
  v104 = v92;
  sub_6098D450(v65);
  sub_6098D5F8(dword_60CD0C84, &v94);
  *(_DWORD *)uid = &sead__SafeStringBase__vtable;
  *(_DWORD *)&uid[4] = "LayoutPack";
  v76 = sead__ExpHeap__tryCreate(0, (int)uid, 0, 4, 1, 0);
  sub_608248F0();
  (*(void (__fastcall **)(int))(*(_DWORD *)v76 + 20))(v76);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v65 + 20))(v65);
  if ( v90 != 1 )
    sead__HeapMgr__setCurrentHeap(sead__HeapMgr__sInstance, v90);
  sub_607F5CB4(0);
  sub_607F5DF8(dword_60CC62E4, a1, FIELD_U32(a1, 92));
  sub_604591A4(0);
  v77 = *(_DWORD *)(a1 + 4 * FIELD_U32(a1, 88) + 68);
  v78 = (*(int (__fastcall **)(int))(*(_DWORD *)v77 + 60))(v77);
  v79 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v77 + 24))(v77, v78 - 4327424, 4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v77 + 20))(v77);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v77 + 28))(v77, v79);
  v80 = *(_DWORD *)(FIELD_U32(a1, 92) + 40);
  if ( ((unsigned int)&dword_60CC6BD0 & ~(1619150356 << v81) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6BD0) )
  {
    dword_60CC6BCC = (int)&off_60C2A1F0;
    _cxa_guard_release(&dword_60CC6BD0);
  }
  if ( v80 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v80 + 4))(v80, &dword_60CC6BCC);
  nn__os__GetSystemTick((nn__os *)uid);
  nn__os__ConvertToTimeSpan(v129);
  v82 = 3619042523LL * v129[0].containingHeap + ((3619042523u * (unsigned __int64)(unsigned int)v129[0].vtable) >> 32);
  v83 = ((1125899906LL * v129[0].containingHeap
        + SHIDWORD(v82)
        + (int)((1125899906LL * (unsigned int)v129[0].vtable + (unsigned __int64)(unsigned int)v82) >> 32)) >> 18)
      + ((unsigned int)v129[0].containingHeap >> 31);
  v84 = __OFSUB__(16000, v83);
  result = -(HIDWORD(v83) + ((unsigned int)v83 > 0x3E80));
  if ( result < 0 == v84 )
    return sub_609085CC(
             qword_60CCFB50 / 100,
             (unsigned __int64)(qword_60CCFB50 / 100) >> 32,
             qword_60CCFB50 % 100,
             (unsigned __int64)(qword_60CCFB50 % 100) >> 32);
  return result;
}

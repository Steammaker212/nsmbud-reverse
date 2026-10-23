/* sub_6023160C
 * address: 0x6023160C   size: 5128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6023160C(int a1, unsigned int a2, int a3, float *a4)
{
  int Area; // r7
  int v9; // r0
  int v10; // r11
  int *v11; // r0
  char v12; // r12
  int v13; // r6
  int v14; // r1
  float v15; // s16
  float v16; // s0
  char *cstr; // r6
  char *v18; // r7
  signed int v19; // r5
  bool v20; // cc
  char *v21; // r0
  char *v22; // r11
  int v23; // r7
  int v24; // r6
  signed int v25; // r5
  char *v26; // r5
  const char *v27; // r6
  signed int v28; // r7
  char *v29; // r10
  int v30; // r7
  int v31; // r6
  signed int v32; // r5
  char *v33; // r10
  int v34; // r7
  int v35; // r6
  signed int v36; // r5
  signed int v37; // r5
  void *v38; // r6
  char *v39; // r6
  char *v40; // r7
  _DWORD *v41; // r10
  int v42; // r7
  int v43; // r6
  signed int v44; // r5
  signed int v45; // r5
  int v46; // r0
  _DWORD *v47; // r0
  char *v48; // r6
  char *v49; // r7
  _DWORD *v50; // r10
  int v51; // r7
  int v52; // r6
  signed int v53; // r5
  int v54; // r5
  char v55; // r12
  int *v56; // r0
  int v57; // r6
  int v58; // r4
  char *v59; // r5
  char *v60; // r6
  signed int v61; // r7
  _DWORD *v62; // r10
  int v63; // r7
  int v64; // r6
  signed int v65; // r5
  int v66; // r0
  int v67; // r5
  void *Model; // r6
  ModelWrapper *v69; // r7
  ModelWrapper *v70; // r0
  sead_IDisposer *v71; // r6
  int CurrentHeap_const; // r0
  int v73; // r6
  int v74; // r0
  int v75; // r0
  unsigned int v76; // r1
  _DWORD **v77; // r0
  int v78; // r5
  int v79; // r5
  int v80; // r0
  bool v81; // r1
  int v82; // r0
  int result; // r0
  void *v84; // r0
  int v85; // [sp+20h] [bp-248h]
  int (**v86)(); // [sp+24h] [bp-244h] BYREF
  const char *v87; // [sp+28h] [bp-240h]
  int v88; // [sp+B0h] [bp-1B8h] BYREF
  int (**v89)(); // [sp+B4h] [bp-1B4h] BYREF
  char *v90; // [sp+B8h] [bp-1B0h]
  int v91; // [sp+BCh] [bp-1ACh]
  int v92; // [sp+C0h] [bp-1A8h] BYREF
  sead__SafeString path; // [sp+100h] [bp-168h] BYREF
  int v94; // [sp+108h] [bp-160h]
  int v95; // [sp+10Ch] [bp-15Ch] BYREF
  sead__SafeString identifier; // [sp+20Ch] [bp-5Ch] BYREF
  int v97; // [sp+214h] [bp-54h]
  int v98; // [sp+218h] [bp-50h] BYREF

  v85 = a1 + 456;
  sub_6092D6E0(a1 + 456, 1, 0);
  sub_60421050(dword_60C9BAFC, a1 + 1304);
  FIELD_U8(a1, 4072) = 0;
  Area = Level_getArea(Level_instance, a2);
  v9 = sub_60727620(Area, a3, 0);
  v10 = sub_60727CB8(Area, FIELD_U8(v9, 18));
  v11 = (int *)sub_60008598(ActorMgr__instance, 587, FIELD_U32(ActorMgr__instance, 27172));
  if ( v11 == *(int **)(ActorMgr__instance + 27180) )
  {
    v15 = (float)(*a4 + a4[2]) * 0.5;
    v16 = sub_607FC9FC(dword_60CC6484);
    FIELD_U32(a1, 448) = 0;
    FIELD_F32(a1, 440) = v15;
    FIELD_F32(a1, 444) = v16;
  }
  else
  {
    v13 = *v11;
    if ( ((unsigned int)&dword_60C8D90C & ~(1612912360 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C8D90C) )
    {
      dword_60C8D908 = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C8D90C);
    }
    if ( v13 && (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C8D908) == 1 )
    {
      v14 = FIELD_U32(v13, 84);
      FIELD_U32(a1, 440) = FIELD_U32(v13, 80);
      FIELD_U32(a1, 444) = v14;
      FIELD_U32(a1, 448) = 0;
      FIELD_U8(v13, 19) = 1;
    }
  }
  path.vtable = &sead__SafeStringBase__vtable;
  path.cstr = "dv_";
  identifier.cstr = (char *)&v98;
  identifier.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v97 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&identifier);
  identifier.vtable = &off_60BD4C38;
  cstr = identifier.cstr;
  ((void (__fastcall *)(sead__SafeString *))off_60BC0244)(&path);
  v18 = path.cstr;
  if ( cstr != path.cstr )
  {
    (*((void (__fastcall **)(sead__SafeString *))path.vtable + 3))(&path);
    v19 = 0;
    while ( path.cstr[v19] )
    {
      if ( !path.cstr[v19 + 1] )
      {
        ++v19;
        break;
      }
      if ( !path.cstr[v19 + 2] )
      {
        v19 += 2;
        break;
      }
      v20 = v19 + 2 <= 0x7FFFF;
      v19 += 3;
      if ( !v20 )
      {
        v19 = 0;
        break;
      }
    }
    if ( v19 >= v97 )
      v19 = v97 - 1;
    qmemcpy(cstr, v18, v19);
    cstr[v19] = 0;
  }
  identifier.vtable = &off_60BD4C20;
  if ( v10 )
  {
    path.vtable = &sead__SafeStringBase__vtable;
    v21 = (char *)(v10 + 8);
    v22 = identifier.cstr;
    path.cstr = v21;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&identifier);
    v23 = 0;
    while ( identifier.cstr[v23] )
    {
      if ( !identifier.cstr[v23 + 1] )
      {
        ++v23;
        break;
      }
      if ( !identifier.cstr[v23 + 2] )
      {
        v23 += 2;
        break;
      }
      v20 = v23 + 2 <= 0x7FFFF;
      v23 += 3;
      if ( !v20 )
      {
        v23 = 0;
        break;
      }
    }
    (*((void (__fastcall **)(sead__SafeString *))path.vtable + 3))(&path);
    v24 = 0;
    v25 = 0;
    if ( v23 > 0 )
      v24 = v23;
    while ( path.cstr[v25] )
    {
      if ( !path.cstr[v25 + 1] )
        goto LABEL_52;
      if ( !path.cstr[v25 + 2] )
        goto LABEL_53;
      v20 = v25 + 2 <= 0x7FFFF;
      v25 += 3;
      if ( !v20 )
      {
        v25 = 0;
        break;
      }
    }
  }
  else
  {
    v22 = identifier.cstr;
    path.vtable = &sead__SafeStringBase__vtable;
    path.cstr = "Nohara";
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&identifier);
    v23 = 0;
    while ( identifier.cstr[v23] )
    {
      if ( !identifier.cstr[v23 + 1] )
      {
        ++v23;
        break;
      }
      if ( !identifier.cstr[v23 + 2] )
      {
        v23 += 2;
        break;
      }
      v20 = v23 + 2 <= 0x7FFFF;
      v23 += 3;
      if ( !v20 )
      {
        v23 = 0;
        break;
      }
    }
    (*((void (__fastcall **)(sead__SafeString *))path.vtable + 3))(&path);
    v24 = 0;
    v25 = 0;
    if ( v23 > 0 )
      v24 = v23;
    while ( path.cstr[v25] )
    {
      if ( !path.cstr[v25 + 1] )
      {
LABEL_52:
        ++v25;
        break;
      }
      if ( !path.cstr[v25 + 2] )
      {
LABEL_53:
        v25 += 2;
        break;
      }
      v20 = v25 + 2 <= 0x7FFFF;
      v25 += 3;
      if ( !v20 )
      {
        v25 = 0;
        break;
      }
    }
  }
  if ( v25 >= v97 - v24 )
    v25 = v97 - v24 - 1;
  if ( v25 >= 1 )
  {
    (*((void (__fastcall **)(sead__SafeString *))path.vtable + 3))(&path);
    qmemcpy(&v22[v24], path.cstr, v25);
    if ( v25 + v24 > v23 )
      v22[v25 + v24] = 0;
  }
  v86 = &sead__SafeStringBase__vtable;
  v87 = "Model/";
  path.cstr = (char *)&v95;
  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
  v94 = 256;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  path.vtable = &off_60BD94D4;
  v26 = path.cstr;
  ((void (__fastcall *)(int (***)()))off_60BC0244)(&v86);
  v27 = v87;
  if ( v26 != v87 )
  {
    ((void (__fastcall *)(int (***)()))v86[3])(&v86);
    v28 = 0;
    while ( v87[v28] )
    {
      if ( !v87[v28 + 1] )
      {
        ++v28;
        break;
      }
      if ( !v87[v28 + 2] )
      {
        v28 += 2;
        break;
      }
      v20 = v28 + 2 <= 0x7FFFF;
      v28 += 3;
      if ( !v20 )
      {
        v28 = 0;
        break;
      }
    }
    if ( v28 >= v94 )
      v28 = v94 - 1;
    qmemcpy(v26, v27, v28);
    v26[v28] = 0;
  }
  path.vtable = &off_60BD94BC;
  v29 = path.cstr;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
  v30 = 0;
  while ( path.cstr[v30] )
  {
    if ( !path.cstr[v30 + 1] )
    {
      ++v30;
      break;
    }
    if ( !path.cstr[v30 + 2] )
    {
      v30 += 2;
      break;
    }
    v20 = v30 + 2 <= 0x7FFFF;
    v30 += 3;
    if ( !v20 )
    {
      v30 = 0;
      break;
    }
  }
  (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
  v31 = 0;
  v32 = 0;
  if ( v30 > 0 )
    v31 = v30;
  while ( identifier.cstr[v32] )
  {
    if ( !identifier.cstr[v32 + 1] )
    {
      ++v32;
      break;
    }
    if ( !identifier.cstr[v32 + 2] )
    {
      v32 += 2;
      break;
    }
    v20 = v32 + 2 <= 0x7FFFF;
    v32 += 3;
    if ( !v20 )
    {
      v32 = 0;
      break;
    }
  }
  if ( v32 >= v94 - v31 )
    v32 = v94 - v31 - 1;
  if ( v32 >= 1 )
  {
    (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
    qmemcpy(&v29[v31], identifier.cstr, v32);
    if ( v32 + v31 > v30 )
      v29[v32 + v31] = 0;
  }
  v33 = path.cstr;
  v86 = &sead__SafeStringBase__vtable;
  v87 = ".Nin_NX_NVN.szs";
  (*((void (__fastcall **)(sead__SafeString *))path.vtable + 3))(&path);
  v34 = 0;
  while ( path.cstr[v34] )
  {
    if ( !path.cstr[v34 + 1] )
    {
      ++v34;
      break;
    }
    if ( !path.cstr[v34 + 2] )
    {
      v34 += 2;
      break;
    }
    v20 = v34 + 2 <= 0x7FFFF;
    v34 += 3;
    if ( !v20 )
    {
      v34 = 0;
      break;
    }
  }
  ((void (__fastcall *)(int (***)()))v86[3])(&v86);
  v35 = 0;
  v36 = 0;
  if ( v34 > 0 )
    v35 = v34;
  while ( v87[v36] )
  {
    if ( !v87[v36 + 1] )
    {
      ++v36;
      break;
    }
    if ( !v87[v36 + 2] )
    {
      v36 += 2;
      break;
    }
    v20 = v36 + 2 <= 0x7FFFF;
    v36 += 3;
    if ( !v20 )
    {
      v36 = 0;
      break;
    }
  }
  if ( v36 >= v94 - v35 )
    v36 = v94 - v35 - 1;
  if ( v36 >= 1 )
  {
    ((void (__fastcall *)(int (***)()))v86[3])(&v86);
    qmemcpy(&v33[v35], v87, v36);
    if ( v36 + v35 > v34 )
      v33[v36 + v35] = 0;
  }
  v37 = 0;
  v86 = &sead__SafeStringBase__vtable;
  v87 = "DistantViewRes";
  v38 = (void *)sub_608F8808(0, &v86, 0, 4, 1, 0);
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, v38, 1);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v38 + 20))(v38);
  v90 = (char *)&v92;
  v89 = &BufferedSafeStringBase_char_vtable_probably;
  v91 = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v89);
  v89 = &off_60BD4C08;
  v39 = v90;
  (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
  v40 = identifier.cstr;
  if ( v39 != identifier.cstr )
  {
    (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
    while ( identifier.cstr[v37] )
    {
      if ( !identifier.cstr[v37 + 1] )
      {
        ++v37;
        break;
      }
      if ( !identifier.cstr[v37 + 2] )
      {
        v37 += 2;
        break;
      }
      v20 = v37 + 2 <= 0x7FFFF;
      v37 += 3;
      if ( !v20 )
      {
        v37 = 0;
        break;
      }
    }
    if ( v37 >= v91 )
      v37 = v91 - 1;
    qmemcpy(v39, v40, v37);
    v39[v37] = 0;
  }
  v89 = &off_60BD4BF0;
  v41 = v90;
  v86 = &sead__SafeStringBase__vtable;
  v87 = ".opt";
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v89);
  v42 = 0;
  while ( v90[v42] )
  {
    if ( !v90[v42 + 1] )
    {
      ++v42;
      break;
    }
    if ( !v90[v42 + 2] )
    {
      v42 += 2;
      break;
    }
    v20 = v42 + 2 <= 0x7FFFF;
    v42 += 3;
    if ( !v20 )
    {
      v42 = 0;
      break;
    }
  }
  ((void (__fastcall *)(int (***)()))v86[3])(&v86);
  v43 = 0;
  v44 = 0;
  if ( v42 > 0 )
    v43 = v42;
  while ( v87[v44] )
  {
    if ( !v87[v44 + 1] )
    {
      ++v44;
      break;
    }
    if ( !v87[v44 + 2] )
    {
      v44 += 2;
      break;
    }
    v20 = v44 + 2 <= 0x7FFFF;
    v44 += 3;
    if ( !v20 )
    {
      v44 = 0;
      break;
    }
  }
  if ( v44 >= v91 - v43 )
    v44 = v91 - v43 - 1;
  if ( v44 >= 1 )
  {
    ((void (__fastcall *)(int (***)()))v86[3])(&v86);
    qmemcpy((char *)v41 + v43, v87, v44);
    if ( v44 + v43 > v42 )
      *((_BYTE *)v41 + v44 + v43) = 0;
  }
  v45 = 0;
  v46 = sub_608226EC(ArchiveManagerMaybe_instance, &identifier, &v89, 0);
  sub_60235B60(a1 + 424, v46);
  v47 = (_DWORD *)operator_new(0x16Cu);
  FIELD_U32(a1, 428) = sub_602350E4(v47, a1, a1 + 440, &identifier);
  v48 = v90;
  (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
  v49 = identifier.cstr;
  if ( v48 != identifier.cstr )
  {
    (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
    while ( identifier.cstr[v45] )
    {
      if ( !identifier.cstr[v45 + 1] )
      {
        ++v45;
        break;
      }
      if ( !identifier.cstr[v45 + 2] )
      {
        v45 += 2;
        break;
      }
      v20 = v45 + 2 <= 0x7FFFF;
      v45 += 3;
      if ( !v20 )
      {
        v45 = 0;
        break;
      }
    }
    if ( v45 >= v91 )
      v45 = v91 - 1;
    qmemcpy(v48, v49, v45);
    v48[v45] = 0;
  }
  v50 = v90;
  v86 = &sead__SafeStringBase__vtable;
  v87 = ".baglenv";
  ((void (__fastcall *)(int (***)()))v89[3])(&v89);
  v51 = 0;
  while ( v90[v51] )
  {
    if ( !v90[v51 + 1] )
    {
      ++v51;
      break;
    }
    if ( !v90[v51 + 2] )
    {
      v51 += 2;
      break;
    }
    v20 = v51 + 2 <= 0x7FFFF;
    v51 += 3;
    if ( !v20 )
    {
      v51 = 0;
      break;
    }
  }
  ((void (__fastcall *)(int (***)()))v86[3])(&v86);
  v52 = 0;
  v53 = 0;
  if ( v51 > 0 )
    v52 = v51;
  while ( v87[v53] )
  {
    if ( !v87[v53 + 1] )
    {
      ++v53;
      break;
    }
    if ( !v87[v53 + 2] )
    {
      v53 += 2;
      break;
    }
    v20 = v53 + 2 <= 0x7FFFF;
    v53 += 3;
    if ( !v20 )
    {
      v53 = 0;
      break;
    }
  }
  if ( v53 >= v91 - v52 )
    v53 = v91 - v52 - 1;
  if ( v53 >= 1 )
  {
    ((void (__fastcall *)(int (***)()))v86[3])(&v86);
    qmemcpy((char *)v50 + v52, v87, v53);
    if ( v53 + v52 > v51 )
      *((_BYTE *)v50 + v53 + v52) = 0;
  }
  v54 = sub_608226EC(ArchiveManagerMaybe_instance, &identifier, &v89, &v86);
  if ( v54 )
  {
    v56 = *(int **)(dword_60CD0B40 + 36);
    if ( FIELD_U32(dword_60CD0B40, 32) > 5u )
      v56 += 5;
    v57 = *v56;
    if ( ((unsigned int)&dword_60C81740 & ~(1612915592 << v55) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
    {
      dword_60C8173C = (int)&off_60BC6E70;
      _cxa_guard_release(&dword_60C81740);
    }
    v58 = v57 + 420;
    if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v57 + 8))(v57, &dword_60C8173C) )
      v58 = 420;
    sub_60445734(*(_DWORD *)v58, v54);
  }
  v59 = v90;
  (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
  v60 = identifier.cstr;
  if ( v59 != identifier.cstr )
  {
    (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
    v61 = 0;
    while ( identifier.cstr[v61] )
    {
      if ( !identifier.cstr[v61 + 1] )
      {
        ++v61;
        break;
      }
      if ( !identifier.cstr[v61 + 2] )
      {
        v61 += 2;
        break;
      }
      v20 = v61 + 2 <= 0x7FFFF;
      v61 += 3;
      if ( !v20 )
      {
        v61 = 0;
        break;
      }
    }
    if ( v61 >= v91 )
      v61 = v91 - 1;
    qmemcpy(v59, v60, v61);
    v59[v61] = 0;
  }
  v62 = v90;
  ((void (__fastcall *)(int (***)()))v89[3])(&v89);
  v63 = 0;
  while ( v90[v63] )
  {
    if ( !v90[v63 + 1] )
    {
      ++v63;
      break;
    }
    if ( !v90[v63 + 2] )
    {
      v63 += 2;
      break;
    }
    v20 = v63 + 2 <= 0x7FFFF;
    v63 += 3;
    if ( !v20 )
    {
      v63 = 0;
      break;
    }
  }
  v64 = 0;
  v65 = 0;
  if ( v63 > 0 )
    v64 = v63;
  while ( aBagldof[v65] )
  {
    if ( v65 > 0x7FFFF )
    {
      v65 = 0;
      break;
    }
    if ( !aBagldof[v65 + 1] )
    {
      ++v65;
      break;
    }
    v65 += 2;
  }
  if ( v65 >= v91 - v64 )
    v65 = v91 - v64 - 1;
  if ( v65 >= 1 )
  {
    qmemcpy((char *)v62 + v64, ".bagldof", v65);
    if ( v65 + v64 > v63 )
      *((_BYTE *)v62 + v65 + v64) = 0;
  }
  if ( sub_608226EC(ArchiveManagerMaybe_instance, &identifier, &v89, &v86) )
  {
    sub_60951E50(&v88);
    sub_60947118(a1 + 1304, v88);
  }
  else
  {
    FIELD_U8(a1, 4072) = 0;
  }
  (*((void (__fastcall **)(sead__SafeString *))identifier.vtable + 3))(&identifier);
  v66 = sub_60232ABC(&v86, "DistantView/%s.envset", identifier.cstr);
  sub_60416B78(v66, 0);
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&identifier, 0);
  v67 = LoadResource(ResourceMgrRelated_instance, &identifier);
  Model = (void *)Resource_getModel((void *)v67, &identifier, 1, 1, 1, 2, 0, 0, 1, 0);
  v69 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v70 = ModelWrapper_ctor(v69, Model, 1, 1, 2, 0, 0);
  ModelWrapper_setup(v70, v67, 0, 0);
  FIELD_U32(a1, 420) = v69;
  *((_DWORD *)FIELD_U32(v69, 0x0) + 8) = 0;
  *(_DWORD *)(**(_DWORD **)(a1 + 420) + 36) = 0;
  v71 = (sead_IDisposer *)operator_new(0x24u);
  CurrentHeap_const = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  sub_60230BCC(v71, CurrentHeap_const, **(_DWORD **)(a1 + 420));
  FIELD_U32(a1, 432) = v71;
  if ( dword_60C99DD4 && sub_603FD564(dword_60C99DD4 + 764) == 1 )
  {
    v73 = operator_new(0x80u);
    v74 = sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    sub_60233B8C(v73, v74, **(_DWORD **)(a1 + 420), a1);
    FIELD_U32(a1, 436) = v73;
  }
  if ( *(_WORD *)(FIELD_U32(v67, 20) + 190) )
    SkeletalAnim_play(**(_DWORD **)(FIELD_U32(a1, 420) + 12), v67, (int)&identifier);
  if ( FIELD_U16(v67, 76) )
    sub_60446088(**(_DWORD **)(FIELD_U32(a1, 420) + 28), v67, (int)&identifier);
  if ( FIELD_U16(v67, 74) )
  {
    v75 = FIELD_U32(a1, 420);
    v76 = FIELD_U32(v75, 24);
    v77 = *(_DWORD ***)(v75 + 28);
    if ( v76 > 1 )
      ++v77;
    ShuAnim_play(*v77, v67, (int)&identifier);
  }
  if ( FIELD_U16(v67, 78) )
    TexAnim_play(**(_DWORD **)(FIELD_U32(a1, 420) + 20), v67, &identifier);
  if ( sub_609183B4(FIELD_U32(v67, 20), "dof_indirect") >= 0 )
  {
    v78 = sub_609184C4(FIELD_U32(v67, 20));
    sub_6090B310(dword_60CCF464);
    sub_60959954(a1 + 4304, v78);
    sub_6090B32C(dword_60CCF464);
    sub_60930F00(v85, a1 + 4304);
    sub_60931064(a1 + 488, a1 + 4576);
    sub_60930EEC(a1 + 488, 1);
  }
  sub_60232B58(a1);
  v79 = **(_DWORD **)(a1 + 420);
  sub_602354FC(FIELD_U32(a1, 428), &v86);
  (*(void (__fastcall **)(int, int (***)()))(*(_DWORD *)v79 + 60))(v79, &v86);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 420));
  v80 = FIELD_U32(a1, 432);
  if ( FIELD_S32(v80, 32) < 1 )
  {
    v86 = &off_60BD94A4;
    v81 = sub_60008D1C(
            ActorMgr__instance + 27168,
            (int (__fastcall ***)(_DWORD))&v86,
            FIELD_U32(ActorMgr__instance, 27172)) != FIELD_U32(ActorMgr__instance, 27180);
  }
  else
  {
    sub_602311CC(v80);
    v81 = 1;
  }
  FIELD_U8(a1, 4720) = v81;
  v82 = FIELD_U32(a1, 436);
  if ( v82 && FIELD_S32(v82, 124) >= 1 )
    sub_602342AC(v82, 1, a1 + 80, a1 + 168);
  sub_60230578(**(_DWORD **)(a1 + 420));
  result = FIELD_U32(a1, 352);
  if ( !result )
  {
    v84 = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
    result = operator_new_8DE25C(0xF0u, v84, 16);
    FIELD_U32(a1, 352) = result;
  }
  return result;
}

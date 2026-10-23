/* PlayerStates_loadModelResources
 * address: 0x607E55DC   size: 7468   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_loadModelResources(int a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r8
  int v4; // r7
  int v5; // r5
  int v6; // r5
  char *v7; // r1
  int v8; // r0
  _DWORD *v9; // r10
  int v10; // r1
  int v11; // r0
  char *v12; // r1
  signed int v13; // r4
  signed int v14; // r0
  __int64 v15; // r0
  int v16; // r0
  signed int v17; // r8
  _DWORD *v18; // r3
  _DWORD *v19; // r6
  _DWORD *v20; // r7
  _DWORD *v21; // r6
  _DWORD *v22; // r7
  int v23; // r0
  ModelWrapper *v24; // r4
  ModelWrapper *v25; // r0
  ModelWrapper **v26; // r1
  int v27; // r0
  _BYTE *v28; // r4
  int v29; // r0
  int v30; // r0
  int v31; // r0
  bool v32; // cc
  int v33; // r1
  _BYTE *v34; // r4
  int v35; // r0
  int v36; // r0
  _DWORD *v37; // r1
  _DWORD *v38; // r2
  void *v39; // r8
  void *Model2; // r4
  ModelWrapper *v41; // r6
  ModelWrapper *v42; // r0
  __int16 v43; // r0
  bool v44; // zf
  char v45; // r4
  int v46; // r0
  int ModelResources_helper; // r0
  unsigned int v48; // r11
  _DWORD *v49; // r9
  int *v50; // r9
  int v51; // t1
  int v52; // r4
  int v53; // r5
  size_t v54; // r8
  int v55; // r0
  int v56; // r1
  int *v57; // r6
  int v58; // r2
  int v59; // r3
  unsigned __int16 *v60; // r0
  size_t v61; // r4
  size_t v62; // r2
  int v63; // r0
  int v64; // r1
  int *v65; // r1
  int v66; // r4
  int v67; // r6
  size_t v68; // r7
  int v69; // r0
  int v70; // r1
  int *v71; // r4
  int v72; // r2
  int v73; // r3
  unsigned __int16 *v74; // r0
  size_t v75; // r8
  size_t v76; // r2
  int v77; // r0
  int v78; // r1
  int v79; // r1
  int v80; // r1
  int v81; // r1
  int v82; // r0
  int v83; // r1
  int v84; // r1
  int v85; // r1
  int v86; // r1
  int v87; // r1
  int v88; // r0
  int v89; // r1
  int v90; // r1
  int v91; // r1
  int v92; // r1
  int v93; // r1
  int v94; // r0
  int v95; // r1
  int v96; // r1
  _BYTE *v97; // r4
  _BYTE *v98; // r5
  int **v99; // r1
  int v100; // r7
  int v101; // r0
  int *v102; // r4
  int v103; // r5
  int v104; // r0
  char *cstr; // r2
  char *v106; // r2
  char *v107; // r1
  char v108; // r2
  int **v109; // r1
  int v110; // r7
  int v111; // r0
  int *v112; // r4
  int v113; // r5
  int v114; // r0
  char *v115; // r2
  char *v116; // r2
  char *v117; // r1
  char v118; // r2
  nn__util__BinaryFileHeader *v119; // r0
  _DWORD *v120; // r7
  const char *v121; // r1
  int v122; // r4
  unsigned __int16 *v123; // r4
  int v124; // t1
  void *CurrentHeap_const; // r8
  _DWORD *v126; // r0
  _DWORD *v127; // r9
  int v128; // r1
  int v129; // r0
  char v130; // r1
  int v131; // r2
  unsigned __int8 *v132; // r3
  __int16 v133; // r6
  unsigned int v134; // r6
  int v135; // r0
  const char *v136; // r1
  int v137; // r4
  unsigned __int16 *v138; // r4
  int v139; // t1
  _DWORD *v140; // r0
  _DWORD *v141; // r8
  int v142; // r1
  int v143; // r0
  char v144; // r1
  int v145; // r2
  unsigned __int8 *v146; // r3
  __int16 v147; // r4
  unsigned int v148; // r5
  int v149; // r0
  int v150; // r0
  int v151; // r1
  int v152; // r1
  int v153; // r0
  int v154; // r0
  int a5; // [sp+0h] [bp-150h]
  int a5a; // [sp+0h] [bp-150h]
  int a6; // [sp+4h] [bp-14Ch]
  int a6a; // [sp+4h] [bp-14Ch]
  int a7; // [sp+8h] [bp-148h]
  int a7a; // [sp+8h] [bp-148h]
  int v162; // [sp+1Ch] [bp-134h]
  int *v163; // [sp+28h] [bp-128h]
  int *v164; // [sp+30h] [bp-120h]
  int *v165; // [sp+58h] [bp-F8h]
  int *v166; // [sp+60h] [bp-F0h]
  signed int *v167; // [sp+64h] [bp-ECh]
  void *modela; // [sp+68h] [bp-E8h]
  int *model; // [sp+68h] [bp-E8h]
  _BYTE *v170; // [sp+6Ch] [bp-E4h]
  _BYTE *v171; // [sp+70h] [bp-E0h]
  _DWORD *v172; // [sp+74h] [bp-DCh]
  _DWORD *v173; // [sp+78h] [bp-D8h]
  _DWORD *v174; // [sp+7Ch] [bp-D4h]
  int v175; // [sp+84h] [bp-CCh] BYREF
  int v176; // [sp+88h] [bp-C8h] BYREF
  sead__SafeString path; // [sp+8Ch] [bp-C4h] BYREF
  unsigned int v178; // [sp+94h] [bp-BCh]
  _DWORD v179[9]; // [sp+98h] [bp-B8h] BYREF
  char nptr[4]; // [sp+BCh] [bp-94h] BYREF
  const char *v181; // [sp+C0h] [bp-90h]
  sead__SafeString a2; // [sp+CCh] [bp-84h] BYREF
  unsigned int v183; // [sp+D4h] [bp-7Ch]
  _DWORD v184[30]; // [sp+D8h] [bp-78h] BYREF

  sub_60401BB8(0);
  sub_60401ED4(dword_60C99E68);
  sub_60023F4C();
  sub_6045BF58(a1 + 604, 0);
  sub_6045BF58(a1 + 1008, 1);
  sub_6045BF58(a1 + 1412, 2);
  sub_6045BF58(a1 + 1816, 3);
  sub_6045BF58(a1 + 2220, 4);
  sub_6092D6E0(a1 + 1725152, 1, 0);
  v162 = a1 + 1726000;
  sub_60421050(dword_60C9BAFC, a1 + 1726000);
  v172 = (_DWORD *)a1;
  FIELD_U8(a1, 1728768) = 0;
  v2 = (_DWORD *)operator_new(0x390u);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "Demo";
  sub_60443FE0((int)v2, (int)&a2);
  v3 = (_DWORD *)operator_new(0x390u);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "DemoDV";
  sub_60443FE0((int)v3, (int)&a2);
  sub_60444108(v2, 1, 1024, 1, 1, 0);
  sub_60444108(v3, 1, 1024, 1, 1, 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  v4 = dword_60CD0B40;
  a2.cstr = "3D";
  v5 = operator_new_8DE25C(0x1FCu, 0, 4);
  sub_6044364C();
  sub_60958220(v4, v5, 7, &a2, 0, 0);
  sub_60443628(v5, (int)v2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "DV";
  v6 = operator_new_8DE25C(0x1FCu, 0, 4);
  sub_6044364C();
  sub_60958220(v4, v6, 5, &a2, 0, 0);
  sub_60443628(v6, (int)v3);
  if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) != 0 )
  {
    path.vtable = &sead__SafeStringBase__vtable;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demoData";
    path.cstr = "Demo/010data.sarc";
    ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &a2, &path, 0, 0);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demoData";
    path.vtable = &sead__SafeStringBase__vtable;
    v7 = "010data.bin";
  }
  else
  {
    path.vtable = &sead__SafeStringBase__vtable;
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demoData";
    path.cstr = "Demo/000data.sarc";
    ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &a2, &path, 0, 0);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demoData";
    path.vtable = &sead__SafeStringBase__vtable;
    v7 = "000data.bin";
  }
  path.cstr = v7;
  v8 = sub_608226EC(ArchiveManagerMaybe_instance, &a2, &path, 0);
  v9 = (_DWORD *)a1;
  FIELD_U32(a1, 1724976) = v8;
  FIELD_U32(a1, 1724992) = off_60C5CB10(FIELD_U32(v8, 8));
  v10 = FIELD_U16(dword_60CC6D78, 109048) & 0x7F;
  if ( v10 )
  {
    v11 = ArchiveManagerMaybe_instance;
    a2.vtable = &sead__SafeStringBase__vtable;
    path.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demo";
    if ( v10 == 10 )
      v12 = "Demo/Ending.szs";
    else
      v12 = "Demo/CS_W8a_DarkCloud.sarc";
  }
  else
  {
    v11 = ArchiveManagerMaybe_instance;
    a2.vtable = &sead__SafeStringBase__vtable;
    path.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "demo";
    v12 = "Demo/Opening.szs";
  }
  path.cstr = v12;
  ArchiveManager_loadSzs(v11, &a2, &path, 0, 1);
  v13 = 128;
  a2.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "demo";
  path.cstr = "demo";
  v14 = PlayerStates_loadModelResources_helper_43B8B0(
          ResourceMgrRelated_instance,
          (int)&a2,
          (int)(v172 + 856),
          128,
          &path,
          0);
  if ( v14 < 128 )
    v13 = v14;
  v172[431245] = v13;
  v167 = v172 + 431245;
  if ( v14 >= 1 )
  {
    v15 = 4LL * (unsigned int)v13;
    if ( !is_mul_ok(4u, v13) )
      HIDWORD(v15) = 1;
    if ( HIDWORD(v15) )
      LODWORD(v15) = -1;
    v16 = sub_608DE334(v15, 0, 4);
    if ( v16 )
    {
      v172[854] = v13;
      v172[855] = v16;
    }
    v13 = *v167;
  }
  if ( v13 >= 1 )
  {
    v17 = 0;
    v18 = v172 + 111757;
    v19 = v172 + 1099;
    do
    {
      v174 = v18;
      v20 = &v9[v17];
      v173 = v19;
      v171 = (char *)v9 + v17;
      *((_BYTE *)v9 + v17 + 1729000) = -1;
      v170 = (char *)v9 + v17 + 1729000;
      v21 = (_DWORD *)v20[856];
      v23 = *(_DWORD *)(*(_DWORD *)(v21[5] + 40) + 16);
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = (char *)(v23 + 2);
      modela = (void *)Resource_getModel2(v21, &a2, 1, 1, 1, 1, 0, 0, 0);
      v9 = v172;
      v24 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v25 = ModelWrapper_ctor(v24, modela, 1, 1, 1, 1, 0);
      v22 = v20 + 856;
      ModelWrapper_setup(v25, v21, 0, 0);
      v26 = (ModelWrapper **)v172[855];
      if ( v172[854] > (unsigned int)v17 )
        v26 += v17;
      *v26 = v24;
      v27 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v22 + 20) + 40) + 16);
      a2.vtable = &sead__SafeStringBase__vtable;
      path.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = (char *)(v27 + 2);
      path.cstr = "DV_";
      if ( sub_6018506C(&a2, &path) >= 0 )
        *v170 = v17;
      v171[4136] = 0;
      v28 = v171 + 4136;
      v171[4264] = 0;
      v29 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v22 + 20) + 40) + 16);
      a2.vtable = &sead__SafeStringBase__vtable;
      path.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = (char *)(v29 + 2);
      path.cstr = "effect";
      if ( sub_6018506C(&a2, &path) >= 0 )
        *v28 = 1;
      v30 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v22 + 20) + 40) + 16);
      a2.vtable = &sead__SafeStringBase__vtable;
      path.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = (char *)(v30 + 2);
      path.cstr = "DV_effect";
      v31 = sub_6018506C(&a2, &path);
      v32 = v31 < 0;
      LOWORD(v33) = -11988;
      if ( v31 >= 0 )
        LOBYTE(v31) = 1;
      HIWORD(v33) = 6;
      if ( !v32 )
      {
        *v170 = v17;
        *v28 = v31;
      }
      v171[v33] = 0;
      v34 = &v171[v33];
      v171[v33 + 128] = 0;
      v35 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*v22 + 20) + 40) + 16);
      a2.vtable = &sead__SafeStringBase__vtable;
      path.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = (char *)(v35 + 2);
      path.cstr = "sound";
      if ( sub_6018506C(&a2, &path) >= 0 )
        *v34 = 1;
      v171[4008] = 0;
      v36 = 32;
      v37 = v174;
      v38 = v173;
      do
      {
        *v38 = -1;
        *(v37 - 1) = -1;
        v38[1] = -1;
        *v37 = -1;
        v36 -= 2;
        v37 += 2;
        v38 += 2;
      }
      while ( v36 );
      ++v17;
      v18 = v174 + 32;
      v19 = v173 + 32;
    }
    while ( v17 < *v167 );
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "MarioMdl";
    v39 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
    a2.vtable = &sead__SafeStringBase__vtable;
    a2.cstr = "MH_model";
    Model2 = (void *)Resource_getModel2(v39, &a2, 1, 1, 1, 1, 0, 0, 0);
    v41 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v9 = v172;
    v42 = ModelWrapper_ctor(v41, Model2, 1, 1, 1, 1, 0);
    ModelWrapper_setup(v42, v39, 0, 0);
    v172[432295] = v41;
  }
  v43 = FIELD_U16(dword_60CC6D78, 109048);
  if ( (v43 & 0x7F) == 0xA )
    goto LABEL_43;
  if ( (v43 & 0x7F) == 0 )
  {
    v44 = FIELD_U8(dword_60CC6D8C, 16) == 0;
    if ( FIELD_U8(dword_60CC6D8C, 16) )
      v44 = FIELD_U8(dword_60CC6D8C, 17) == 0;
    if ( !v44 )
    {
LABEL_43:
      v45 = (v43 & 0x7F) == 0;
      v46 = operator_new(0xF0u);
      ModelResources_helper = PlayerStates_loadModelResources_helper(v46, v45);
      v9[432296] = ModelResources_helper;
      PlayerStates_loadModelResources_helper_28FE94(ModelResources_helper);
    }
  }
  v9[1098] = 0;
  v164 = v9 + 1098;
  v9[111755] = 0;
  v163 = v9 + 111755;
  if ( *v167 >= 1 )
  {
    v48 = 0;
    v165 = v9 + 431248;
    v166 = v9 + 111757;
    model = v9 + 1100;
    do
    {
      a2.cstr = (char *)v184;
      a2.vtable = &BufferedSafeStringBase_char_vtable_probably;
      v183 = 64;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&a2);
      v49 = &v9[v48];
      *a2.cstr = 0;
      a2.vtable = &off_60BD4BF0;
      v51 = v49[856];
      v50 = v49 + 856;
      a5 = *v165;
      sub_608FDDF4(
        (int)&a2,
        "%03d_%s_%03d",
        FIELD_U16(dword_60CC6D78, 109048) & 0x7F,
        *(_DWORD *)(*(_DWORD *)(FIELD_U32(v51, 20) + 40) + 16) + 2);
      v52 = *(_DWORD *)(*v50 + 20);
      (*((void (__fastcall **)(sead__SafeString *))a2.vtable + 3))(&a2);
      v53 = FIELD_U32(v52, 64);
      if ( !v53 )
        goto LABEL_70;
      if ( a2.cstr )
        v54 = strlen(a2.cstr);
      else
        v54 = 0;
      v55 = FIELD_U16(v53, 12);
      v57 = (int *)(v53 + 8 + 16 * v55);
      v56 = *v57;
      if ( FIELD_U32(v53, 8) < *v57 )
      {
        do
        {
          v58 = 0;
          if ( v54 > v56 >> 3 )
            v58 = ((unsigned __int8)a2.cstr[v54 + ~(v56 >> 3)] >> (v56 & 7)) & 1;
          v59 = *(_DWORD *)(v53 + 8 + 16 * v55);
          v55 = *(unsigned __int16 *)(v53 + 8 + 16 * v55 + 2 * v58 + 4);
          v57 = (int *)(v53 + 8 + 16 * v55);
          v56 = *v57;
        }
        while ( v59 < *v57 );
      }
      v60 = (unsigned __int16 *)v57[2];
      v61 = *v60;
      v62 = v61;
      if ( v54 < v61 )
        v62 = v54;
      if ( v62 )
      {
        v63 = memcmp(v60 + 1, a2.cstr, v62);
        v64 = 1;
        if ( v63 )
          v64 = v63;
        if ( v54 < v61 || v63 )
          goto LABEL_65;
      }
      else if ( v54 < v61 )
      {
        goto LABEL_70;
      }
      v64 = 0;
      if ( v61 < v54 )
        v64 = -1;
LABEL_65:
      if ( !v64 && (int)v57 - v53 - 24 >= 0 )
      {
        v65 = (int *)v172[855];
        if ( v172[854] > v48 )
          v65 += v48;
        sub_6040F4B8(*v65, (int)&a2, 0, 1.0, 0.0);
        *((_BYTE *)v172 + v48 + 4008) = 1;
      }
LABEL_70:
      v66 = *(_DWORD *)(*v50 + 20);
      (*((void (__fastcall **)(sead__SafeString *))a2.vtable + 3))(&a2);
      v67 = FIELD_U32(v66, 96);
      if ( v67 )
      {
        if ( a2.cstr )
          v68 = strlen(a2.cstr);
        else
          v68 = 0;
        v69 = FIELD_U16(v67, 12);
        v71 = (int *)(v67 + 8 + 16 * v69);
        v70 = *v71;
        if ( FIELD_U32(v67, 8) < *v71 )
        {
          do
          {
            v72 = 0;
            if ( v68 > v70 >> 3 )
              v72 = ((unsigned __int8)a2.cstr[v68 + ~(v70 >> 3)] >> (v70 & 7)) & 1;
            v73 = *(_DWORD *)(v67 + 8 + 16 * v69);
            v69 = *(unsigned __int16 *)(v67 + 8 + 16 * v69 + 2 * v72 + 4);
            v71 = (int *)(v67 + 8 + 16 * v69);
            v70 = *v71;
          }
          while ( v73 < *v71 );
        }
        v74 = (unsigned __int16 *)v71[2];
        v75 = *v74;
        v76 = v75;
        if ( v68 < v75 )
          v76 = v68;
        if ( v76 )
        {
          v77 = memcmp(v74 + 1, a2.cstr, v76);
          if ( v68 >= v75 && !v77 )
          {
LABEL_85:
            v78 = 0;
            if ( v75 < v68 )
              v78 = -1;
            if ( !v78 && (int)v71 - v67 - 24 >= 0 )
            {
              v79 = v172[855];
              if ( v172[854] > v48 )
                v79 += 4 * v48;
              sub_6045195C(**(_DWORD **)(*(_DWORD *)v79 + 36), *v50, (const char **)&a2);
              v80 = v172[855];
              if ( v172[854] > v48 )
                v80 += 4 * v48;
              AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v80 + 36) + 4), 0);
              v81 = v172[855];
              if ( v172[854] > v48 )
                v81 += 4 * v48;
              v82 = **(_DWORD **)(*(_DWORD *)v81 + 36);
              FIELD_U32(v82, 20) = 0;
              FIELD_U32(v82, 28) |= 2u;
              v83 = v172[855];
              if ( v172[854] > v48 )
                v83 += 4 * v48;
              *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v83 + 36) + 24) = 1065353216;
              v84 = v172[855];
              if ( v172[854] > v48 )
                v84 += 4 * v48;
              sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v84 + 36) + 4));
            }
          }
        }
        else if ( v68 >= v75 )
        {
          goto LABEL_85;
        }
      }
      v9 = v172;
      if ( sub_6043ADF8(*v50, &a2) >= 0 )
      {
        v85 = v172[855];
        if ( v172[854] > v48 )
          v85 += 4 * v48;
        TexAnim_play(**(_DWORD **)(*(_DWORD *)v85 + 20), *v50, &a2);
        v86 = v172[855];
        if ( v172[854] > v48 )
          v86 += 4 * v48;
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v86 + 20) + 4), 0);
        v87 = v172[855];
        if ( v172[854] > v48 )
          v87 += 4 * v48;
        v88 = **(_DWORD **)(*(_DWORD *)v87 + 20);
        FIELD_U32(v88, 20) = 0;
        FIELD_U32(v88, 28) |= 2u;
        v89 = v172[855];
        if ( v172[854] > v48 )
          v89 += 4 * v48;
        *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v89 + 20) + 24) = 1065353216;
        v90 = v172[855];
        if ( v172[854] > v48 )
          v90 += 4 * v48;
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v90 + 20) + 4));
      }
      if ( sub_6043AED0(*v50, &a2) >= 0 )
      {
        v91 = v172[855];
        if ( v172[854] > v48 )
          v91 += 4 * v48;
        sub_60446088(**(_DWORD **)(*(_DWORD *)v91 + 28), *v50, &a2);
        v92 = v172[855];
        if ( v172[854] > v48 )
          v92 += 4 * v48;
        AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v92 + 28) + 4), 0);
        v93 = v172[855];
        if ( v172[854] > v48 )
          v93 += 4 * v48;
        v94 = **(_DWORD **)(*(_DWORD *)v93 + 28);
        FIELD_U32(v94, 20) = 0;
        FIELD_U32(v94, 28) |= 2u;
        v95 = v172[855];
        if ( v172[854] > v48 )
          v95 += 4 * v48;
        *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v95 + 28) + 24) = 1065353216;
        v96 = v172[855];
        if ( v172[854] > v48 )
          v96 += 4 * v48;
        sub_6041838C((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v96 + 28) + 4));
      }
      v97 = (char *)v172 + v48;
      v98 = (char *)v172 + v48 + 4008;
      if ( *v98 )
      {
        if ( !v97[4136] )
          goto LABEL_189;
        v99 = (int **)v172[855];
        if ( v172[854] > v48 )
          v99 += v48;
        v100 = **v99;
        *v98 = 0;
        v97[4264] = 1;
        if ( v100 )
        {
          v101 = (*(int (__fastcall **)(int))(*(_DWORD *)v100 + 92))(v100);
          *v164 = v101;
          if ( v101 >= 2 )
          {
            v102 = model;
            v103 = 1;
            do
            {
              path.cstr = (char *)v179;
              path.vtable = &BufferedSafeStringBase_char_vtable_probably;
              v178 = 16;
              sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
              *path.cstr = 0;
              path.vtable = &off_60BD54D4;
              v104 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v100 + 88))(v100, v103);
              sub_608FDDF4((int)&path, "%s", v104 + 3);
              cstr = &byte_60B3BA34;
              if ( (int)v178 > 0 )
                cstr = path.cstr;
              nptr[0] = *cstr;
              v106 = &byte_60B3BA34;
              if ( (int)v178 > 1 )
                v106 = path.cstr + 1;
              v107 = &byte_60B3BA34;
              v108 = *v106;
              if ( (int)v178 > 2 )
                v107 = path.cstr + 2;
              nptr[1] = v108;
              nptr[2] = *v107;
              nptr[3] = 0;
              *v102++ = atoi(nptr);
              ++v103;
            }
            while ( v103 < *v164 );
          }
        }
        v98 = (char *)v172 + v48 + 4008;
        v9 = v172;
        v97 = (char *)v172 + v48;
        if ( *v98 )
        {
LABEL_189:
          if ( v97[446764] )
          {
            v109 = (int **)v9[855];
            if ( v9[854] > v48 )
              v109 += v48;
            v110 = **v109;
            *v98 = 0;
            v97[446892] = 1;
            if ( v110 )
            {
              v111 = (*(int (__fastcall **)(int))(*(_DWORD *)v110 + 92))(v110);
              *v163 = v111;
              if ( v111 >= 2 )
              {
                v112 = v166;
                v113 = 1;
                do
                {
                  path.cstr = (char *)v179;
                  path.vtable = &BufferedSafeStringBase_char_vtable_probably;
                  v178 = 16;
                  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&path);
                  *path.cstr = 0;
                  path.vtable = &off_60BD54D4;
                  v114 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v110 + 88))(v110, v113);
                  sub_608FDDF4((int)&path, "%s", v114 + 3);
                  v115 = &byte_60B3BA34;
                  if ( (int)v178 > 0 )
                    v115 = path.cstr;
                  nptr[0] = *v115;
                  v116 = &byte_60B3BA34;
                  if ( (int)v178 > 1 )
                    v116 = path.cstr + 1;
                  v117 = &byte_60B3BA34;
                  v118 = *v116;
                  if ( (int)v178 > 2 )
                    v117 = path.cstr + 2;
                  nptr[1] = v118;
                  nptr[2] = *v117;
                  nptr[3] = 0;
                  *v112++ = atoi(nptr);
                  ++v113;
                }
                while ( v113 < *v163 );
              }
            }
            v9 = v172;
          }
        }
      }
      ++v48;
      v166 += 32;
      model += 32;
    }
    while ( (int)v48 < *v167 );
  }
  a2.vtable = &sead__SafeStringBase__vtable;
  path.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "demo";
  path.cstr = "Camera.bfres";
  v119 = (nn__util__BinaryFileHeader *)sub_608226EC(ArchiveManagerMaybe_instance, &a2, &path, 0);
  v9[431250] = sub_6086EDAC(v119);
  v120 = v9 + 431250;
  sub_6090B310(dword_60CCF464);
  sub_6086EED0(v9[431250], FIELD_U32(dword_60CCFC8C, 24));
  sub_6090B32C(dword_60CCF464);
  v121 = "010_Camera_010";
  if ( (FIELD_U16(dword_60CC6D78, 109048) & 0x7F) == 0 )
    v121 = "000_Camera_010";
  v122 = *(_DWORD *)(*v120 + 120) + 104 * sub_607E73D4(*v120, v121);
  v124 = FIELD_U32(v122, 32);
  v123 = (unsigned __int16 *)(v122 + 32);
  v9[431252] = v124;
  CurrentHeap_const = (void *)sead__HeapMgr__getCurrentHeap_const(sead__HeapMgr__sInstance);
  v126 = (_DWORD *)operator_new_8DE25C(0x40u, CurrentHeap_const, 16);
  v127 = v9 + 431251;
  v126[4] = 0;
  v126[3] = 0;
  v126[2] = 0;
  v126[5] = 1065353216;
  v126[6] = dword_6086A208;
  v126[13] = 0;
  v126[12] = 0;
  v126[11] = 0;
  v126[10] = 0;
  v126[9] = 0;
  v126[8] = 0;
  v126[7] = 0;
  v126[1] = v126 + 2;
  v126[14] = 0;
  *v126 = &off_60C5A7FC;
  v126[15] = 0;
  v9[431251] = v126;
  LOBYTE(a2.cstr) = 1;
  v183 = 0;
  v184[0] = 0;
  v184[1] = 0;
  v184[2] = 8;
  v184[3] = 0;
  v184[4] = -1;
  v184[5] = 0;
  v184[6] = 8;
  v184[7] = 0;
  v184[8] = -1;
  v128 = v9[431252];
  v129 = FIELD_U8(v128, 64);
  a2.vtable = (void *)v129;
  v130 = (FIELD_U8(v128, 56) & 1) == 0;
  BYTE1(a2.cstr) = v130;
  v131 = v123[33];
  if ( v123[33] )
  {
    v132 = (unsigned __int8 *)(*(_DWORD *)v123 + 64);
    do
    {
      if ( v129 < *v132 )
        v129 = *v132;
      v133 = *((_WORD *)v132 - 4);
      v132 += 72;
      --v131;
      v130 |= (v133 & 1) == 0;
    }
    while ( v131 );
    a2.vtable = (void *)v129;
    BYTE1(a2.cstr) = v130;
  }
  PlayerStates_loadModelResources_helper_872A2C(&a2);
  v134 = v183;
  v135 = operator_new_8DE09C(v183);
  PlayerStates_loadModelResources_helper_872AC4(*v127, &a2, v135, v134, a5, a6, a7);
  sub_60872B54(*v127, v9[431252]);
  v136 = "010_dvCamera_010";
  if ( (FIELD_U16(dword_60CC6D78, 109048) & 0x7F) == 0 )
    v136 = "000_dvCamera_010";
  v137 = *(_DWORD *)(*v120 + 120) + 104 * sub_607E73D4(*v120, v136);
  v139 = FIELD_U32(v137, 32);
  v138 = (unsigned __int16 *)(v137 + 32);
  v172[431270] = v139;
  v140 = (_DWORD *)operator_new_8DE25C(0x40u, CurrentHeap_const, 16);
  v141 = v172 + 431269;
  v140[4] = 0;
  v140[3] = 0;
  v140[2] = 0;
  v140[5] = 1065353216;
  v140[6] = dword_6086A208;
  v140[13] = 0;
  v140[12] = 0;
  v140[11] = 0;
  v140[10] = 0;
  v140[9] = 0;
  v140[8] = 0;
  v140[7] = 0;
  v140[1] = v140 + 2;
  v140[14] = 0;
  *v140 = &off_60C5A7FC;
  v140[15] = 0;
  v172[431269] = v140;
  LOBYTE(path.cstr) = 1;
  v178 = 0;
  v179[0] = 0;
  v179[1] = 0;
  v179[2] = 8;
  v179[3] = 0;
  v179[4] = -1;
  v179[5] = 0;
  v179[6] = 8;
  v179[7] = 0;
  v179[8] = -1;
  v142 = v172[431270];
  v143 = FIELD_U8(v142, 64);
  path.vtable = (void *)v143;
  v144 = (FIELD_U8(v142, 56) & 1) == 0;
  BYTE1(path.cstr) = v144;
  v145 = v138[33];
  if ( v138[33] )
  {
    v146 = (unsigned __int8 *)(*(_DWORD *)v138 + 64);
    do
    {
      if ( v143 < *v146 )
        v143 = *v146;
      v147 = *((_WORD *)v146 - 4);
      v146 += 72;
      --v145;
      v144 |= (v147 & 1) == 0;
    }
    while ( v145 );
    path.vtable = (void *)v143;
    BYTE1(path.cstr) = v144;
  }
  PlayerStates_loadModelResources_helper_872A2C(&path);
  v148 = v178;
  v149 = operator_new_8DE09C(v178);
  PlayerStates_loadModelResources_helper_872AC4(*v141, &path, v149, v148, a5a, a6a, a7a);
  sub_60872B54(*v141, v172[431270]);
  v172[431246] = 0;
  v172[431247] = 0;
  v172[431249] = 1065353216;
  if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) != 0 )
  {
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko";
    v172[432282] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_e1_fog";
    v172[432285] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko";
    v172[432288] = s_bagllmap_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_e2_fog";
    v172[432286] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_e3_fog";
    v150 = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    LOWORD(v151) = 25212;
  }
  else
  {
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko";
    v172[432282] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_fog";
    v172[432285] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko";
    v172[432288] = s_bagllmap_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Castle";
    v172[432283] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Castle_fog";
    v172[432286] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Castle";
    v172[432289] = s_bagllmap_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Isiyama";
    v172[432284] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Isiyama_fog";
    v172[432287] = s_baglenv_ref(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Isiyama";
    v150 = s_bagllmap_ref(dword_60C9BAFC, (int *)nptr);
    LOWORD(v151) = 25224;
  }
  HIWORD(v151) = 26;
  *(_DWORD *)((char *)v172 + v151) = v150;
  if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) != 0 )
  {
    sub_60426C24((_DWORD *)dword_60C9BBD4, v172[432282]);
    v152 = v172[432288];
  }
  else
  {
    sub_60426C24((_DWORD *)dword_60C9BBD4, v172[432283]);
    v152 = v172[432289];
  }
  sub_60426E38(dword_60C9BBD4, v152);
  if ( (FIELD_U8(dword_60CC6D78, 109048) & 0x7F) != 0 )
  {
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_e1";
    v172[432291] = PlayerStates_loadModelResources_helper_4210B8(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_e2";
    v172[432292] = PlayerStates_loadModelResources_helper_4210B8(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko_e3";
    v172[432293] = PlayerStates_loadModelResources_helper_4210B8(dword_60C9BAFC, (int *)nptr);
    sub_60951E50(&v175);
    sub_60947118(v162, v175);
    if ( (*(_BYTE *)(FIELD_U32(dword_60CC6E04, 40)
                   + 520 * *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7)
                   + 50)
        & 1) != 0
      || FIELD_U8(dword_60CC6D78, 109051) )
    {
      v153 = operator_new(0xDE0u);
      v154 = sub_6054CFE8(v153);
      v172[984] = v154;
    }
    else
    {
      v154 = v172[984];
      if ( !v154 )
        return sub_600240A4();
    }
    sub_6054D0C8(v154);
  }
  else
  {
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Kinoko";
    v172[432291] = PlayerStates_loadModelResources_helper_4210B8(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Castle";
    v172[432292] = PlayerStates_loadModelResources_helper_4210B8(dword_60C9BAFC, (int *)nptr);
    *(_DWORD *)nptr = &sead__SafeStringBase__vtable;
    v181 = "demo_Isiyama";
    v172[432293] = PlayerStates_loadModelResources_helper_4210B8(dword_60C9BAFC, (int *)nptr);
    sub_60951E50(&v176);
    sub_60947118(v162, v176);
  }
  return sub_600240A4();
}

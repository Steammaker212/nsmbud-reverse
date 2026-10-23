/* sub_60721780
 * address: 0x60721780   size: 3156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60721780(int a1, int a2)
{
  int v3; // r5
  int v4; // r6
  int v5; // r4
  int Resource; // r7
  int v7; // r9
  int v8; // r4
  _WORD *v9; // r6
  int v10; // r9
  int v11; // r8
  int v12; // r10
  int v13; // r3
  int v14; // r4
  int v15; // r5
  int v16; // r7
  int v17; // r3
  int v18; // r4
  int v19; // r5
  int v20; // r7
  int v21; // r3
  int v22; // r4
  int v23; // r5
  int v24; // r7
  __int16 v25; // r2
  unsigned int *v26; // r0
  unsigned int v27; // r1
  unsigned int v28; // r1
  unsigned int v29; // r1
  _DWORD *v30; // r4
  int v31; // r5
  int v32; // r6
  int v33; // r5
  int v34; // r5
  int v35; // r6
  int v36; // r5
  int v37; // r5
  int v38; // r6
  int v39; // r5
  int v40; // r9
  int v41; // r5
  int v42; // r6
  int v43; // r5
  int v44; // r4
  int v45; // r5
  int v46; // r4
  _DWORD *v47; // r4
  const char *v48; // r5
  int v49; // r1
  const char *v50; // r6
  int v51; // r1
  int v52; // r2
  int v53; // r5
  const char *v54; // r5
  int v55; // r1
  int v56; // r2
  char *v57; // r0
  int i; // r1
  char *v59; // r0
  int v60; // r2
  int v61; // r4
  int v62; // r5
  int v63; // r4
  int v64; // r7
  int j; // r5
  _DWORD *v66; // r4
  int v67; // r4
  int v68; // r9
  int v69; // r4
  _WORD *v70; // r6
  int v71; // r9
  int v72; // r8
  int v73; // r10
  int v74; // r3
  int v75; // r4
  int v76; // r5
  int v77; // r7
  int v78; // r3
  int v79; // r4
  int v80; // r5
  int v81; // r7
  int v82; // r3
  int v83; // r4
  int v84; // r5
  int v85; // r7
  __int16 v86; // r2
  unsigned int *v87; // r0
  unsigned int v88; // r1
  unsigned int v89; // r1
  unsigned int v90; // r1
  int v92; // [sp+4h] [bp-9Ch]
  int v93; // [sp+18h] [bp-88h]
  int (**v95)(); // [sp+20h] [bp-80h] BYREF
  const char *v96; // [sp+24h] [bp-7Ch]
  int v97; // [sp+28h] [bp-78h]
  int v98; // [sp+2Ch] [bp-74h] BYREF
  int (**v99)(); // [sp+6Ch] [bp-34h] BYREF
  const char *v100; // [sp+70h] [bp-30h]
  int (**v101)(); // [sp+74h] [bp-2Ch] BYREF
  const char *v102; // [sp+78h] [bp-28h]

  v3 = 0;
  v95 = &sead__SafeStringBase__vtable;
  v96 = "BgTexMgr";
  nullsub_123(a1 + 5456, 1, &v95, 0);
  v4 = a1 + 24;
  v92 = a1;
  v93 = TilesetMgr_instance;
  do
  {
    v5 = sub_6071B22C(v93, a2, v3);
    if ( **(_BYTE **)(v5 + 4) )
    {
      Resource = LoadResource(ResourceMgrRelated_instance, (_DWORD *)v5);
      v7 = FIELD_U32(Resource, 20);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      sub_609183B4(v7, *(const char **)(v5 + 4));
      v8 = sub_609184C4(FIELD_U32(Resource, 20));
      sub_6090B310(dword_60CCF464);
      sub_60959954(v4, v8);
      sub_6090B32C(dword_60CCF464);
    }
    ++v3;
    v4 += 272;
  }
  while ( v3 != 4 );
  v9 = (_WORD *)(v92 + 2484);
  v10 = FIELD_U16(v92, 2484);
  v11 = FIELD_U8(v92, 2486);
  v12 = v92 + 2208;
  v13 = FIELD_U32(v92, 28);
  v14 = FIELD_U32(v92, 32);
  v15 = FIELD_U32(v92, 36);
  v16 = FIELD_U32(v92, 40);
  FIELD_U32(v92, 2208) = FIELD_U32(v92, 24);
  FIELD_U32(v92, 2212) = v13;
  FIELD_U32(v92, 2216) = v14;
  FIELD_U32(v92, 2220) = v15;
  FIELD_U32(v92, 2224) = v16;
  v17 = FIELD_U32(v92, 48);
  v18 = FIELD_U32(v92, 52);
  v19 = FIELD_U32(v92, 56);
  v20 = FIELD_U32(v92, 60);
  FIELD_U32(v92, 2228) = FIELD_U32(v92, 44);
  FIELD_U32(v92, 2232) = v17;
  FIELD_U32(v92, 2236) = v18;
  FIELD_U32(v92, 2240) = v19;
  FIELD_U32(v92, 2244) = v20;
  v21 = FIELD_U32(v92, 68);
  v22 = FIELD_U32(v92, 72);
  v23 = FIELD_U32(v92, 76);
  v24 = FIELD_U32(v92, 80);
  FIELD_U32(v92, 2248) = FIELD_U32(v92, 64);
  FIELD_U32(v92, 2252) = v21;
  FIELD_U32(v92, 2256) = v22;
  FIELD_U32(v92, 2260) = v23;
  FIELD_U32(v92, 2264) = v24;
  v25 = FIELD_U16(v92, 84);
  FIELD_U8(v92, 2270) = FIELD_U8(v92, 86);
  FIELD_U16(v92, 2268) = v25;
  sub_60917754(v92 + 2272, v92 + 88);
  FIELD_U32(v92, 2472) = FIELD_U32(v92, 288);
  v26 = (unsigned int *)(v92 + 2480);
  do
    v27 = __ldrex(v26);
  while ( __strex(v27 | 4, v26) );
  if ( (unsigned __int16)*v9 != v10 )
  {
    do
      v28 = __ldrex(v26);
    while ( __strex(v28 | 2, v26) );
    *v9 = v10;
  }
  if ( FIELD_U8(v92, 2486) != v11 )
  {
    do
      v29 = __ldrex(v26);
    while ( __strex(v29 | 1, v26) );
    FIELD_U8(v92, 2486) = v11;
  }
  sub_6091AC94(v12);
  FIELD_U32(v92, 2932) = v12;
  v30 = (_DWORD *)sub_6071B22C(v93, a2, 0);
  v31 = LoadResource(ResourceMgrRelated_instance, v30);
  v32 = FIELD_U32(v31, 20);
  (*(void (__fastcall **)(int *))(dword_60CBD860 + 12))(&dword_60CBD860);
  sub_609183B4(v32, (const char *)dword_60CBD864);
  v33 = sub_609184C4(FIELD_U32(v31, 20));
  sub_6090B310(dword_60CCF464);
  sub_60959954(v92 + 3640, v33);
  sub_6090B32C(dword_60CCF464);
  v34 = LoadResource(ResourceMgrRelated_instance, v30);
  v35 = FIELD_U32(v34, 20);
  (*(void (__fastcall **)(int *))(dword_60CBD868 + 12))(&dword_60CBD868);
  sub_609183B4(v35, (const char *)dword_60CBD86C);
  v36 = sub_609184C4(FIELD_U32(v34, 20));
  sub_6090B310(dword_60CCF464);
  sub_60959954(v92 + 3912, v36);
  sub_6090B32C(dword_60CCF464);
  v37 = LoadResource(ResourceMgrRelated_instance, v30);
  v38 = FIELD_U32(v37, 20);
  (*(void (__fastcall **)(int *))(dword_60CBD870 + 12))(&dword_60CBD870);
  sub_609183B4(v38, (const char *)dword_60CBD874);
  v39 = sub_609184C4(FIELD_U32(v37, 20));
  sub_6090B310(dword_60CCF464);
  sub_60959954(v92 + 4184, v39);
  sub_6090B32C(dword_60CCF464);
  v40 = 1;
  FIELD_U8(v92, 5272) = 1;
  FIELD_U8(v92, 5273) = 0;
  FIELD_U32(v92, 5276) = &unk_60B09ECC;
  FIELD_U32(v92, 5280) = 16;
  FIELD_U32(v92, 5284) = 0;
  FIELD_U32(v92, 5288) = 0;
  FIELD_U8(v92, 5292) = 1;
  FIELD_U8(v92, 5293) = 0;
  FIELD_U32(v92, 5296) = &unk_60B09F0C;
  FIELD_U32(v92, 5300) = 16;
  FIELD_U32(v92, 5304) = 0;
  FIELD_U32(v92, 5308) = 0;
  FIELD_U8(v92, 5312) = 1;
  FIELD_U8(v92, 5313) = 0;
  FIELD_U32(v92, 5316) = &unk_60B09F4C;
  FIELD_U32(v92, 5320) = 8;
  FIELD_U32(v92, 5324) = 0;
  FIELD_U32(v92, 5328) = 0;
  v41 = LoadResource(ResourceMgrRelated_instance, v30);
  v42 = FIELD_U32(v41, 20);
  (*(void (__fastcall **)(int *))(dword_60CBD880 + 12))(&dword_60CBD880);
  sub_609183B4(v42, (const char *)dword_60CBD884);
  v43 = sub_609184C4(FIELD_U32(v41, 20));
  sub_6090B310(dword_60CCF464);
  sub_60959954(v92 + 4728, v43);
  sub_6090B32C(dword_60CCF464);
  v44 = LoadResource(ResourceMgrRelated_instance, v30);
  v45 = FIELD_U32(v44, 20);
  (*(void (__fastcall **)(int *))(dword_60CBD888 + 12))(&dword_60CBD888);
  sub_609183B4(v45, (const char *)dword_60CBD88C);
  v46 = sub_609184C4(FIELD_U32(v44, 20));
  sub_6090B310(dword_60CCF464);
  sub_60959954(v92 + 5000, v46);
  sub_6090B32C(dword_60CCF464);
  FIELD_U16(v92, 5412) = 1;
  FIELD_U32(v92, 5416) = &unk_60B09ECC;
  FIELD_U32(v92, 5420) = 16;
  FIELD_U32(v92, 5424) = 0;
  FIELD_U32(v92, 5428) = 0;
  FIELD_U16(v92, 5432) = 1;
  FIELD_U32(v92, 5436) = &unk_60B09F0C;
  FIELD_U32(v92, 5440) = 16;
  FIELD_U32(v92, 5444) = 0;
  FIELD_U32(v92, 5448) = 0;
  v47 = (_DWORD *)sub_6071B22C(v93, a2, 0);
  v95 = &sead__SafeStringBase__vtable;
  v96 = "Pa0_jyotyu";
  (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
  (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
  v48 = (const char *)v47[1];
  ((void (__fastcall *)(int (***)()))v95[3])(&v95);
  if ( v48 == v96 )
  {
LABEL_31:
    FIELD_U32(v92, 5452) = 1;
LABEL_55:
    v61 = LoadResource(ResourceMgrRelated_instance, v47);
    v62 = FIELD_U32(v61, 20);
    (*(void (__fastcall **)(int *))(dword_60CBD878 + 12))(&dword_60CBD878);
    sub_609183B4(v62, (const char *)dword_60CBD87C);
    v63 = sub_609184C4(FIELD_U32(v61, 20));
    sub_6090B310(dword_60CCF464);
    sub_60959954(v92 + 4456, v63);
    sub_6090B32C(dword_60CCF464);
    FIELD_U8(v92, 5332) = 1;
    FIELD_U8(v92, 5333) = 0;
    FIELD_U32(v92, 5336) = &unk_60B09F6C;
    FIELD_U32(v92, 5340) = 8;
    FIELD_U32(v92, 5344) = 0;
    FIELD_U32(v92, 5348) = 0;
    FIELD_U8(v92, 5352) = 1;
    FIELD_U8(v92, 5353) = 1;
    FIELD_U32(v92, 5356) = &unk_60B09F6C;
    FIELD_U32(v92, 5360) = 8;
    FIELD_U32(v92, 5364) = 0;
    FIELD_U32(v92, 5368) = 0;
    FIELD_U8(v92, 5372) = 1;
    FIELD_U8(v92, 5373) = 0;
    FIELD_U32(v92, 5376) = &unk_60B09F8C;
    FIELD_U32(v92, 5380) = 8;
    FIELD_U32(v92, 5384) = 0;
    FIELD_U32(v92, 5388) = 0;
    FIELD_U8(v92, 5392) = 1;
    FIELD_U8(v92, 5393) = 1;
    FIELD_U32(v92, 5396) = &unk_60B09F8C;
    FIELD_U32(v92, 5400) = 8;
    FIELD_U32(v92, 5404) = 0;
    FIELD_U32(v92, 5408) = 0;
    goto LABEL_56;
  }
  v49 = v47[1];
  while ( *(unsigned __int8 *)(v49 + v40 - 1) == (unsigned __int8)v96[v40 - 1] )
  {
    if ( !*(_BYTE *)(v49 + v40 - 1) )
      goto LABEL_31;
    if ( v40 >= 524289 || *(unsigned __int8 *)(v49 + v40) != (unsigned __int8)v96[v40] )
      break;
    if ( !*(_BYTE *)(v49 + v40) )
      goto LABEL_31;
    v40 += 2;
  }
  v101 = &sead__SafeStringBase__vtable;
  v102 = "Pa0_jyotyu_chika";
  (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
  (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
  v50 = (const char *)v47[1];
  ((void (__fastcall *)(int (***)()))v101[3])(&v101);
  if ( v50 == v102 )
  {
    v53 = 1;
  }
  else
  {
    v51 = v47[1];
    v52 = 1;
    v53 = 1;
    while ( *(unsigned __int8 *)(v51 + v52 - 1) == (unsigned __int8)v102[v52 - 1] )
    {
      if ( !*(_BYTE *)(v51 + v52 - 1) )
        goto LABEL_54;
      if ( v52 >= 524289 || *(unsigned __int8 *)(v51 + v52) != (unsigned __int8)v102[v52] )
        break;
      if ( !*(_BYTE *)(v51 + v52) )
        goto LABEL_54;
      v52 += 2;
    }
    v99 = &sead__SafeStringBase__vtable;
    v100 = "Pa0_jyotyu_setsugen";
    (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
    (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
    v54 = (const char *)v47[1];
    ((void (__fastcall *)(int (***)()))v99[3])(&v99);
    if ( v54 == v100 )
    {
      v53 = 1;
    }
    else
    {
      v55 = v47[1];
      v56 = 1;
      v53 = 1;
      while ( *(unsigned __int8 *)(v55 + v56 - 1) == (unsigned __int8)v100[v56 - 1] )
      {
        if ( !*(_BYTE *)(v55 + v56 - 1) )
          goto LABEL_54;
        if ( v56 >= 524289 || *(unsigned __int8 *)(v55 + v56) != (unsigned __int8)v100[v56] )
          break;
        if ( !*(_BYTE *)(v55 + v56) )
          goto LABEL_54;
        v56 += 2;
      }
      (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
      (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
      v57 = (char *)v47[1];
      v53 = 1;
      if ( v57 != "Pa0_jyotyu_yougan" )
      {
        for ( i = 0; i < 524289; ++i )
        {
          if ( v57[i] != aPa0JyotyuYouga[i] )
            break;
          if ( !v57[i] )
            goto LABEL_54;
        }
        (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
        (*(void (__fastcall **)(_DWORD *))(*v47 + 12))(v47);
        v59 = (char *)v47[1];
        if ( v59 != "Pa0_jyotyu_yougan2" )
        {
          v60 = 0;
          while ( v59[v60] == aPa0JyotyuYouga_0[v60] )
          {
            if ( !v59[v60] )
              goto LABEL_54;
            if ( ++v60 >= 524289 )
            {
              v53 = 0;
              goto LABEL_54;
            }
          }
          v53 = 0;
        }
      }
    }
  }
LABEL_54:
  FIELD_U32(v92, 5452) = v53;
  if ( v53 )
    goto LABEL_55;
LABEL_56:
  v64 = v92 + 1120;
  for ( j = 0; j != 4; ++j )
  {
    v66 = (_DWORD *)sub_6071B22C(v93, a2, j);
    if ( *(_BYTE *)v66[1] )
    {
      v96 = (const char *)&v98;
      v95 = &BufferedSafeStringBase_char_vtable_probably;
      v97 = 64;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v95);
      *v96 = 0;
      v95 = &off_60BD4BF0;
      (*(void (__fastcall **)(_DWORD *))(*v66 + 12))(v66);
      sub_608FDDF4((int)&v95, "%s_nml", v66[1]);
      v67 = LoadResource(ResourceMgrRelated_instance, v66);
      v68 = FIELD_U32(v67, 20);
      ((void (__fastcall *)(int (***)()))v95[3])(&v95);
      sub_609183B4(v68, v96);
      v69 = sub_609184C4(FIELD_U32(v67, 20));
      sub_6090B310(dword_60CCF464);
      sub_60959954(v64, v69);
      sub_6090B32C(dword_60CCF464);
    }
    v64 += 272;
  }
  v70 = (_WORD *)(v92 + 3244);
  v71 = FIELD_U16(v92, 3244);
  v72 = FIELD_U8(v92, 3246);
  v73 = v92 + 2968;
  v74 = FIELD_U32(v92, 1124);
  v75 = FIELD_U32(v92, 1128);
  v76 = FIELD_U32(v92, 1132);
  v77 = FIELD_U32(v92, 1136);
  FIELD_U32(v92, 2968) = FIELD_U32(v92, 1120);
  FIELD_U32(v92, 2972) = v74;
  FIELD_U32(v92, 2976) = v75;
  FIELD_U32(v92, 2980) = v76;
  FIELD_U32(v92, 2984) = v77;
  v78 = FIELD_U32(v92, 1144);
  v79 = FIELD_U32(v92, 1148);
  v80 = FIELD_U32(v92, 1152);
  v81 = FIELD_U32(v92, 1156);
  FIELD_U32(v92, 2988) = FIELD_U32(v92, 1140);
  FIELD_U32(v92, 2992) = v78;
  FIELD_U32(v92, 2996) = v79;
  FIELD_U32(v92, 3000) = v80;
  FIELD_U32(v92, 3004) = v81;
  v82 = FIELD_U32(v92, 1164);
  v83 = FIELD_U32(v92, 1168);
  v84 = FIELD_U32(v92, 1172);
  v85 = FIELD_U32(v92, 1176);
  FIELD_U32(v92, 3008) = FIELD_U32(v92, 1160);
  FIELD_U32(v92, 3012) = v82;
  FIELD_U32(v92, 3016) = v83;
  FIELD_U32(v92, 3020) = v84;
  FIELD_U32(v92, 3024) = v85;
  v86 = FIELD_U16(v92, 1180);
  FIELD_U8(v92, 3030) = FIELD_U8(v92, 1182);
  FIELD_U16(v92, 3028) = v86;
  sub_60917754(v92 + 3032, v92 + 1184);
  FIELD_U32(v92, 3232) = FIELD_U32(v92, 1384);
  v87 = (unsigned int *)(v92 + 3240);
  do
    v88 = __ldrex(v87);
  while ( __strex(v88 | 4, v87) );
  if ( (unsigned __int16)*v70 != v71 )
  {
    do
      v89 = __ldrex(v87);
    while ( __strex(v89 | 2, v87) );
    *v70 = v71;
  }
  if ( FIELD_U8(v92, 3246) != v72 )
  {
    do
      v90 = __ldrex(v87);
    while ( __strex(v90 | 1, v87) );
    FIELD_U8(v92, 3246) = v72;
  }
  sub_6091AC94(v73);
  FIELD_U32(v92, 3340) = v73;
  sub_6090C9A0(v92 + 3376);
  FIELD_U32(v92, 3524) = 0;
  FIELD_U32(v92, 3528) = 1176256512;
  FIELD_U8(v92, 3380) = 1;
  FIELD_U32(v92, 3616) = 0;
  FIELD_U32(v92, 3612) = 0;
  FIELD_U32(v92, 3608) = 0;
  FIELD_U32(v92, 3604) = 0;
  FIELD_U32(v92, 3600) = 0;
  FIELD_U32(v92, 3620) = -1082130432;
  FIELD_U32(v92, 3624) = 0;
  FIELD_U32(v92, 3628) = 1065353216;
  FIELD_U32(v92, 3632) = 0;
  return (*(int (__fastcall **)(int, int))(FIELD_U32(v92, 3548) + 16))(v92 + 3548, v92 + 3552);
}

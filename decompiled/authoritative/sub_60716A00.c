int __fastcall sub_60716A00(int a1)
{
  int v1; // r11
  int v2; // r9
  _BYTE *v3; // r0
  int v4; // r3
  int v5; // r8
  int v6; // r10
  int v7; // r3
  int v8; // r4
  int v9; // r6
  int v10; // r7
  int v11; // r3
  int v12; // r4
  int v13; // r6
  int v14; // r7
  int v15; // r3
  int v16; // r4
  int v17; // r6
  int v18; // r7
  __int16 v19; // r2
  int v20; // r3
  int v21; // r5
  int v22; // r6
  int v23; // r7
  int v24; // r3
  int v25; // r5
  int v26; // r6
  int v27; // r7
  int v28; // r3
  int v29; // r5
  int v30; // r6
  int v31; // r7
  __int16 v32; // r2
  char *v33; // r0
  int v34; // r8
  int v35; // r11
  int v36; // r10
  _DWORD *v37; // r3
  int v38; // r4
  int v39; // r6
  int v40; // r9
  char *v41; // r0
  int v42; // r6
  char *v43; // r0
  int v45; // [sp+4h] [bp-74h]
  int v46; // [sp+24h] [bp-54h]
  int v47; // [sp+28h] [bp-50h]
  int v48; // [sp+28h] [bp-50h]
  int v49; // [sp+28h] [bp-50h]
  int v50; // [sp+2Ch] [bp-4Ch]
  int v51; // [sp+2Ch] [bp-4Ch]
  int v52; // [sp+2Ch] [bp-4Ch]
  int v53; // [sp+30h] [bp-48h]
  int v54; // [sp+30h] [bp-48h]
  int v55; // [sp+30h] [bp-48h]
  int v56; // [sp+34h] [bp-44h]
  int v57; // [sp+34h] [bp-44h]
  int v58; // [sp+34h] [bp-44h]
  int v59; // [sp+34h] [bp-44h]
  int v60; // [sp+38h] [bp-40h]
  int v61; // [sp+38h] [bp-40h]
  int v62; // [sp+38h] [bp-40h]
  int v63; // [sp+3Ch] [bp-3Ch]
  int v64; // [sp+3Ch] [bp-3Ch]
  int v65; // [sp+3Ch] [bp-3Ch]
  int v66; // [sp+3Ch] [bp-3Ch]
  _DWORD *v67; // [sp+40h] [bp-38h]
  sead__SafeString path; // [sp+44h] [bp-34h] BYREF
  sead__SafeString identifier; // [sp+4Ch] [bp-2Ch] BYREF

  v1 = a1 + 16280;
  v2 = 1;
  *(_DWORD *)(a1 + 29048) = 0;
  v67 = (_DWORD *)(a1 + 29048);
  *(_BYTE *)(a1 + 34547) = 0;
  *(_DWORD *)(a1 + 34508) = 0;
  *(_WORD *)(a1 + 34544) = 0;
  *(_BYTE *)(a1 + 34612) = 0;
  v3 = (_BYTE *)(a1 + 34612);
  *(_BYTE *)(v1 + 18269) = 0;
  *(_BYTE *)(v1 + 18270) = 0;
  *(_DWORD *)(v1 + 18336) = 0;
  *(_BYTE *)(v1 + 18271) = 1;
  *(_BYTE *)(v1 + 18224) = 0;
  *(_BYTE *)(v1 + 18227) = 0;
  *(_BYTE *)(v1 + 18226) = 0;
  *(_BYTE *)(v1 + 18225) = 0;
  v4 = 0;
  switch ( *(_BYTE *)(TileMgr_instance + 16272) )
  {
    case 1:
      goto LABEL_3;
    case 2:
      v2 = 2;
      *v3 = 1;
LABEL_3:
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      path.cstr = "Model/obj_hana_daishizen.Nin_NX_NVN.szs";
      ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      path.cstr = "obj_hana_daishizen";
      sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      path.cstr = "obj_hana_dai01";
      v63 = v1 + 12776;
      sub_60448C14(&identifier, &path, v1 + 12776, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      path.cstr = "obj_hana_dai02";
      v5 = v1 + 13048;
      sub_60448C14(&identifier, &path, v1 + 13048, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      path.cstr = "obj_hana_dai03";
      v60 = v1 + 13320;
      sub_60448C14(&identifier, &path, v1 + 13320, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      path.cstr = "obj_hana_dai_nml";
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      v6 = v1 + 14680;
      sub_60448C14(&identifier, &path, v1 + 14680, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_daishizen";
      path.cstr = "obj_hana_dai_kuki_nml";
      sub_60448C14(&identifier, &path, v1 + 14952, v67, 0);
      v56 = v2;
      break;
    case 3:
      v4 = 3;
      goto LABEL_5;
    case 4:
      goto LABEL_7;
    case 5:
      *(_BYTE *)(v1 + 18271) = 0;
LABEL_7:
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      path.cstr = "Model/obj_hana_kogen.Nin_NX_NVN.szs";
      ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      path.cstr = "obj_hana_kogen";
      sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      path.cstr = "obj_hana_kogen01";
      v63 = v1 + 12776;
      sub_60448C14(&identifier, &path, v1 + 12776, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      path.cstr = "obj_hana_kogen02";
      v5 = v1 + 13048;
      sub_60448C14(&identifier, &path, v1 + 13048, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      path.cstr = "obj_hana_kogen03";
      v60 = v1 + 13320;
      sub_60448C14(&identifier, &path, v1 + 13320, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      path.cstr = "obj_hana_kogen_nml";
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      v6 = v1 + 14680;
      sub_60448C14(&identifier, &path, v1 + 14680, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana_kogen";
      path.cstr = "obj_hana_kogen_kuki_nml";
      sub_60448C14(&identifier, &path, v1 + 14952, v67, 0);
      v56 = 4;
      break;
    default:
LABEL_5:
      v56 = v4;
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "Model/obj_hana.Nin_NX_NVN.szs";
      ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "obj_hana";
      sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "obj_hana01";
      v63 = v1 + 12776;
      sub_60448C14(&identifier, &path, v1 + 12776, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "obj_hana02";
      v5 = v1 + 13048;
      sub_60448C14(&identifier, &path, v1 + 13048, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "obj_hana03";
      v60 = v1 + 13320;
      sub_60448C14(&identifier, &path, v1 + 13320, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "obj_hana_nml";
      v6 = v1 + 14680;
      sub_60448C14(&identifier, &path, v1 + 14680, v67, 0);
      path.vtable = &vtable_sead_SafeStringBase_char;
      identifier.vtable = &vtable_sead_SafeStringBase_char;
      identifier.cstr = "obj_hana";
      path.cstr = "obj_hana_kuki_nml";
      sub_60448C14(&identifier, &path, v1 + 14952, v67, 0);
      break;
  }
  v7 = *(_DWORD *)(v63 + 4);
  v8 = *(_DWORD *)(v63 + 8);
  v9 = *(_DWORD *)(v63 + 12);
  v10 = *(_DWORD *)(v63 + 16);
  *(_DWORD *)(v1 + 13592) = *(_DWORD *)v63;
  *(_DWORD *)(v1 + 13596) = v7;
  *(_DWORD *)(v1 + 13600) = v8;
  *(_DWORD *)(v1 + 13604) = v9;
  *(_DWORD *)(v1 + 13608) = v10;
  v11 = *(_DWORD *)(v63 + 24);
  v12 = *(_DWORD *)(v63 + 28);
  v13 = *(_DWORD *)(v63 + 32);
  v14 = *(_DWORD *)(v63 + 36);
  *(_DWORD *)(v1 + 13612) = *(_DWORD *)(v63 + 20);
  *(_DWORD *)(v1 + 13616) = v11;
  *(_DWORD *)(v1 + 13620) = v12;
  *(_DWORD *)(v1 + 13624) = v13;
  *(_DWORD *)(v1 + 13628) = v14;
  v15 = *(_DWORD *)(v63 + 44);
  v16 = *(_DWORD *)(v63 + 48);
  v17 = *(_DWORD *)(v63 + 52);
  v18 = *(_DWORD *)(v63 + 56);
  *(_DWORD *)(v1 + 13632) = *(_DWORD *)(v63 + 40);
  *(_DWORD *)(v1 + 13636) = v15;
  *(_DWORD *)(v1 + 13640) = v16;
  *(_DWORD *)(v1 + 13644) = v17;
  *(_DWORD *)(v1 + 13648) = v18;
  v19 = *(_WORD *)(v63 + 60);
  *(_BYTE *)(v1 + 13654) = *(_BYTE *)(v63 + 62);
  *(_WORD *)(v1 + 13652) = v19;
  sub_60917754(v1 + 13656, v1 + 12840);
  *(_DWORD *)(v1 + 13856) = *(_DWORD *)(v1 + 13040);
  v20 = *(_DWORD *)(v5 + 4);
  v21 = *(_DWORD *)(v5 + 8);
  v22 = *(_DWORD *)(v5 + 12);
  v23 = *(_DWORD *)(v5 + 16);
  *(_DWORD *)(v1 + 13864) = *(_DWORD *)v5;
  *(_DWORD *)(v1 + 13868) = v20;
  *(_DWORD *)(v1 + 13872) = v21;
  *(_DWORD *)(v1 + 13876) = v22;
  *(_DWORD *)(v1 + 13880) = v23;
  v24 = *(_DWORD *)(v5 + 24);
  v25 = *(_DWORD *)(v5 + 28);
  v26 = *(_DWORD *)(v5 + 32);
  v27 = *(_DWORD *)(v5 + 36);
  *(_DWORD *)(v1 + 13884) = *(_DWORD *)(v5 + 20);
  *(_DWORD *)(v1 + 13888) = v24;
  *(_DWORD *)(v1 + 13892) = v25;
  *(_DWORD *)(v1 + 13896) = v26;
  *(_DWORD *)(v1 + 13900) = v27;
  v28 = *(_DWORD *)(v5 + 44);
  v29 = *(_DWORD *)(v5 + 48);
  v30 = *(_DWORD *)(v5 + 52);
  v31 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v1 + 13904) = *(_DWORD *)(v5 + 40);
  *(_DWORD *)(v1 + 13908) = v28;
  *(_DWORD *)(v1 + 13912) = v29;
  *(_DWORD *)(v1 + 13916) = v30;
  *(_DWORD *)(v1 + 13920) = v31;
  v32 = *(_WORD *)(v5 + 60);
  *(_BYTE *)(v1 + 13926) = *(_BYTE *)(v5 + 62);
  *(_WORD *)(v1 + 13924) = v32;
  sub_60917754(v1 + 13928, v1 + 13112);
  *(_DWORD *)(v1 + 14128) = *(_DWORD *)(v1 + 13312);
  sub_60449E68(v1, v63, v5, v60, v1 + 13592, v1 + 13864, v6, v6, v6, v6, v6, 3, -1);
  if ( !v56 )
    goto LABEL_11;
  if ( v56 == 4 )
  {
    v34 = v1;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_hana_kogen";
    path.cstr = "obj_hana_kogen_kuki";
    sub_60448C14(&identifier, &path, v1 + 14136, v67, 0);
    sub_60449E68(
      v1 + 3192,
      v1 + 14136,
      v1 + 14136,
      v1 + 14136,
      v1 + 14136,
      v1 + 14136,
      v1 + 14952,
      v1 + 14952,
      v1 + 14952,
      v1 + 14952,
      v1 + 14952,
      3,
      -1);
    *(_BYTE *)(v1 + 188) = 2;
    *(_BYTE *)(v1 + 3380) = 1;
    *(_DWORD *)(v1 + 18256) = 0;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "Model/obj_kusa_kogen.Nin_NX_NVN.szs";
    identifier.cstr = "obj_kusa_kogen";
    ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen";
    sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen01";
    v57 = v1 + 16856;
    sub_60448C14(&identifier, &path, v1 + 16856, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen02";
    v53 = v1 + 17128;
    sub_60448C14(&identifier, &path, v1 + 17128, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen03";
    v50 = v1 + 17400;
    sub_60448C14(&identifier, &path, v1 + 17400, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen04";
    v47 = v1 + 17672;
    sub_60448C14(&identifier, &path, v1 + 17672, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen05";
    v46 = v1 + 17944;
    sub_60448C14(&identifier, &path, v1 + 17944, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen01_nml";
    v64 = v1 + 15224;
    sub_60448C14(&identifier, &path, v1 + 15224, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen02_nml";
    sub_60448C14(&identifier, &path, v1 + 15496, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen03_nml";
    sub_60448C14(&identifier, &path, v1 + 15768, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen04_nml";
    v35 = v1 + 16040;
    sub_60448C14(&identifier, &path, v34 + 16040, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_kogen";
    path.cstr = "obj_kusa_kogen05_nml";
    v36 = v34 + 16312;
    sub_60448C14(&identifier, &path, v34 + 16312, v67, 0);
    sub_60449E68(v34 + 6384, v57, v53, v50, v47, v46, v64, v34 + 15496, v34 + 15768, v34 + 16040, v34 + 16312, 3, -1);
    v37 = v67;
    v38 = v34 + 15496;
    v39 = v64;
    *(_BYTE *)(v34 + 6572) = 0;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    v40 = v34 + 15768;
    identifier.cstr = "obj_hana_kogen";
    v41 = "butterfly_kogen";
LABEL_20:
    path.cstr = v41;
    goto LABEL_21;
  }
  if ( v56 != 3 )
  {
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_hana_daishizen";
    v33 = "obj_hana_dai_kuki";
  }
  else
  {
LABEL_11:
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_hana";
    v33 = "obj_hana_kuki";
  }
  path.cstr = v33;
  v34 = v1;
  sub_60448C14(&identifier, &path, v1 + 14136, v67, 0);
  sub_60449E68(
    v1 + 3192,
    v1 + 14136,
    v1 + 14136,
    v1 + 14136,
    v1 + 14136,
    v1 + 14136,
    v1 + 14952,
    v1 + 14952,
    v1 + 14952,
    v1 + 14952,
    v1 + 14952,
    3,
    -1);
  *(_BYTE *)(v1 + 188) = 2;
  *(_BYTE *)(v1 + 3380) = 1;
  *(_DWORD *)(v1 + 18256) = 0;
  if ( v56 == 3 )
  {
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    path.cstr = "Model/obj_kusa_chika.Nin_NX_NVN.szs";
    ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    path.cstr = "obj_kusa_chika";
    sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    path.cstr = "obj_kusa_chika01";
    v58 = v1 + 16856;
    sub_60448C14(&identifier, &path, v1 + 16856, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    path.cstr = "obj_kusa_chika02";
    v54 = v1 + 17128;
    sub_60448C14(&identifier, &path, v1 + 17128, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    path.cstr = "obj_kusa_chika03";
    v51 = v1 + 17400;
    sub_60448C14(&identifier, &path, v1 + 17400, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_chika04";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    v48 = v1 + 17672;
    sub_60448C14(&identifier, &path, v1 + 17672, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_chika05";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    v42 = v1 + 17944;
    sub_60448C14(&identifier, &path, v1 + 17944, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_chika01_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    v65 = v1 + 15224;
    sub_60448C14(&identifier, &path, v1 + 15224, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_chika02_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    v61 = v1 + 15496;
    sub_60448C14(&identifier, &path, v1 + 15496, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_chika03_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    v40 = v1 + 15768;
    sub_60448C14(&identifier, &path, v1 + 15768, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_chika04_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    v35 = v1 + 16040;
    sub_60448C14(&identifier, &path, v34 + 16040, v67, 0);
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_chika";
    path.vtable = &vtable_sead_SafeStringBase_char;
    v43 = "obj_kusa_chika05_nml";
    goto LABEL_18;
  }
  if ( v56 )
  {
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    path.cstr = "Model/obj_kusa_daishizen.Nin_NX_NVN.szs";
    ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    path.cstr = "obj_kusa_daishizen";
    sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    path.cstr = "obj_kusa_dai01";
    v66 = v1 + 16856;
    sub_60448C14(&identifier, &path, v1 + 16856, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    path.cstr = "obj_kusa_dai02";
    v59 = v1 + 17128;
    sub_60448C14(&identifier, &path, v1 + 17128, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    path.cstr = "obj_kusa_dai03";
    v55 = v1 + 17400;
    sub_60448C14(&identifier, &path, v1 + 17400, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_dai04";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    v52 = v1 + 17672;
    sub_60448C14(&identifier, &path, v1 + 17672, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_dai05";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    v49 = v1 + 17944;
    sub_60448C14(&identifier, &path, v1 + 17944, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_dai01_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    v39 = v1 + 15224;
    sub_60448C14(&identifier, &path, v1 + 15224, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_dai02_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    v62 = v1 + 15496;
    sub_60448C14(&identifier, &path, v1 + 15496, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_dai03_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    v40 = v1 + 15768;
    sub_60448C14(&identifier, &path, v1 + 15768, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    path.cstr = "obj_kusa_dai04_nml";
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    v35 = v1 + 16040;
    sub_60448C14(&identifier, &path, v34 + 16040, v67, 0);
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_kusa_daishizen";
    path.cstr = "obj_kusa_dai05_nml";
    v36 = v34 + 16312;
    sub_60448C14(&identifier, &path, v34 + 16312, v67, 0);
    sub_60449E68(v34 + 6384, v66, v59, v55, v52, v49, v34 + 15224, v62, v34 + 15768, v34 + 16040, v34 + 16312, 3, -1);
    v37 = v67;
    v38 = v62;
    *(_BYTE *)(v34 + 6572) = 0;
    identifier.vtable = &vtable_sead_SafeStringBase_char;
    path.vtable = &vtable_sead_SafeStringBase_char;
    identifier.cstr = "obj_hana_daishizen";
    v41 = "butterfly_dai";
    goto LABEL_20;
  }
  path.vtable = &vtable_sead_SafeStringBase_char;
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  path.cstr = "Model/obj_kusa.Nin_NX_NVN.szs";
  ArchiveManager_loadSzs(ArchiveManagerMaybe_instance, &identifier, &path, 0, 1);
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  path.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  path.cstr = "obj_kusa";
  sub_6043B2D8(ResourceMgrRelated_instance, &identifier, (int)&path, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  path.cstr = "obj_kusa01";
  v58 = v1 + 16856;
  sub_60448C14(&identifier, &path, v1 + 16856, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  path.cstr = "obj_kusa02";
  v54 = v1 + 17128;
  sub_60448C14(&identifier, &path, v1 + 17128, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  path.cstr = "obj_kusa03";
  v51 = v1 + 17400;
  sub_60448C14(&identifier, &path, v1 + 17400, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  path.cstr = "obj_kusa04";
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  v48 = v1 + 17672;
  sub_60448C14(&identifier, &path, v1 + 17672, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  path.cstr = "obj_kusa05";
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  v42 = v1 + 17944;
  sub_60448C14(&identifier, &path, v1 + 17944, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  path.cstr = "obj_kusa01_nml";
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  v65 = v1 + 15224;
  sub_60448C14(&identifier, &path, v1 + 15224, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  path.cstr = "obj_kusa02_nml";
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  v61 = v1 + 15496;
  sub_60448C14(&identifier, &path, v1 + 15496, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  path.cstr = "obj_kusa03_nml";
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  v40 = v1 + 15768;
  sub_60448C14(&identifier, &path, v1 + 15768, v67, 0);
  path.vtable = &vtable_sead_SafeStringBase_char;
  path.cstr = "obj_kusa04_nml";
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  v35 = v1 + 16040;
  sub_60448C14(&identifier, &path, v34 + 16040, v67, 0);
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_kusa";
  path.vtable = &vtable_sead_SafeStringBase_char;
  v43 = "obj_kusa05_nml";
LABEL_18:
  path.cstr = v43;
  v36 = v34 + 16312;
  sub_60448C14(&identifier, &path, v34 + 16312, v67, 0);
  v38 = v61;
  v45 = v42;
  v39 = v65;
  sub_60449E68(v34 + 6384, v58, v54, v51, v48, v45, v65, v61, v40, v35, v34 + 16312, 3, -1);
  v37 = v67;
  *(_BYTE *)(v34 + 6572) = 0;
  identifier.vtable = &vtable_sead_SafeStringBase_char;
  path.vtable = &vtable_sead_SafeStringBase_char;
  identifier.cstr = "obj_hana";
  path.cstr = "butterfly";
LABEL_21:
  sub_60448C14(&identifier, &path, v34 + 14408, v37, 0);
  sub_60449E68(
    v34 + 9576,
    v34 + 14408,
    v34 + 14408,
    v34 + 14408,
    v34 + 14408,
    v34 + 14408,
    v39,
    v38,
    v40,
    v35,
    v36,
    3,
    -1);
  *(_BYTE *)(v34 + 9764) = 3;
  *(_DWORD *)(v34 + 18260) = 0;
  *(_BYTE *)(v34 + 18268) = 0;
  return ((int (__fastcall *)(int, int))loc_60712498)(v34, 1);
}

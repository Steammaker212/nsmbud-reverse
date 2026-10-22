int __fastcall sub_603B7478(int a1)
{
  StateMgr *v2; // r7
  StateBase *CurrentState; // r0
  int v4; // r5
  int v5; // r8
  StateBase *v6; // r0
  int v7; // r6
  float v8; // r0
  float *v9; // r9
  float v10; // s0
  float v11; // s6
  float v12; // s4
  float v13; // s2
  _BYTE *v14; // r11
  bool v15; // zf
  float v16; // s6
  float v17; // r5
  float v18; // r2
  int v19; // r1
  float v20; // kr04_4
  float v21; // s0
  float *p_position; // r2
  float v23; // s0
  float v24; // r2
  float v25; // s2
  float *p_resultStruct; // r3
  float x; // s2
  char v28; // r0
  bool v29; // zf
  float v30; // s16
  float v31; // s18
  float v32; // s2
  int v33; // r10
  int v34; // r2
  int v35; // r0
  int v36; // r2
  float v37; // r2
  float v38; // r0
  int v39; // r1
  float v40; // s0
  float *v41; // r3
  float v42; // s0
  float v43; // kr18_4
  float v44; // s2
  float *v45; // r0
  float v46; // s2
  float v47; // s0
  float v48; // s2
  float *v49; // r5
  float v50; // s18
  float v51; // s16
  int v52; // r9
  int v53; // r0
  int v54; // r2
  bool v55; // zf
  float *v56; // r6
  float v57; // s18
  float v58; // s16
  float v59; // s0
  float v60; // s0
  int v61; // r1
  bool v62; // zf
  _BOOL4 v63; // r0
  float v64; // s0
  float v65; // s2
  float v66; // s18
  float v67; // s16
  int v68; // r0
  float v69; // r2
  float v70; // r0
  int v71; // r1
  float v72; // s0
  float *v73; // r3
  _BOOL4 v74; // r0
  float v75; // s0
  float v76; // s2
  int result; // r0
  float v78; // r1
  float v79; // s16
  float v80; // kr28_4
  float v81; // s0
  float *v82; // r0
  float v83; // s18
  int v84; // r0
  float v85; // [sp+8h] [bp-68h]
  int v86; // [sp+Ch] [bp-64h]
  int v87; // [sp+10h] [bp-60h]
  int v88; // [sp+14h] [bp-5Ch]
  int *v89; // [sp+18h] [bp-58h]
  int *v90; // [sp+1Ch] [bp-54h]
  int v91; // [sp+2Ch] [bp-44h]
  int v92; // [sp+30h] [bp-40h]
  int v93; // [sp+34h] [bp-3Ch]
  TileCheck_Result resultStruct; // [sp+38h] [bp-38h] BYREF
  Vec2 positionOffset; // [sp+60h] [bp-10h] BYREF
  Vec2 position; // [sp+68h] [bp-8h] BYREF

  v2 = (StateMgr *)(a1 + 6084);
  CurrentState = StateMgr::getCurrentState((StateMgr *)(a1 + 6084));
  v4 = (*((int (__fastcall **)(StateBase *))CurrentState->vtable + 2))(CurrentState);
  v5 = (*(int (**)(void))(dword_60C981CC + 8))();
  v6 = StateMgr::getCurrentState(v2);
  v93 = (*((int (__fastcall **)(StateBase *))v6->vtable + 2))(v6);
  v92 = (*(int (**)(void))(dword_60C981AC + 8))();
  v86 = *(_DWORD *)(a1 + 6480);
  v7 = *(_DWORD *)(a1 + 22544);
  v9 = (float *)(a1 + 6476);
  v8 = *(float *)(a1 + 6476);
  v89 = (int *)(a1 + 22544);
  v90 = (int *)(a1 + 6464);
  v87 = *(_DWORD *)(a1 + 6464);
  v10 = *(float *)(a1 + 108);
  v11 = *(float *)(a1 + 112);
  v12 = v10 - *(float *)(a1 + 22548);
  v13 = v11 - *(float *)(a1 + 22552);
  *(float *)(a1 + 23140) = v12;
  *(float *)(a1 + 23144) = v13;
  v14 = (_BYTE *)(a1 + 22576);
  v88 = v7;
  v91 = v4;
  v85 = v8;
  if ( !*(_BYTE *)(a1 + 22576) )
  {
    v18 = v11;
    v17 = v10;
    v19 = v7;
    goto LABEL_8;
  }
  v15 = v4 == v5;
  v16 = *(float *)(a1 + 6480);
  *(float *)(a1 + 6476) = v12 + v8;
  *(float *)(a1 + 6480) = v13 + v16;
  if ( v4 != v5 )
    v15 = v93 == v92;
  if ( !v15 )
  {
    ((void (__fastcall *)(int))loc_603B8F1C)(a1);
    if ( !*v14 )
    {
      v17 = *(float *)(a1 + 108);
      v18 = *(float *)(a1 + 112);
      v19 = *v89;
      v10 = v17;
LABEL_8:
      *(_DWORD *)(a1 + 23140) = 0;
      *(_DWORD *)(a1 + 23144) = 0;
      *(float *)&resultStruct.field_0 = v10;
      position.x = v18;
      v20 = v10;
      v21 = -7.0;
      p_position = (float *)&position;
      switch ( v19 )
      {
        case 0:
          goto LABEL_12;
        case 1:
          v21 = 7.0;
          goto LABEL_10;
        case 2:
          v21 = 7.0;
          goto LABEL_12;
        case 3:
LABEL_10:
          p_position = (float *)&resultStruct;
LABEL_12:
          *p_position = v21 + *p_position;
          v23 = *(float *)&resultStruct.field_0;
          break;
        default:
          v23 = v20;
          break;
      }
      v24 = *(float *)(a1 + 112);
      *(float *)&resultStruct.field_0 = v17;
      position.x = v24;
      v25 = -7.0;
      p_resultStruct = (float *)&position;
      switch ( v19 )
      {
        case 0:
          goto LABEL_18;
        case 1:
          v25 = 7.0;
          goto LABEL_15;
        case 2:
          v25 = 7.0;
          goto LABEL_18;
        case 3:
LABEL_15:
          p_resultStruct = (float *)&resultStruct;
LABEL_18:
          *p_resultStruct = v25 + *p_resultStruct;
          x = position.x;
          break;
        default:
          x = v24;
          break;
      }
      *(float *)(a1 + 6476) = v23;
      *(float *)(a1 + 6480) = x;
      position.x = v17;
      positionOffset.x = v23;
      position.y = v24;
      positionOffset.y = x;
      sub_6014F61C(a1 + 648);
      resultStruct.field_C = 0;
      resultStruct.field_10 = 0;
      v28 = TileCheck_check((TileCheck *)(a1 + 652), &resultStruct, &position, &positionOffset, 15);
      *(_BYTE *)(a1 + 22564) = v28 & ((resultStruct.field_1C & 0xF) == 2);
      v29 = v91 == v5;
      if ( v91 != v5 )
        v29 = v93 == v92;
      if ( !v29 )
        ((void (__fastcall *)(int, float))loc_603B922C)(a1, 0.25);
      if ( !*v14 )
      {
        v30 = *(float *)(a1 + 108);
        v31 = *(float *)(a1 + 112);
        CollisionMgr_process((_BYTE *)(a1 + 17192));
        v32 = *(float *)(a1 + 112) - v31;
        *v9 = (float)(*(float *)(a1 + 108) - v30) + *v9;
        *(float *)(a1 + 6480) = v32 + *(float *)(a1 + 6480);
      }
    }
  }
  ((void (__fastcall *)(int))loc_603B97B4)(a1);
  if ( !*v14 )
    ((void (__fastcall *)(int))loc_603B90EC)(a1);
  v33 = sub_603B9A48(a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  CollisionMgr_process((_BYTE *)(a1 + 11840));
  if ( v33 == 1 )
  {
    CollisionMgr_process((_BYTE *)(a1 + 6488));
    sub_603B992C(a1);
  }
  if ( v93 != v92 )
  {
    if ( sub_603B9C08(a1) == 1 )
    {
      *(_BYTE *)(a1 + 22645) = 1;
      if ( *v14 )
      {
        *(_BYTE *)(a1 + 22612) ^= 1u;
        v34 = *v90;
        *v90 = *(_DWORD *)(a1 + 22608);
        *(_DWORD *)(a1 + 22608) = v34;
        CollisionMgr_process((_BYTE *)(a1 + 6488));
        sub_603B992C(a1);
      }
    }
    if ( sub_603B9514(a1, 1, 1) == 1 )
    {
      v35 = *(_DWORD *)(a1 + 22568);
      if ( v35 && *(_DWORD *)(v35 + 300) == 17 )
      {
        *v9 = v85;
        *(_DWORD *)(a1 + 6480) = v86;
        *v89 = v7;
        *(_BYTE *)(a1 + 22645) = 1;
        if ( !*v14 )
          goto LABEL_51;
        *(_BYTE *)(a1 + 22612) ^= 1u;
        v36 = *v90;
        *v90 = *(_DWORD *)(a1 + 22608);
        *(_DWORD *)(a1 + 22608) = v36;
        CollisionMgr_process((_BYTE *)(a1 + 6488));
        sub_603B992C(a1);
      }
      else
      {
        *(_DWORD *)(a1 + 22640) = v7;
        v37 = *(float *)(a1 + 108);
        v38 = *(float *)(a1 + 112);
        *(float *)&resultStruct.field_0 = v37;
        position.x = v38;
        v39 = *v89;
        v40 = -7.0;
        v41 = (float *)&position;
        switch ( *v89 )
        {
          case 0:
            goto LABEL_42;
          case 1:
            v40 = 7.0;
            goto LABEL_40;
          case 2:
            v40 = 7.0;
            goto LABEL_42;
          case 3:
LABEL_40:
            v41 = (float *)&resultStruct;
LABEL_42:
            *v41 = v40 + *v41;
            v42 = *(float *)&resultStruct.field_0;
            break;
          default:
            v42 = v37;
            break;
        }
        *(float *)&resultStruct.field_0 = v37;
        position.x = v38;
        v43 = v38;
        v44 = -7.0;
        v45 = (float *)&position;
        switch ( v39 )
        {
          case 0:
            goto LABEL_48;
          case 1:
            v44 = 7.0;
            goto LABEL_45;
          case 2:
            v44 = 7.0;
            goto LABEL_48;
          case 3:
LABEL_45:
            v45 = (float *)&resultStruct;
LABEL_48:
            *v45 = v44 + *v45;
            v46 = position.x;
            break;
          default:
            v46 = v43;
            break;
        }
        *(float *)(a1 + 6476) = v42;
        *(float *)(a1 + 6480) = v46;
        *(_BYTE *)(a1 + 22613) = 1;
        v47 = *(float *)(a1 + 6452) - v42;
        v48 = *(float *)(a1 + 6456) - v46;
        *(float *)(a1 + 22616) = v47;
        *(float *)(a1 + 22620) = v48;
        *(float *)(a1 + 22624) = v47;
        *(float *)(a1 + 22628) = v48;
        *(_DWORD *)(a1 + 22632) = 0;
        *(_DWORD *)(a1 + 22636) = 0;
      }
    }
  }
  if ( *v14 )
    goto LABEL_52;
LABEL_51:
  sub_603B96DC(a1, a1 + 6488);
  if ( *v14 )
  {
LABEL_52:
    v49 = (float *)(a1 + 6456);
    v50 = *(float *)(a1 + 6476);
    v51 = *(float *)(a1 + 6480);
    v52 = v91;
    if ( sqrtf(
           (float)((float)(*(float *)(a1 + 6456) - v51) * (float)(*(float *)(a1 + 6456) - v51))
         + (float)((float)(*(float *)(a1 + 6452) - v50) * (float)(*(float *)(a1 + 6452) - v50))) > 16.0
      && *(_BYTE *)(a1 + 6460) )
    {
      *(_BYTE *)(a1 + 22644) = 1;
      v53 = *(_DWORD *)(a1 + 6480);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6476);
      *(_DWORD *)(a1 + 112) = v53;
    }
    else
    {
      *(float *)(a1 + 6452) = v50;
      *v49 = v51;
      *(_BYTE *)(a1 + 6460) = 1;
    }
    v54 = v5;
    goto LABEL_57;
  }
  v69 = *(float *)(a1 + 108);
  v70 = *(float *)(a1 + 112);
  *(float *)&resultStruct.field_0 = v69;
  position.x = v70;
  v71 = *v89;
  v72 = -7.0;
  v73 = (float *)&position;
  switch ( *v89 )
  {
    case 0:
      goto LABEL_91;
    case 1:
      v72 = 7.0;
      goto LABEL_79;
    case 2:
      v72 = 7.0;
      goto LABEL_91;
    case 3:
LABEL_79:
      v73 = (float *)&resultStruct;
LABEL_91:
      *v73 = v72 + *v73;
      v79 = *(float *)&resultStruct.field_0;
      break;
    default:
      v79 = v69;
      break;
  }
  v52 = v91;
  *(float *)&resultStruct.field_0 = v69;
  position.x = v70;
  v80 = v70;
  v81 = -7.0;
  v82 = (float *)&position;
  switch ( v71 )
  {
    case 0:
      goto LABEL_97;
    case 1:
      v81 = 7.0;
      goto LABEL_94;
    case 2:
      v81 = 7.0;
      goto LABEL_97;
    case 3:
LABEL_94:
      v82 = (float *)&resultStruct;
LABEL_97:
      *v82 = v81 + *v82;
      v83 = position.x;
      break;
    default:
      v83 = v80;
      break;
  }
  v54 = v5;
  v49 = (float *)(a1 + 6452);
  if ( sqrtf(
         (float)((float)(*(float *)(a1 + 6456) - v83) * (float)(*(float *)(a1 + 6456) - v83))
       + (float)((float)(*(float *)(a1 + 6452) - v79) * (float)(*(float *)(a1 + 6452) - v79))) > 16.0
    && *(_BYTE *)(a1 + 6460) )
  {
    *(_BYTE *)(a1 + 22644) = 1;
    v84 = *(_DWORD *)(a1 + 6480);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6476);
    *(_DWORD *)(a1 + 112) = v84;
  }
  else
  {
    *v49 = v79;
    *(float *)(a1 + 6456) = v83;
    *(_BYTE *)(a1 + 6460) = 1;
  }
LABEL_57:
  v55 = v52 == v54;
  if ( v52 != v54 )
  {
    v49 = (float *)(a1 + 22613);
    v55 = *(_BYTE *)(a1 + 22613) == 0;
  }
  if ( !v55 )
  {
    v56 = (float *)(a1 + 22624);
    v57 = *(float *)(a1 + 22632) - *(float *)(a1 + 22624);
    v58 = *(float *)(a1 + 22636) - *(float *)(a1 + 22628);
    v59 = sqrtf((float)(v58 * v58) + (float)(v57 * v57));
    if ( v59 <= 0.24 )
    {
      v61 = *(_DWORD *)(a1 + 22636);
      *v56 = *(float *)(a1 + 22632);
      *(_DWORD *)(a1 + 22628) = v61;
      *(_BYTE *)v49 = 0;
    }
    else
    {
      v60 = 1.0 / v59;
      *v56 = *v56 + (float)((float)(v57 * v60) * 0.24);
      *(float *)(a1 + 22628) = *(float *)(a1 + 22628) + (float)((float)(v58 * v60) * 0.24);
    }
  }
  v62 = v52 == v54;
  if ( v52 != v54 )
    v62 = v93 == v92;
  if ( !v62 )
  {
    *(_DWORD *)&resultStruct.field_0 = *v90;
    position.x = 4.702e-38;
    v63 = moveValueTo((int *)(a1 + 156), (int *)&resultStruct.field_0, (int *)&position);
    v64 = 0.1;
    if ( v63 )
    {
      v64 = 0.25;
      v65 = -0.25;
    }
    else
    {
      v65 = -0.1;
    }
    *(float *)(a1 + 6440) = v64;
    *(float *)(a1 + 6444) = v65;
  }
  if ( !v33 )
  {
    if ( sub_603B9D98(a1) == 1 )
    {
      if ( sub_603BA0D0(a1) == 1 )
      {
        ((void (__fastcall *)(int))loc_603B97B4)(a1);
        CollisionMgr_process((_BYTE *)(a1 + 6488));
        sub_603B992C(a1);
      }
      else
      {
        *(_BYTE *)(a1 + 22644) = 1;
      }
    }
    else
    {
      *v14 = 1;
      *(_DWORD *)(a1 + 22604) = v88;
      *(_DWORD *)(a1 + 22608) = v87;
      *(_DWORD *)(a1 + 584) = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 588) = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 592) = *(_DWORD *)(a1 + 116);
      CollisionMgr_process((_BYTE *)(a1 + 6488));
      sub_603B992C(a1);
      v66 = *(float *)(a1 + 6476);
      v67 = *(float *)(a1 + 6480);
      if ( sqrtf(
             (float)((float)(*(float *)(a1 + 6456) - v67) * (float)(*(float *)(a1 + 6456) - v67))
           + (float)((float)(*(float *)(a1 + 6452) - v66) * (float)(*(float *)(a1 + 6452) - v66))) > 16.0
        && *(_BYTE *)(a1 + 6460) )
      {
        *(_BYTE *)(a1 + 22644) = 1;
        v68 = *(_DWORD *)(a1 + 6480);
        *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6476);
        *(_DWORD *)(a1 + 112) = v68;
      }
      else
      {
        *(float *)(a1 + 6452) = v66;
        *(float *)(a1 + 6456) = v67;
        *(_BYTE *)(a1 + 6460) = 1;
      }
      *(_DWORD *)&resultStruct.field_0 = *v90;
      position.x = 4.702e-38;
      v74 = moveValueTo((int *)(a1 + 156), (int *)&resultStruct.field_0, (int *)&position);
      v75 = 0.1;
      if ( v74 )
      {
        v75 = 0.25;
        v76 = -0.25;
      }
      else
      {
        v76 = -0.1;
      }
      *(float *)(a1 + 6440) = v75;
      *(float *)(a1 + 6444) = v76;
    }
  }
  result = *(int *)(a1 + 108);
  *(float *)(a1 + 22548) = *(float *)&result;
  v78 = *(float *)(a1 + 112);
  *(float *)(a1 + 22552) = v78;
  *(_DWORD *)(a1 + 22556) = *(_DWORD *)(a1 + 116);
  if ( sqrtf(
         (float)((float)(v78 - *(float *)(a1 + 6480)) * (float)(v78 - *(float *)(a1 + 6480)))
       + (float)((float)(*(float *)&result - *(float *)(a1 + 6476)) * (float)(*(float *)&result - *(float *)(a1 + 6476)))) > 32.0 )
  {
    result = *(unsigned __int8 *)(a1 + 6460);
    if ( *(_BYTE *)(a1 + 6460) )
    {
      *(_BYTE *)(a1 + 22644) = 1;
      result = *(int *)(a1 + 6480);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6476);
      *(float *)(a1 + 112) = *(float *)&result;
    }
  }
  return result;
}

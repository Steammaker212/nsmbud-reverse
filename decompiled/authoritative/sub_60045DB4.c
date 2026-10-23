int __fastcall sub_60045DB4(int a1, int a2, int a3, int a4, float a5, float a6)
{
  const char *v10; // r0
  unsigned int v11; // r5
  int v12; // r4
  _DWORD *v13; // r0
  int result; // r0
  unsigned int v15; // r5
  int v16; // r4
  _DWORD *v17; // r0
  unsigned int v18; // r5
  int v19; // r4
  _DWORD *v20; // r0
  unsigned int v21; // r5
  int v22; // r4
  _DWORD *v23; // r0
  unsigned int v24; // r5
  int v25; // r4
  _DWORD *v26; // r0
  unsigned int v27; // r5
  int v28; // r4
  _DWORD *v29; // r0
  unsigned int v30; // r5
  int v31; // r4
  _DWORD *v32; // r0
  unsigned int v33; // r5
  int v34; // r4
  _DWORD *v35; // r0
  unsigned int v36; // r5
  int v37; // r4
  _DWORD *v38; // r0
  unsigned int v39; // r5
  int v40; // r4
  _DWORD *v41; // r0
  unsigned int v42; // r5
  int v43; // r4
  _DWORD *v44; // r0
  unsigned int v45; // r5
  int v46; // r4
  _DWORD *v47; // r0
  unsigned int v48; // r5
  int v49; // r4
  _DWORD *v50; // r0
  unsigned int v51; // r5
  int v52; // r4
  _DWORD *v53; // r0
  unsigned int v54; // r5
  int v55; // r4
  _DWORD *v56; // r0
  unsigned int v57; // r5
  int v58; // r4
  _DWORD *v59; // r0
  unsigned int v60; // r5
  int v61; // r4
  _DWORD *v62; // r0
  unsigned int v63; // r5
  int v64; // r4
  _DWORD *v65; // r0
  unsigned int v66; // r5
  int v67; // r4
  _DWORD *v68; // r0
  unsigned int v69; // r5
  int v70; // r4
  _DWORD *v71; // r0
  unsigned int v72; // r5
  int v73; // r4
  _DWORD *v74; // r0
  unsigned int v75; // r5
  int v76; // r4
  _DWORD *v77; // r0
  unsigned int v78; // r5
  int v79; // r4
  _DWORD *v80; // r0
  unsigned int v81; // r5
  int v82; // r4
  _DWORD *v83; // r0
  unsigned int v84; // r5
  int v85; // r4
  _DWORD *v86; // r0
  unsigned int v87; // r5
  int v88; // r4
  _DWORD *v89; // r0
  unsigned int v90; // r5
  int v91; // r4
  _DWORD *v92; // r0
  unsigned int v93; // r5
  int v94; // r4
  _DWORD *v95; // r0
  unsigned int v96; // r5
  int v97; // r4
  _DWORD *v98; // r0
  unsigned int v99; // r5
  int v100; // r4
  _DWORD *v101; // r0
  int (**v102)(); // [sp+0h] [bp-30h] BYREF
  const char *v103; // [sp+4h] [bp-2Ch]

  switch ( a2 )
  {
    case 0:
      if ( *(_BYTE *)(a1 + 11796) )
      {
        v102 = &vtable_sead_SafeStringBase_char;
        v10 = "jc_wait";
        goto LABEL_181;
      }
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_demo_battleA";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, 0.0, 0.0);
      v96 = -2;
      v97 = a1 + 6304;
      do
      {
        v98 = *(_DWORD **)(*(_DWORD *)v97 + 12);
        if ( v96 >= 0xF && *(_DWORD *)(*(_DWORD *)v97 + 8) > 1u )
          ++v98;
        result = sub_60448AF4(*v98, v96 + 2);
        ++v96;
      }
      while ( v96 != 15 );
      return result;
    case 1:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_demo_battleA";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_demo_battleA";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v15 = -2;
      v16 = a1 + 6304;
      do
      {
        v17 = *(_DWORD **)(*(_DWORD *)v16 + 12);
        if ( v15 >= 0xF && *(_DWORD *)(*(_DWORD *)v16 + 8) > 1u )
          ++v17;
        result = sub_60448AF4(*v17, v15 + 2);
        ++v15;
      }
      while ( v15 != 15 );
      return result;
    case 2:
      if ( a4 == 1 )
        sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v18 = -2;
      v19 = a1 + 6304;
      do
      {
        v20 = *(_DWORD **)(*(_DWORD *)v19 + 12);
        if ( v18 >= 0xF && *(_DWORD *)(*(_DWORD *)v19 + 8) > 1u )
          ++v20;
        result = sub_60448AF4(*v20, v18 + 2);
        ++v18;
      }
      while ( v18 != 15 );
      return result;
    case 3:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_jab";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_jab";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v21 = -2;
      v22 = a1 + 6304;
      do
      {
        v23 = *(_DWORD **)(*(_DWORD *)v22 + 12);
        if ( v21 >= 0xF && *(_DWORD *)(*(_DWORD *)v22 + 8) > 1u )
          ++v23;
        result = sub_60448AF4(*v23, v21 + 2);
        ++v21;
      }
      while ( v21 != 15 );
      return result;
    case 4:
      if ( *(_BYTE *)(a1 + 11796) )
      {
        v102 = &vtable_sead_SafeStringBase_char;
        v10 = "jc_delight";
        goto LABEL_181;
      }
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_delight";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_delight";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v99 = -2;
      v100 = a1 + 6304;
      do
      {
        v101 = *(_DWORD **)(*(_DWORD *)v100 + 12);
        if ( v99 >= 0xF && *(_DWORD *)(*(_DWORD *)v100 + 8) > 1u )
          ++v101;
        result = sub_60448AF4(*v101, v99 + 2);
        ++v99;
      }
      while ( v99 != 15 );
      return result;
    case 5:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_move_back";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_move_back";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v24 = -2;
      v25 = a1 + 6304;
      do
      {
        v26 = *(_DWORD **)(*(_DWORD *)v25 + 12);
        if ( v24 >= 0xF && *(_DWORD *)(*(_DWORD *)v25 + 8) > 1u )
          ++v26;
        result = sub_60448AF4(*v26, v24 + 2);
        ++v24;
      }
      while ( v24 != 15 );
      return result;
    case 6:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_move_down";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_move_down";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v27 = -2;
      v28 = a1 + 6304;
      do
      {
        v29 = *(_DWORD **)(*(_DWORD *)v28 + 12);
        if ( v27 >= 0xF && *(_DWORD *)(*(_DWORD *)v28 + 8) > 1u )
          ++v29;
        result = sub_60448AF4(*v29, v27 + 2);
        ++v27;
      }
      while ( v27 != 15 );
      return result;
    case 7:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_w_st";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_w_st";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v30 = -2;
      v31 = a1 + 6304;
      do
      {
        v32 = *(_DWORD **)(*(_DWORD *)v31 + 12);
        if ( v30 >= 0xF && *(_DWORD *)(*(_DWORD *)v31 + 8) > 1u )
          ++v32;
        result = sub_60448AF4(*v32, v30 + 2);
        ++v30;
      }
      while ( v30 != 15 );
      return result;
    case 8:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_w";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_straight_w";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v33 = -2;
      v34 = a1 + 6304;
      do
      {
        v35 = *(_DWORD **)(*(_DWORD *)v34 + 12);
        if ( v33 >= 0xF && *(_DWORD *)(*(_DWORD *)v34 + 8) > 1u )
          ++v35;
        result = sub_60448AF4(*v35, v33 + 2);
        ++v33;
      }
      while ( v33 != 15 );
      return result;
    case 9:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_sphere_st";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v36 = -2;
      v37 = a1 + 6304;
      do
      {
        v38 = *(_DWORD **)(*(_DWORD *)v37 + 12);
        if ( v36 >= 0xF && *(_DWORD *)(*(_DWORD *)v37 + 8) > 1u )
          ++v38;
        result = sub_60448AF4(*v38, v36 + 2);
        ++v36;
      }
      while ( v36 != 15 );
      return result;
    case 10:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_sphere_ed";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v39 = -2;
      v40 = a1 + 6304;
      do
      {
        v41 = *(_DWORD **)(*(_DWORD *)v40 + 12);
        if ( v39 >= 0xF && *(_DWORD *)(*(_DWORD *)v40 + 8) > 1u )
          ++v41;
        result = sub_60448AF4(*v41, v39 + 2);
        ++v39;
      }
      while ( v39 != 15 );
      return result;
    case 11:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, 1, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_st";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v42 = -2;
      v43 = a1 + 6304;
      do
      {
        v44 = *(_DWORD **)(*(_DWORD *)v43 + 12);
        if ( v42 >= 0xF && *(_DWORD *)(*(_DWORD *)v43 + 8) > 1u )
          ++v44;
        result = sub_60448AF4(*v44, v42 + 2);
        ++v42;
      }
      while ( v42 != 15 );
      return result;
    case 12:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, 1, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_st_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v45 = -2;
      v46 = a1 + 6304;
      do
      {
        v47 = *(_DWORD **)(*(_DWORD *)v46 + 12);
        if ( v45 >= 0xF && *(_DWORD *)(*(_DWORD *)v46 + 8) > 1u )
          ++v47;
        result = sub_60448AF4(*v47, v45 + 2);
        ++v45;
      }
      while ( v45 != 15 );
      return result;
    case 13:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, 1, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_st_r";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v48 = -2;
      v49 = a1 + 6304;
      do
      {
        v50 = *(_DWORD **)(*(_DWORD *)v49 + 12);
        if ( v48 >= 0xF && *(_DWORD *)(*(_DWORD *)v49 + 8) > 1u )
          ++v50;
        result = sub_60448AF4(*v50, v48 + 2);
        ++v48;
      }
      while ( v48 != 15 );
      return result;
    case 14:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, 1, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_st_r_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v51 = -2;
      v52 = a1 + 6304;
      do
      {
        v53 = *(_DWORD **)(*(_DWORD *)v52 + 12);
        if ( v51 >= 0xF && *(_DWORD *)(*(_DWORD *)v52 + 8) > 1u )
          ++v53;
        result = sub_60448AF4(*v53, v51 + 2);
        ++v51;
      }
      while ( v51 != 15 );
      return result;
    case 15:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_r";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_r";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v54 = -2;
      v55 = a1 + 6304;
      do
      {
        v56 = *(_DWORD **)(*(_DWORD *)v55 + 12);
        if ( v54 >= 0xF && *(_DWORD *)(*(_DWORD *)v55 + 8) > 1u )
          ++v56;
        result = sub_60448AF4(*v56, v54 + 2);
        ++v54;
      }
      while ( v54 != 15 );
      return result;
    case 16:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_r_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_r_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v57 = -2;
      v58 = a1 + 6304;
      do
      {
        v59 = *(_DWORD **)(*(_DWORD *)v58 + 12);
        if ( v57 >= 0xF && *(_DWORD *)(*(_DWORD *)v58 + 8) > 1u )
          ++v59;
        result = sub_60448AF4(*v59, v57 + 2);
        ++v57;
      }
      while ( v57 != 15 );
      return result;
    case 17:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_return_r";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_return_r";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v60 = -2;
      v61 = a1 + 6304;
      do
      {
        v62 = *(_DWORD **)(*(_DWORD *)v61 + 12);
        if ( v60 >= 0xF && *(_DWORD *)(*(_DWORD *)v61 + 8) > 1u )
          ++v62;
        result = sub_60448AF4(*v62, v60 + 2);
        ++v60;
      }
      while ( v60 != 15 );
      return result;
    case 18:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_off_r";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_off_r";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v63 = -2;
      v64 = a1 + 6304;
      do
      {
        v65 = *(_DWORD **)(*(_DWORD *)v64 + 12);
        if ( v63 >= 0xF && *(_DWORD *)(*(_DWORD *)v64 + 8) > 1u )
          ++v65;
        result = sub_60448AF4(*v65, v63 + 2);
        ++v63;
      }
      while ( v63 != 15 );
      return result;
    case 19:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, 1, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_st_l";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v66 = -2;
      v67 = a1 + 6304;
      do
      {
        v68 = *(_DWORD **)(*(_DWORD *)v67 + 12);
        if ( v66 >= 0xF && *(_DWORD *)(*(_DWORD *)v67 + 8) > 1u )
          ++v68;
        result = sub_60448AF4(*v68, v66 + 2);
        ++v66;
      }
      while ( v66 != 15 );
      return result;
    case 20:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, 1, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_st_l_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v69 = -2;
      v70 = a1 + 6304;
      do
      {
        v71 = *(_DWORD **)(*(_DWORD *)v70 + 12);
        if ( v69 >= 0xF && *(_DWORD *)(*(_DWORD *)v70 + 8) > 1u )
          ++v71;
        result = sub_60448AF4(*v71, v69 + 2);
        ++v69;
      }
      while ( v69 != 15 );
      return result;
    case 21:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_l";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_l";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v72 = -2;
      v73 = a1 + 6304;
      do
      {
        v74 = *(_DWORD **)(*(_DWORD *)v73 + 12);
        if ( v72 >= 0xF && *(_DWORD *)(*(_DWORD *)v73 + 8) > 1u )
          ++v74;
        result = sub_60448AF4(*v74, v72 + 2);
        ++v72;
      }
      while ( v72 != 15 );
      return result;
    case 22:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_l_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_ed_l_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v75 = -2;
      v76 = a1 + 6304;
      do
      {
        v77 = *(_DWORD **)(*(_DWORD *)v76 + 12);
        if ( v75 >= 0xF && *(_DWORD *)(*(_DWORD *)v76 + 8) > 1u )
          ++v77;
        result = sub_60448AF4(*v77, v75 + 2);
        ++v75;
      }
      while ( v75 != 15 );
      return result;
    case 23:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_return_l";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_return_l";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v78 = -2;
      v79 = a1 + 6304;
      do
      {
        v80 = *(_DWORD **)(*(_DWORD *)v79 + 12);
        if ( v78 >= 0xF && *(_DWORD *)(*(_DWORD *)v79 + 8) > 1u )
          ++v80;
        result = sub_60448AF4(*v80, v78 + 2);
        ++v78;
      }
      while ( v78 != 15 );
      return result;
    case 24:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_off_l";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_attack_off_l";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v81 = -2;
      v82 = a1 + 6304;
      do
      {
        v83 = *(_DWORD **)(*(_DWORD *)v82 + 12);
        if ( v81 >= 0xF && *(_DWORD *)(*(_DWORD *)v82 + 8) > 1u )
          ++v83;
        result = sub_60448AF4(*v83, v81 + 2);
        ++v81;
      }
      while ( v81 != 15 );
      return result;
    case 25:
      sub_6040EB10(a1 + 11712);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_damage_s";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_damage_s";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v84 = -2;
      v85 = a1 + 6304;
      do
      {
        v86 = *(_DWORD **)(*(_DWORD *)v85 + 12);
        if ( v84 >= 0xF && *(_DWORD *)(*(_DWORD *)v85 + 8) > 1u )
          ++v86;
        result = sub_60448AF4(*v86, v84 + 2);
        ++v84;
      }
      while ( v84 != 15 );
      return result;
    case 26:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_damage";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_damage";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v87 = -2;
      v88 = a1 + 6304;
      do
      {
        v89 = *(_DWORD **)(*(_DWORD *)v88 + 12);
        if ( v87 >= 0xF && *(_DWORD *)(*(_DWORD *)v88 + 8) > 1u )
          ++v89;
        result = sub_60448AF4(*v89, v87 + 2);
        ++v87;
      }
      while ( v87 != 15 );
      return result;
    case 27:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_rage";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_rage";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v90 = -2;
      v91 = a1 + 6304;
      do
      {
        v92 = *(_DWORD **)(*(_DWORD *)v91 + 12);
        if ( v90 >= 0xF && *(_DWORD *)(*(_DWORD *)v91 + 8) > 1u )
          ++v92;
        result = sub_60448AF4(*v92, v90 + 2);
        ++v90;
      }
      while ( v90 != 15 );
      return result;
    case 28:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_damage_up";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_damage_up";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v93 = -2;
      v94 = a1 + 6304;
      do
      {
        v95 = *(_DWORD **)(*(_DWORD *)v94 + 12);
        if ( v93 >= 0xF && *(_DWORD *)(*(_DWORD *)v94 + 8) > 1u )
          ++v95;
        result = sub_60448AF4(*v95, v93 + 2);
        ++v93;
      }
      while ( v93 != 15 );
      return result;
    case 29:
      v102 = &vtable_sead_SafeStringBase_char;
      v10 = "jc_demo_W7_excite";
      goto LABEL_181;
    case 30:
      v102 = &vtable_sead_SafeStringBase_char;
      v10 = "jc_demo_W7_punch";
      goto LABEL_181;
    case 31:
      v102 = &vtable_sead_SafeStringBase_char;
      v10 = "jc_demo_W7_shock";
      goto LABEL_181;
    case 32:
      v102 = &vtable_sead_SafeStringBase_char;
      v10 = "jc_demo_W7_shock2";
      goto LABEL_181;
    case 33:
      v102 = &vtable_sead_SafeStringBase_char;
      v10 = "jc_demo_W7_panic";
LABEL_181:
      v103 = v10;
      result = ((int (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      break;
    default:
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, _DWORD, int (***)(), int, float, float))sub_60047464)(a1, 0, &v102, a3, a5, a6);
      v102 = &vtable_sead_SafeStringBase_char;
      v103 = "jcb_wait";
      ((void (__fastcall *)(int, int, int (***)(), int, float, float))sub_60047464)(a1, 1, &v102, a3, a5, a6);
      v11 = -2;
      v12 = a1 + 6304;
      do
      {
        v13 = *(_DWORD **)(*(_DWORD *)v12 + 12);
        if ( v11 >= 0xF && *(_DWORD *)(*(_DWORD *)v12 + 8) > 1u )
          ++v13;
        result = sub_60448AF4(*v13, v11 + 2);
        ++v11;
      }
      while ( v11 != 15 );
      break;
  }
  return result;
}

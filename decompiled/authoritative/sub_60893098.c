unsigned int __fastcall sub_60893098(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v5; // r4
  unsigned int v6; // r11
  float *v7; // r10
  float v8; // s2
  float v9; // s0
  float v10; // r1
  int v11; // r2
  int v12; // r5
  int v13; // r0
  int v14; // r4
  unsigned int result; // r0
  bool v16; // zf
  unsigned int v17; // r1
  unsigned int v18; // r8
  int v19; // r1
  unsigned int v20; // r6
  unsigned int v21; // r0
  float v22; // s0
  float v23; // s2
  _BOOL4 v24; // r0
  float v25; // s2
  _BOOL4 v26; // r3
  float v27; // r2
  int v28; // r1
  int v29; // r3
  float v30; // r0
  int v31; // r1
  int v32; // r3
  float v33; // s2
  float v34; // s0
  int v35; // r3
  float v36; // s2
  float v37; // r0
  int v38; // r1
  int v39; // r3
  int v40; // r3
  float v41; // s0
  float v42; // s2
  float v43; // s4
  float v44; // s2
  float v45; // s2
  float v46; // r1
  int v47; // r2
  int v48; // r7
  unsigned int v49; // r1
  float v50; // s2
  float v51; // r2
  int v52; // r3
  int v53; // r6
  float v54; // s0
  float v55; // s2
  float v56; // s2
  float v57; // s2
  float v58; // r2
  int v59; // r3
  int v60; // r4
  unsigned int v61; // r7
  float v62; // s2
  float v63; // r2
  int v64; // r3
  int v65; // r5
  float v66; // s0
  float v67; // s2
  float v68; // s2
  float v69; // s2
  float v70; // s2
  float v71; // s0
  float v72; // s0
  float v73; // s2
  _BOOL4 v74; // r1
  int v75; // r1
  int v76; // r3
  float v77; // s2
  _BOOL4 v78; // r3
  float v79; // r2
  int v80; // r1
  int v81; // r3
  int v82; // r1
  int v83; // r2
  int v84; // r7
  float v85; // s2
  float v86; // s0
  int v87; // r7
  float v88; // s2
  float v89; // r1
  int v90; // r2
  int v91; // r7
  int v92; // r7

  while ( 2 )
  {
    v5 = a2 - 16;
    v6 = 16 - a2;
    v7 = (float *)(a2 - 8);
LABEL_18:
    v18 = a1;
LABEL_20:
    v19 = a2 - v18;
    result = (int)(a2 - v18) >> 3;
    switch ( result )
    {
      case 0u:
      case 1u:
        return result;
      case 2u:
        v70 = *v7;
        v71 = *(float *)v18;
        if ( *v7 >= 0.0 )
        {
          if ( v70 >= v71 )
            return result;
        }
        else if ( v70 <= v71 )
        {
          return result;
        }
        result = *(_DWORD *)v18;
        v75 = *(_DWORD *)(v18 + 4);
        v76 = *(_DWORD *)(a2 - 4);
        *(float *)v18 = *v7;
        *(_DWORD *)(v18 + 4) = v76;
        *(_DWORD *)v7 = result;
        *(_DWORD *)(a2 - 4) = v75;
        return result;
      case 3u:
        v72 = *(float *)(v18 + 8);
        v73 = *(float *)v18;
        if ( v72 >= 0.0 )
          v74 = v72 < v73;
        else
          v74 = v72 > v73;
        v77 = *v7;
        if ( v72 >= 0.0 )
          v78 = v77 < v72;
        else
          v78 = v77 > v72;
        result = v18 + 8;
        if ( v74 )
        {
          v79 = *(float *)v18;
          v80 = *(_DWORD *)(v18 + 4);
          if ( v78 )
          {
            result = *(_DWORD *)v7;
            v81 = *(_DWORD *)(a2 - 4);
            *(float *)v18 = *v7;
            *(_DWORD *)(v18 + 4) = v81;
          }
          else
          {
            v87 = *(_DWORD *)(v18 + 12);
            *(_DWORD *)v18 = *(_DWORD *)result;
            *(_DWORD *)(v18 + 4) = v87;
            *(float *)result = v79;
            *(_DWORD *)(v18 + 12) = v80;
            v88 = *v7;
            if ( v79 >= 0.0 )
            {
              if ( v88 >= v79 )
                return result;
            }
            else if ( v88 <= v79 )
            {
              return result;
            }
            v92 = *(_DWORD *)(a2 - 4);
            *(float *)result = *v7;
            *(_DWORD *)(v18 + 12) = v92;
          }
          *v7 = v79;
          *(_DWORD *)(a2 - 4) = v80;
        }
        else
        {
          if ( !v78 )
            return result;
          v82 = *(_DWORD *)result;
          v83 = *(_DWORD *)(v18 + 12);
          v84 = *(_DWORD *)(a2 - 4);
          *(float *)result = *v7;
          *(_DWORD *)(v18 + 12) = v84;
          *(_DWORD *)v7 = v82;
          *(_DWORD *)(a2 - 4) = v83;
          v85 = *(float *)(v18 + 8);
          v86 = *(float *)v18;
          if ( v85 >= 0.0 )
          {
            if ( v85 >= v86 )
              return result;
          }
          else if ( v85 <= v86 )
          {
            return result;
          }
          v89 = *(float *)v18;
          v90 = *(_DWORD *)(v18 + 4);
          v91 = *(_DWORD *)(v18 + 12);
          *(_DWORD *)v18 = *(_DWORD *)result;
          *(_DWORD *)(v18 + 4) = v91;
          *(float *)result = v89;
          *(_DWORD *)(v18 + 12) = v90;
        }
        return result;
      case 4u:
        return sub_6089397C(v18, v18 + 8, v18 + 16, a2 - 8, a3);
      case 5u:
        return sub_60893C18(v18, v18 + 8, v18 + 16, v18 + 24, a2 - 8, a3);
      default:
        if ( v19 <= 247 )
          return sub_60893D8C(v18, a2, a3);
        v20 = v18 + ((4 * (((int)(a2 - v18) >> 3) + ((a2 - v18) >> 31))) & 0xFFFFFFF8);
        if ( v19 >= 7993 )
        {
          v21 = (2 * (((int)(a2 - v18) >> 3) + ((unsigned int)((int)(a2 - v18) >> 31) >> 30))) & 0xFFFFFFF8;
          v13 = sub_60893C18(
                  v18,
                  v18 + v21,
                  v18 + ((4 * (((int)(a2 - v18) >> 3) + ((a2 - v18) >> 31))) & 0xFFFFFFF8),
                  v20 + v21,
                  a2 - 8,
                  a3);
          v5 = a2 - 16;
          goto LABEL_47;
        }
        v22 = *(float *)v20;
        v23 = *(float *)v18;
        if ( *(float *)v20 >= 0.0 )
          v24 = v22 < v23;
        else
          v24 = v22 > v23;
        v25 = *v7;
        if ( v22 >= 0.0 )
        {
          v26 = v25 < v22;
          if ( !v24 )
          {
LABEL_35:
            v13 = 0;
            if ( !v26 )
              goto LABEL_47;
            v30 = *(float *)v20;
            v31 = *(_DWORD *)(v20 + 4);
            v32 = *(_DWORD *)(a2 - 4);
            *(float *)v20 = *v7;
            *(_DWORD *)(v20 + 4) = v32;
            *v7 = v30;
            *(_DWORD *)(a2 - 4) = v31;
            v33 = *(float *)v20;
            v34 = *(float *)v18;
            if ( *(float *)v20 >= 0.0 )
            {
              v13 = 1;
              if ( v33 >= v34 )
                goto LABEL_47;
            }
            else
            {
              v13 = 1;
              if ( v33 <= v34 )
                goto LABEL_47;
            }
            v37 = *(float *)v18;
            v38 = *(_DWORD *)(v18 + 4);
            v39 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)v18 = *(_DWORD *)v20;
            *(_DWORD *)(v18 + 4) = v39;
            *(float *)v20 = v37;
            *(_DWORD *)(v20 + 4) = v38;
            goto LABEL_46;
          }
        }
        else
        {
          v26 = v25 > v22;
          if ( !v24 )
            goto LABEL_35;
        }
        v27 = *(float *)v18;
        v28 = *(_DWORD *)(v18 + 4);
        if ( v26 )
        {
          v29 = *(_DWORD *)(a2 - 4);
          *(float *)v18 = *v7;
          *(_DWORD *)(v18 + 4) = v29;
          *v7 = v27;
          *(_DWORD *)(a2 - 4) = v28;
          v13 = 1;
          goto LABEL_47;
        }
        v35 = *(_DWORD *)(v20 + 4);
        *(_DWORD *)v18 = *(_DWORD *)v20;
        *(_DWORD *)(v18 + 4) = v35;
        *(float *)v20 = v27;
        *(_DWORD *)(v20 + 4) = v28;
        v36 = *v7;
        if ( v27 >= 0.0 )
        {
          v13 = 1;
          if ( v36 >= v27 )
            goto LABEL_47;
        }
        else
        {
          v13 = 1;
          if ( v36 <= v27 )
            goto LABEL_47;
        }
        v40 = *(_DWORD *)(a2 - 4);
        *(float *)v20 = *v7;
        *(_DWORD *)(v20 + 4) = v40;
        *v7 = v27;
        *(_DWORD *)(a2 - 4) = v28;
LABEL_46:
        v13 = 2;
LABEL_47:
        v41 = *(float *)v18;
        v42 = *(float *)v20;
        if ( *(float *)v18 >= 0.0 )
        {
          if ( v41 < v42 )
          {
LABEL_16:
            v17 = a2 - 8;
            goto LABEL_99;
          }
        }
        else if ( v41 > v42 )
        {
          goto LABEL_16;
        }
        if ( v18 == v5 )
          goto LABEL_62;
        v17 = v5;
        if ( v42 >= 0.0 )
        {
          while ( *(float *)v17 >= v42 )
          {
            v17 -= 8;
            if ( v18 == v17 )
              goto LABEL_62;
          }
LABEL_98:
          v58 = *(float *)v18;
          v59 = *(_DWORD *)(v18 + 4);
          v60 = *(_DWORD *)(v17 + 4);
          ++v13;
          *(_DWORD *)v18 = *(_DWORD *)v17;
          *(_DWORD *)(v18 + 4) = v60;
          *(float *)v17 = v58;
          *(_DWORD *)(v17 + 4) = v59;
LABEL_99:
          v61 = v18 + 8;
          if ( v18 + 8 < v17 )
          {
            while ( 1 )
            {
              v66 = *(float *)v20;
              if ( *(float *)v20 < 0.0 )
              {
                while ( 1 )
                {
                  v68 = *(float *)v61;
                  if ( *(float *)v61 >= 0.0 )
                  {
                    if ( v68 >= v66 )
                      goto LABEL_117;
                  }
                  else if ( v68 <= v66 )
                  {
                    goto LABEL_117;
                  }
                  v61 += 8;
                }
              }
              v61 -= 8;
              do
              {
                v67 = *(float *)(v61 + 8);
                v61 += 8;
              }
              while ( v67 < v66 );
LABEL_117:
              if ( v66 >= 0.0 )
              {
                do
                {
                  v62 = *(float *)(v17 - 8);
                  v17 -= 8;
                }
                while ( v62 >= v66 );
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v17 -= 8;
                    v69 = *(float *)v17;
                    if ( *(float *)v17 < 0.0 )
                      break;
                    if ( v69 < v66 )
                      goto LABEL_104;
                  }
                }
                while ( v69 <= v66 );
              }
LABEL_104:
              if ( v61 > v17 )
                break;
              v63 = *(float *)v61;
              v64 = *(_DWORD *)(v61 + 4);
              v65 = *(_DWORD *)(v17 + 4);
              ++v13;
              if ( v20 == v61 )
                v20 = v17;
              *(_DWORD *)v61 = *(_DWORD *)v17;
              *(_DWORD *)(v61 + 4) = v65;
              *(float *)v17 = v63;
              *(_DWORD *)(v17 + 4) = v64;
              v61 += 8;
            }
          }
          if ( v61 != v20 )
          {
            v8 = *(float *)v20;
            v9 = *(float *)v61;
            if ( *(float *)v20 >= 0.0 )
            {
              if ( v8 >= v9 )
                goto LABEL_10;
LABEL_9:
              v10 = *(float *)v61;
              v11 = *(_DWORD *)(v61 + 4);
              v12 = *(_DWORD *)(v20 + 4);
              ++v13;
              *(_DWORD *)v61 = *(_DWORD *)v20;
              *(_DWORD *)(v61 + 4) = v12;
              *(float *)v20 = v10;
              *(_DWORD *)(v20 + 4) = v11;
              goto LABEL_10;
            }
            if ( v8 > v9 )
              goto LABEL_9;
          }
LABEL_10:
          if ( !v13 )
          {
            a1 = v61 + 8;
            v14 = sub_60894060(v18, v61, a3);
            result = sub_60894060(v61 + 8, a2, a3);
            if ( result )
            {
              a2 = v61;
              a1 = v18;
              if ( v14 != 1 )
                continue;
              return result;
            }
            v16 = v14 == 0;
            v5 = a2 - 16;
            if ( !v16 )
              goto LABEL_18;
          }
          if ( (int)(v61 - v18) >= (int)(a2 - v61) )
          {
            sub_60893098(v61 + 8, a2, a3);
            a2 = v61;
            a1 = v18;
            continue;
          }
          sub_60893098(v18, v61, a3);
          v5 = a2 - 16;
          a1 = v61 + 8;
          goto LABEL_18;
        }
        v17 = v5;
        do
        {
          v43 = *(float *)v17;
          if ( *(float *)v17 >= 0.0 )
          {
            if ( v43 < v42 )
              goto LABEL_98;
          }
          else if ( v43 > v42 )
          {
            goto LABEL_98;
          }
          v17 -= 8;
        }
        while ( v18 != v17 );
LABEL_62:
        v44 = *v7;
        result = v18 + 8;
        if ( v41 >= 0.0 )
        {
          if ( v41 >= v44 )
            goto LABEL_66;
          goto LABEL_78;
        }
        if ( v41 > v44 )
          goto LABEL_78;
LABEL_66:
        if ( (float *)result != v7 )
        {
          if ( v41 < 0.0 )
          {
            do
            {
              v45 = *(float *)result;
              if ( *(float *)result >= 0.0 )
              {
                if ( v41 < v45 )
                  goto LABEL_77;
              }
              else if ( v41 > v45 )
              {
                goto LABEL_77;
              }
              result += 8;
            }
            while ( result + v6 != 8 );
            return result;
          }
          while ( v41 >= *(float *)result )
          {
            result += 8;
            if ( result + v6 == 8 )
              return result;
          }
LABEL_77:
          v46 = *(float *)result;
          v47 = *(_DWORD *)(result + 4);
          v48 = *(_DWORD *)(a2 - 4);
          *(float *)result = *v7;
          *(_DWORD *)(result + 4) = v48;
          result += 8;
          *v7 = v46;
          *(_DWORD *)(a2 - 4) = v47;
LABEL_78:
          if ( (float *)result != v7 )
          {
            v49 = a2 - 8;
            while ( 1 )
            {
              v54 = *(float *)v18;
              if ( *(float *)v18 < 0.0 )
                break;
              result -= 8;
              do
              {
                v55 = *(float *)(result + 8);
                result += 8;
              }
              while ( v54 >= v55 );
LABEL_94:
              if ( v54 >= 0.0 )
              {
                do
                {
                  v50 = *(float *)(v49 - 8);
                  v49 -= 8;
                }
                while ( v54 < v50 );
              }
              else
              {
                do
                {
                  while ( 1 )
                  {
                    v49 -= 8;
                    v57 = *(float *)v49;
                    if ( *(float *)v49 < 0.0 )
                      break;
                    if ( v54 >= v57 )
                      goto LABEL_83;
                  }
                }
                while ( v54 > v57 );
              }
LABEL_83:
              if ( result >= v49 )
              {
                v18 = result;
                goto LABEL_20;
              }
              v51 = *(float *)result;
              v52 = *(_DWORD *)(result + 4);
              v53 = *(_DWORD *)(v49 + 4);
              *(_DWORD *)result = *(_DWORD *)v49;
              *(_DWORD *)(result + 4) = v53;
              *(float *)v49 = v51;
              *(_DWORD *)(v49 + 4) = v52;
              result += 8;
            }
            while ( 1 )
            {
              v56 = *(float *)result;
              if ( *(float *)result >= 0.0 )
              {
                if ( v54 < v56 )
                  goto LABEL_94;
              }
              else if ( v54 > v56 )
              {
                goto LABEL_94;
              }
              result += 8;
            }
          }
        }
        return result;
    }
  }
}

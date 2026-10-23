/* sub_6021B11C
 * address: 0x6021B11C   size: 1016   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021B11C(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s1
  int result; // r0
  float v6; // r8
  float v7; // r7
  float v8; // r6
  float v9; // s16
  float v10; // s20
  float v11; // s18
  float v12; // s22
  float v13; // s26
  float v14; // s24
  float v15; // s0
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r2
  float v19; // s8
  float v20; // s12
  float v21; // s0
  float v22; // s2
  float v23; // r0
  float v24; // s16
  float v25; // s18
  float v26; // s20
  int v27; // r6
  int v28; // r7
  int v29; // r8
  float v30; // s0
  float v31; // s6
  float v32; // s2
  float v33; // s4
  float v34; // s8
  float v35; // s10
  float v36; // r0
  float *v37; // r2
  float v38; // s2
  float v39; // s0
  float v40; // s4
  float v41; // s2
  float v42; // s18
  int v43; // r0
  float v44; // s20
  float v45; // s22
  float v46; // s0
  float v47; // s4
  float v48; // s0
  int v49; // [sp+8h] [bp-60h]
  int v50; // [sp+Ch] [bp-5Ch]
  int v51; // [sp+10h] [bp-58h]
  int v52; // [sp+14h] [bp-54h] BYREF
  int v53; // [sp+18h] [bp-50h]
  int v54; // [sp+1Ch] [bp-4Ch]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v52 = -1;
  v53 = -1;
  v54 = -1;
  sub_6019EC34(&v52, (_DWORD *)(v2 + 1032));
  result = FIELD_U32(a1, 856) - 1;
  switch ( FIELD_U32(a1, 856) )
  {
    case 1:
      v6 = FIELD_F32(a1, 700);
      FIELD_F32(a1, 840) = v6;
      v7 = FIELD_F32(a1, 704);
      FIELD_F32(a1, 844) = v7;
      v8 = FIELD_F32(a1, 708);
      FIELD_F32(a1, 848) = v8;
      FIELD_U32(a1, 852) = FIELD_U32(a1, 780);
      v9 = FIELD_F32(a1, 728);
      v10 = FIELD_F32(a1, 732);
      v11 = FIELD_F32(a1, 628);
      v12 = FIELD_F32(a1, 632);
      v13 = FIELD_F32(a1, 636);
      v14 = FIELD_F32(a1, 724);
      sub_6021A000((float *)a1);
      if ( v52 == 8 )
        v15 = 0.7;
      else
        v15 = FIELD_F32(v2, 84) / FIELD_F32(a1, 1348);
      v19 = v12 + v9;
      v20 = v11 + v14;
      v21 = FIELD_F32(a1, 1316) * v15;
      FIELD_F32(a1, 780) = v21;
      v22 = FIELD_F32(a1, 776);
      if ( v21 >= v22 )
      {
        v21 = FIELD_F32(a1, 776);
        FIELD_F32(a1, 780) = v22;
      }
      if ( v21 >= 0.0 )
      {
        v23 = v21;
      }
      else
      {
        v23 = 0.0;
        FIELD_U32(a1, 780) = 0;
      }
      FIELD_F32(a1, 916) = v23;
      v24 = (float)(v13 + v10) + v8;
      v25 = v19 + v7;
      v26 = v20 + v6;
      FIELD_U8(a1, 1451) = 0;
      v27 = FIELD_U32(a1, 724);
      v28 = FIELD_U32(a1, 728);
      v29 = FIELD_U32(a1, 732);
      if ( v53 )
        ((void (__fastcall *)(int))loc_6021A420)(a1);
      else
        ((void (__fastcall *)(int))loc_6021A0EC)(a1);
      v30 = FIELD_F32(a1, 732);
      v31 = FIELD_F32(a1, 636);
      v32 = FIELD_F32(a1, 728);
      v33 = FIELD_F32(a1, 632);
      v34 = FIELD_F32(a1, 628);
      v35 = FIELD_F32(a1, 724);
      v36 = FIELD_F32(a1, 852);
      v37 = (float *)(a1 + 1264);
      FIELD_F32(a1, 780) = v36;
      FIELD_U32(a1, 724) = v27;
      FIELD_U32(a1, 728) = v28;
      FIELD_U32(a1, 732) = v29;
      v38 = v33 + v32;
      v39 = (float)(v31 + v30) - v24;
      v40 = (float)(v34 + v35) - v26;
      v41 = v38 - v25;
      v42 = 0.0;
      FIELD_F32(a1, 868) = -v40;
      FIELD_F32(a1, 872) = -v41;
      FIELD_F32(a1, 876) = -v39;
      FIELD_U32(a1, 880) = 0;
      FIELD_U32(a1, 884) = 0;
      FIELD_U32(a1, 888) = 0;
      FIELD_F32(a1, 700) = -v40;
      FIELD_F32(a1, 704) = -v41;
      FIELD_F32(a1, 708) = -v39;
      FIELD_F32(a1, 892) = (float)(0.0 - v40) * 0.5;
      FIELD_F32(a1, 896) = (float)(0.0 - v41) * 0.5;
      FIELD_F32(a1, 900) = (float)(0.0 - v39) * 0.5;
      FIELD_F32(a1, 904) = v36;
      FIELD_U32(a1, 908) = FIELD_U32(a1, 792);
      FIELD_U32(a1, 912) = FIELD_U32(a1, 784);
      FIELD_F32(a1, 920) = v36 - v36;
      if ( v52 == 8 )
        v37 = (float *)(a1 + 1268);
      if ( v53 )
      {
        if ( v52 == 7 )
        {
          v43 = 1304;
        }
        else if ( v52 == 4 )
        {
          v43 = 1300;
        }
        else
        {
          v43 = 1308;
        }
        v42 = *(float *)(a1 + v43);
      }
      v44 = FIELD_F32(v2, 84);
      v45 = FIELD_F32(a1, 1296);
      v46 = (float)((float)((float)(v42 + v45) - v44) / sinf(FIELD_F32(a1, 1340) + *v37)) - FIELD_F32(a1, 1436);
      FIELD_F32(a1, 924) = v46;
      v47 = (float)(FIELD_F32(a1, 908) + FIELD_F32(a1, 920)) * 0.5;
      v48 = (float)(FIELD_F32(a1, 912) + v46) * 0.5;
      FIELD_F32(a1, 928) = (float)(FIELD_F32(a1, 904) + FIELD_F32(a1, 916)) * 0.5;
      FIELD_F32(a1, 932) = v47;
      FIELD_F32(a1, 936) = v48;
      FIELD_U32(a1, 860) = 0;
      sub_601FEE28(dword_60C8C188);
      FIELD_U32(a1, 864) = sub_60170538();
      result = 2;
      break;
    case 2:
      sub_60833AF0(v3, v4);
      FIELD_U32(a1, 780) = v49;
      FIELD_U32(a1, 792) = v50;
      FIELD_U32(a1, 784) = v51;
      FIELD_U8(a1, 1451) = 0;
      result = FIELD_U32(a1, 860);
      FIELD_U32(a1, 860) = result + 1;
      if ( result < FIELD_U32(a1, 864) )
        return result;
      result = 3;
      break;
    case 3:
      v16 = (_DWORD *)sub_601FEE28(dword_60C8C188);
      v17 = v16[331];
      v18 = v16[332];
      result = v16[333];
      FIELD_U32(a1, 700) = v17;
      FIELD_U32(a1, 704) = v18;
      FIELD_U32(a1, 708) = result;
      return result;
    case 4:
      sub_60833AF0(v3, v4);
      result = FIELD_U32(a1, 860);
      FIELD_U32(a1, 860) = result + 1;
      if ( result < FIELD_U32(a1, 864) )
        return result;
      result = 0;
      break;
    default:
      return result;
  }
  FIELD_U32(a1, 856) = result;
  return result;
}

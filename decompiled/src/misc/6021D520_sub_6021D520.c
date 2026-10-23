/* sub_6021D520
 * address: 0x6021D520   size: 984   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021D520(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s1
  float v5; // s0
  float v6; // s1
  float v7; // s0
  float v8; // s1
  float v9; // s20
  float v10; // s16
  float v11; // s18
  float v12; // s22
  float v13; // s24
  float v14; // s26
  float v15; // s28
  float v16; // s30
  float v17; // s17
  float v18; // s16
  float v19; // s18
  float v20; // s20
  float v21; // r0
  float v22; // s2
  float v23; // r1
  int v24; // r5
  int v25; // r0
  float v26; // s10
  float v27; // s0
  float v28; // s2
  float v29; // s4
  float v30; // s6
  float v31; // r2
  float v32; // s1
  float v33; // r1
  float v34; // r2
  float v35; // s4
  float v36; // s6
  float v37; // s6
  float v38; // s0
  int v40; // [sp+8h] [bp-68h]
  int v41; // [sp+Ch] [bp-64h]
  int v42; // [sp+10h] [bp-60h]
  int v43; // [sp+14h] [bp-5Ch] BYREF
  int v44; // [sp+18h] [bp-58h]
  int v45; // [sp+1Ch] [bp-54h]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  v43 = -1;
  v44 = -1;
  v45 = -1;
  sub_6019EC34(&v43, (_DWORD *)(v2 + 1032));
  if ( FIELD_U8(a1, 1450) )
  {
    sub_60833AF0(v3, v4);
    sub_60833AF0(v5, v6);
    FIELD_U32(a1, 784) = v40;
    FIELD_U32(a1, 792) = v41;
    FIELD_U32(a1, 780) = v42;
    sub_60833AF0(v7, v8);
    FIELD_U32(a1, 724) = v40;
    FIELD_U32(a1, 728) = v41;
    FIELD_U32(a1, 732) = v42;
    if ( v44 )
      ((void (__fastcall *)(int, int))loc_6021A420)(a1, v43);
    else
      ((void (__fastcall *)(int))loc_6021A0EC)(a1);
    v24 = 0;
    FIELD_U8(a1, 1451) = 0;
    v25 = FIELD_U32(a1, 860);
    FIELD_U32(a1, 860) = v25 + 1;
    if ( v25 >= FIELD_U32(a1, 864) )
    {
      v24 = 1;
      FIELD_U32(a1, 700) = 0;
      FIELD_U32(a1, 704) = 0;
      FIELD_U32(a1, 708) = 0;
      FIELD_U8(a1, 1449) = 0;
      FIELD_U8(a1, 1447) = 0;
      FIELD_U8(a1, 1452) = 0;
      FIELD_U8(a1, 1442) = 0;
      FIELD_U8(a1, 1450) = 0;
    }
  }
  else if ( !FIELD_U8(a1, 1447) && FIELD_F32(a1, 792) == 0.0 )
  {
    return 1;
  }
  else
  {
    FIELD_U8(a1, 1451) = 0;
    v9 = FIELD_F32(a1, 700);
    v10 = FIELD_F32(a1, 708);
    v11 = FIELD_F32(a1, 704);
    v12 = FIELD_F32(a1, 724);
    v13 = FIELD_F32(a1, 728);
    v14 = FIELD_F32(a1, 732);
    v15 = FIELD_F32(a1, 632);
    v16 = FIELD_F32(a1, 636);
    v17 = FIELD_F32(a1, 628);
    sub_6021A000((float *)a1);
    FIELD_U32(a1, 868) = FIELD_U32(a1, 784);
    FIELD_U32(a1, 872) = FIELD_U32(a1, 792);
    FIELD_U32(a1, 876) = FIELD_U32(a1, 780);
    FIELD_U32(a1, 904) = FIELD_U32(a1, 724);
    FIELD_U32(a1, 908) = FIELD_U32(a1, 728);
    FIELD_U32(a1, 912) = FIELD_U32(a1, 732);
    FIELD_U32(a1, 940) = FIELD_U32(a1, 700);
    FIELD_U32(a1, 944) = FIELD_U32(a1, 704);
    FIELD_U32(a1, 948) = FIELD_U32(a1, 708);
    FIELD_U32(a1, 792) = 0;
    ((void (__fastcall *)(int))loc_60219E1C)(a1);
    FIELD_U32(a1, 652) = 0;
    FIELD_U32(a1, 656) = 0;
    FIELD_U32(a1, 660) = 0;
    v18 = (float)(v16 + v14) + v10;
    v19 = (float)(v15 + v13) + v11;
    v20 = (float)(v17 + v12) + v9;
    if ( v44 )
    {
      ((void (__fastcall *)(int, int))loc_6021A420)(a1, v43);
      v21 = FIELD_F32(a1, 724);
      FIELD_F32(a1, 904) = v21;
      v22 = v21;
      v23 = FIELD_F32(a1, 700);
      FIELD_F32(a1, 940) = v23;
    }
    else
    {
      ((void (__fastcall *)(int))loc_6021A0EC)(a1);
      v22 = FIELD_F32(a1, 724);
      v23 = FIELD_F32(a1, 700);
      v21 = v22;
    }
    v26 = FIELD_F32(a1, 728);
    v27 = FIELD_F32(a1, 732);
    v24 = 0;
    v28 = (float)(FIELD_F32(a1, 628) + v22) - v20;
    v29 = (float)(FIELD_F32(a1, 632) + v26) - v19;
    v30 = (float)(FIELD_F32(a1, 636) + v27) - v18;
    FIELD_F32(a1, 736) = -v28;
    FIELD_F32(a1, 740) = -v29;
    FIELD_F32(a1, 744) = -v30;
    FIELD_F32(a1, 748) = v23;
    v31 = FIELD_F32(a1, 704);
    FIELD_F32(a1, 752) = v31;
    v32 = FIELD_F32(a1, 708);
    FIELD_F32(a1, 756) = v32;
    FIELD_F32(a1, 760) = (float)(v23 - v28) * 0.5;
    FIELD_F32(a1, 764) = (float)(v31 - v29) * 0.5;
    FIELD_F32(a1, 768) = (float)(v32 - v30) * 0.5;
    FIELD_F32(a1, 700) = -v28;
    FIELD_F32(a1, 704) = -v29;
    FIELD_F32(a1, 708) = -v30;
    v33 = FIELD_F32(a1, 784);
    FIELD_F32(a1, 880) = v33;
    FIELD_U32(a1, 884) = 0;
    v34 = FIELD_F32(a1, 780);
    FIELD_F32(a1, 888) = v34;
    v35 = FIELD_F32(a1, 872);
    v36 = FIELD_F32(a1, 876) + v34;
    FIELD_F32(a1, 892) = (float)(FIELD_F32(a1, 868) + v33) * 0.5;
    FIELD_F32(a1, 896) = (float)(v35 + 0.0) * 0.5;
    FIELD_F32(a1, 900) = v36 * 0.5;
    FIELD_F32(a1, 916) = v21;
    FIELD_F32(a1, 920) = v26;
    FIELD_F32(a1, 924) = v27;
    v37 = (float)(FIELD_F32(a1, 908) + v26) * 0.5;
    v38 = (float)(FIELD_F32(a1, 912) + v27) * 0.5;
    FIELD_F32(a1, 928) = (float)(FIELD_F32(a1, 904) + v21) * 0.5;
    FIELD_F32(a1, 932) = v37;
    FIELD_F32(a1, 936) = v38;
    FIELD_F32(a1, 792) = v35;
    FIELD_U32(a1, 864) = 10;
    FIELD_U32(a1, 860) = 0;
    FIELD_U8(a1, 1450) = 1;
    FIELD_U8(a1, 1441) = 0;
    FIELD_U32(a1, 1252) = 0;
    FIELD_U32(a1, 1256) = 0;
    FIELD_U32(a1, 1260) = 0;
    memset((void *)(a1 + 1180), 0, 68);
  }
  return v24;
}

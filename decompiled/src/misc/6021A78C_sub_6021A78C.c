/* sub_6021A78C
 * address: 0x6021A78C   size: 724   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021A78C(int a1)
{
  int v2; // r0
  int v3; // r5
  float v4; // s0
  float v5; // s2
  float v6; // s4
  float *v7; // r0
  float v8; // r1
  float v9; // r2
  float v10; // r0
  float v11; // s2
  float v12; // s4
  float v13; // s0
  float v14; // r0
  float v15; // s2
  float v16; // s4
  float v17; // s6
  float v18; // r1
  float v19; // r2
  float v20; // r3
  float v21; // r1
  float v22; // r2
  float v23; // r3

  FIELD_U8(dword_60C8C188, 3230) = 0;
  sub_6021A000((float *)a1);
  v2 = dword_60C8C188;
  FIELD_U8(dword_60C8C188, 3230) = 1;
  FIELD_U8(a1, 1449) = 0;
  FIELD_U8(a1, 1447) = 0;
  v3 = FIELD_U32(a1, 1340);
  sub_601FEE28(v2);
  FIELD_F32(a1, 1340) = sub_601704E4();
  ((void (__fastcall *)(int))loc_60219E1C)(a1);
  FIELD_U8(a1, 1451) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 656) = 0;
  FIELD_U32(a1, 660) = 0;
  if ( FIELD_U32(dword_60CC6D78, 416) )
    ((void (__fastcall *)(int, _DWORD))loc_6021A420)(a1, FIELD_U32(dword_60CC6D78, 412));
  else
    ((void (__fastcall *)(int))loc_6021A0EC)(a1);
  FIELD_U32(a1, 1340) = v3;
  v4 = 0.0;
  FIELD_U32(a1, 792) = 0;
  v5 = FIELD_F32(a1, 780);
  v6 = FIELD_F32(a1, 776);
  if ( (float)(v5 + 0.0) >= v6 )
  {
    v4 = v6 - v5;
    FIELD_F32(a1, 792) = v6 - v5;
    FIELD_U8(a1, 1454) = 1;
  }
  FIELD_F32(a1, 796) = v5 + v4;
  FIELD_U32(a1, 988) = FIELD_U32(a1, 628);
  FIELD_U32(a1, 992) = FIELD_U32(a1, 632);
  FIELD_U32(a1, 996) = FIELD_U32(a1, 636);
  v7 = (float *)sub_601FEE28(dword_60C8C188);
  v8 = v7[166];
  FIELD_F32(a1, 628) = v8;
  v9 = v7[167];
  FIELD_F32(a1, 632) = v9;
  v10 = v7[168];
  FIELD_F32(a1, 636) = v10;
  FIELD_F32(a1, 976) = v8;
  FIELD_F32(a1, 980) = v9;
  FIELD_F32(a1, 984) = v10;
  v11 = (float)(v9 + FIELD_F32(a1, 992)) * 0.5;
  v12 = (float)(v10 + FIELD_F32(a1, 996)) * 0.5;
  FIELD_F32(a1, 1000) = (float)(v8 + FIELD_F32(a1, 988)) * 0.5;
  FIELD_F32(a1, 1004) = v11;
  FIELD_F32(a1, 1008) = v12;
  FIELD_U32(a1, 868) = 0;
  FIELD_U32(a1, 872) = 0;
  FIELD_U32(a1, 876) = 0;
  FIELD_U32(a1, 880) = FIELD_U32(a1, 784);
  sub_601FEE28(dword_60C8C188);
  v13 = sub_601704E4();
  FIELD_F32(a1, 884) = v13;
  v14 = FIELD_F32(a1, 780);
  FIELD_F32(a1, 888) = v14;
  v15 = FIELD_F32(a1, 868);
  v16 = FIELD_F32(a1, 872);
  v17 = FIELD_F32(a1, 876);
  FIELD_F32(a1, 892) = (float)(v15 + FIELD_F32(a1, 880)) * 0.5;
  FIELD_F32(a1, 896) = (float)(v16 + v13) * 0.5;
  FIELD_F32(a1, 900) = (float)(v17 + v14) * 0.5;
  FIELD_F32(a1, 784) = v15;
  FIELD_F32(a1, 1340) = v16;
  FIELD_F32(a1, 780) = v17;
  v18 = FIELD_F32(a1, 724);
  FIELD_F32(a1, 916) = v18;
  v19 = FIELD_F32(a1, 728);
  FIELD_F32(a1, 920) = v19;
  v20 = FIELD_F32(a1, 732);
  FIELD_F32(a1, 924) = v20;
  FIELD_U32(a1, 904) = 0;
  FIELD_U32(a1, 908) = 0;
  FIELD_U32(a1, 912) = 0;
  FIELD_U32(a1, 724) = 0;
  FIELD_U32(a1, 728) = 0;
  FIELD_U32(a1, 732) = 0;
  FIELD_F32(a1, 928) = (float)(v18 + 0.0) * 0.5;
  FIELD_F32(a1, 932) = (float)(v19 + 0.0) * 0.5;
  FIELD_F32(a1, 936) = (float)(v20 + 0.0) * 0.5;
  v21 = FIELD_F32(a1, 700);
  FIELD_F32(a1, 952) = v21;
  v22 = FIELD_F32(a1, 704);
  FIELD_F32(a1, 956) = v22;
  v23 = FIELD_F32(a1, 708);
  FIELD_F32(a1, 960) = v23;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 948) = 0;
  FIELD_F32(a1, 964) = (float)(v21 + 0.0) * 0.5;
  FIELD_F32(a1, 968) = (float)(v22 + 0.0) * 0.5;
  FIELD_F32(a1, 972) = (float)(v23 + 0.0) * 0.5;
  sub_601FF5A8(dword_60C8C188, 1);
  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 864) = 10;
  return 10;
}

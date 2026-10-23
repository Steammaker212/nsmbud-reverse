/* sub_6021CC78
 * address: 0x6021CC78   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021CC78(int a1)
{
  float *v2; // r0
  float v3; // r1
  float v4; // r2
  float v5; // r0
  float v6; // s6
  float v7; // s4
  float v8; // s4
  float v9; // r6
  float v10; // s12
  float v11; // r6
  float v12; // r5
  float v13; // s4
  float v14; // r1
  float v15; // r2
  float v16; // r3

  FIELD_U32(a1, 988) = FIELD_U32(a1, 628);
  FIELD_U32(a1, 992) = FIELD_U32(a1, 632);
  FIELD_U32(a1, 996) = FIELD_U32(a1, 636);
  v2 = (float *)sub_601FEE28(dword_60C8C188);
  v3 = v2[166];
  FIELD_F32(a1, 628) = v3;
  v4 = v2[167];
  FIELD_F32(a1, 632) = v4;
  v5 = v2[168];
  FIELD_F32(a1, 636) = v5;
  FIELD_F32(a1, 976) = v3;
  FIELD_F32(a1, 980) = v4;
  FIELD_F32(a1, 984) = v5;
  v6 = v5 + FIELD_F32(a1, 996);
  v7 = (float)(v4 + FIELD_F32(a1, 992)) * 0.5;
  FIELD_F32(a1, 1000) = (float)(v3 + FIELD_F32(a1, 988)) * 0.5;
  FIELD_F32(a1, 1004) = v7;
  FIELD_F32(a1, 1008) = v6 * 0.5;
  FIELD_U32(a1, 868) = 0;
  FIELD_U32(a1, 872) = 0;
  FIELD_U32(a1, 876) = 0;
  v8 = FIELD_F32(a1, 784);
  FIELD_F32(a1, 880) = v8;
  v9 = FIELD_F32(a1, 1340);
  FIELD_F32(a1, 884) = v9;
  v10 = FIELD_F32(a1, 780);
  FIELD_F32(a1, 888) = v10;
  FIELD_F32(a1, 892) = (float)(v8 + 0.0) * 0.5;
  FIELD_F32(a1, 896) = (float)(v9 + 0.0) * 0.5;
  FIELD_F32(a1, 900) = (float)(v10 + 0.0) * 0.5;
  FIELD_U32(a1, 784) = 0;
  FIELD_U32(a1, 1340) = 0;
  FIELD_U32(a1, 780) = 0;
  v11 = FIELD_F32(a1, 724);
  FIELD_F32(a1, 916) = v11;
  v12 = FIELD_F32(a1, 728);
  FIELD_F32(a1, 920) = v12;
  v13 = FIELD_F32(a1, 732);
  FIELD_F32(a1, 924) = v13;
  FIELD_U32(a1, 904) = 0;
  FIELD_U32(a1, 908) = 0;
  FIELD_U32(a1, 912) = 0;
  FIELD_U32(a1, 724) = 0;
  FIELD_U32(a1, 728) = 0;
  FIELD_U32(a1, 732) = 0;
  FIELD_F32(a1, 928) = (float)(v11 + 0.0) * 0.5;
  FIELD_F32(a1, 932) = (float)(v12 + 0.0) * 0.5;
  FIELD_F32(a1, 936) = (float)(v13 + 0.0) * 0.5;
  v14 = FIELD_F32(a1, 700);
  FIELD_F32(a1, 952) = v14;
  v15 = FIELD_F32(a1, 704);
  FIELD_F32(a1, 956) = v15;
  v16 = FIELD_F32(a1, 708);
  FIELD_F32(a1, 960) = v16;
  FIELD_U32(a1, 940) = 0;
  FIELD_U32(a1, 944) = 0;
  FIELD_U32(a1, 948) = 0;
  FIELD_F32(a1, 964) = (float)(v14 + 0.0) * 0.5;
  FIELD_F32(a1, 968) = (float)(v15 + 0.0) * 0.5;
  FIELD_F32(a1, 972) = (float)(v16 + 0.0) * 0.5;
  sub_601FF5A8(dword_60C8C188, 1);
  FIELD_U8(a1, 1445) = FIELD_U8(a1, 1444);
  FIELD_U8(a1, 1444) = 0;
  return 0;
}

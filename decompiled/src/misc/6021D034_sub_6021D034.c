/* sub_6021D034
 * address: 0x6021D034   size: 640   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6021D034(int a1)
{
  int v2; // r0
  float *v3; // r0
  float v4; // r1
  float v5; // r2
  float v6; // r0
  float v7; // r3
  float v8; // r6
  float v9; // s6
  float v10; // r0
  float v11; // r1
  float v12; // r2
  float v13; // r0
  float v14; // r1
  float v15; // s6
  float *v16; // r0
  float v17; // r1
  float v18; // r2
  float v19; // r0
  float v20; // s4
  float v21; // s2
  int v23; // [sp+4h] [bp-2Ch] BYREF
  int v24; // [sp+8h] [bp-28h]
  int v25; // [sp+Ch] [bp-24h]

  FIELD_U8(a1, 1451) = 0;
  FIELD_U32(a1, 652) = 0;
  FIELD_U32(a1, 656) = 0;
  FIELD_U32(a1, 660) = 0;
  v2 = sub_601CF9C0(dword_60C8AEF0);
  v23 = -1;
  v24 = -1;
  v25 = -1;
  sub_6019EC34(&v23, (_DWORD *)(v2 + 1032));
  if ( v24 )
    ((void (__fastcall *)(int, int))loc_6021A420)(a1, v23);
  else
    ((void (__fastcall *)(int))loc_6021A0EC)(a1);
  v3 = (float *)sub_601FEE28(dword_60C8C188);
  v4 = v3[166];
  FIELD_F32(a1, 988) = v4;
  v5 = v3[167];
  FIELD_F32(a1, 992) = v5;
  v6 = v3[168];
  FIELD_F32(a1, 996) = v6;
  v7 = FIELD_F32(a1, 628);
  FIELD_F32(a1, 976) = v7;
  v8 = FIELD_F32(a1, 632);
  FIELD_F32(a1, 980) = v8;
  v9 = FIELD_F32(a1, 636);
  FIELD_F32(a1, 984) = v9;
  FIELD_F32(a1, 1000) = (float)(v7 + v4) * 0.5;
  FIELD_F32(a1, 1004) = (float)(v8 + v5) * 0.5;
  FIELD_F32(a1, 1008) = (float)(v9 + v6) * 0.5;
  v10 = FIELD_F32(a1, 700);
  FIELD_F32(a1, 904) = v10;
  v11 = FIELD_F32(a1, 704);
  FIELD_F32(a1, 908) = v11;
  v12 = FIELD_F32(a1, 708);
  FIELD_F32(a1, 912) = v12;
  FIELD_U32(a1, 916) = 0;
  FIELD_U32(a1, 920) = 0;
  FIELD_U32(a1, 924) = 0;
  FIELD_F32(a1, 928) = (float)(v10 + 0.0) * 0.5;
  FIELD_F32(a1, 932) = (float)(v11 + 0.0) * 0.5;
  FIELD_F32(a1, 936) = (float)(v12 + 0.0) * 0.5;
  FIELD_U32(a1, 880) = 0;
  FIELD_U32(a1, 884) = 0;
  FIELD_U32(a1, 888) = 0;
  v13 = FIELD_F32(a1, 784);
  FIELD_F32(a1, 868) = v13;
  v14 = FIELD_F32(a1, 1340);
  FIELD_F32(a1, 872) = v14;
  v15 = FIELD_F32(a1, 780);
  FIELD_F32(a1, 876) = v15;
  FIELD_F32(a1, 892) = (float)(v13 + 0.0) * 0.5;
  FIELD_F32(a1, 896) = (float)(v14 + 0.0) * 0.5;
  FIELD_F32(a1, 900) = (float)(v15 + 0.0) * 0.5;
  FIELD_U32(a1, 1012) = FIELD_U32(a1, 724);
  FIELD_U32(a1, 1016) = FIELD_U32(a1, 728);
  FIELD_U32(a1, 1020) = FIELD_U32(a1, 732);
  v16 = (float *)sub_601FEE28(dword_60C8C188);
  v17 = v16[334];
  FIELD_F32(a1, 1024) = v17;
  v18 = v16[335];
  FIELD_F32(a1, 1028) = v18;
  v19 = v16[336];
  FIELD_F32(a1, 1032) = v19;
  v20 = FIELD_F32(a1, 1020) + v19;
  v21 = (float)(FIELD_F32(a1, 1016) + v18) * 0.5;
  FIELD_F32(a1, 1036) = (float)(FIELD_F32(a1, 1012) + v17) * 0.5;
  FIELD_F32(a1, 1040) = v21;
  FIELD_F32(a1, 1044) = v20 * 0.5;
  FIELD_U8(dword_60C8C188, 3230) = 1;
  FIELD_U8(a1, 1445) = FIELD_U8(a1, 1444);
  FIELD_U8(a1, 1444) = 0;
  FIELD_U32(a1, 860) = 0;
  FIELD_U32(a1, 864) = 10;
  return 10;
}

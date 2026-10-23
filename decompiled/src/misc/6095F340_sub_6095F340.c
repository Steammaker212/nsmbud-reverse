/* sub_6095F340
 * address: 0x6095F340   size: 852   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095F340(int a1, int a2, __int64 *a3, _QWORD *a4, float a5, float a6, float a7)
{
  _QWORD *v14; // r9
  _QWORD *v15; // r10
  _QWORD *v16; // r0
  _QWORD *v17; // r5
  __int64 v18; // d16
  __int64 v19; // d17
  __int64 v20; // d17
  __int64 v21; // d17
  __int64 v22; // d17
  __int64 v23; // d17
  __int64 v24; // d17
  __int64 v25; // d17
  int v26; // r1
  double v27; // d0
  float v28; // s2
  __int64 v29; // d17
  __int64 v30; // d17
  __int64 v31; // d17
  __int64 v32; // d17
  __int64 v33; // d17
  __int64 v34; // d17
  __int64 v35; // d17
  int v37; // [sp+4h] [bp-74h]
  int v38; // [sp+8h] [bp-70h]
  int v39; // [sp+Ch] [bp-6Ch]
  int v40; // [sp+10h] [bp-68h]
  int v41; // [sp+14h] [bp-64h]
  int v42; // [sp+18h] [bp-60h]
  int v43; // [sp+1Ch] [bp-5Ch]
  int v44; // [sp+20h] [bp-58h]
  _BYTE v45[76]; // [sp+2Ch] [bp-4Ch] BYREF

  v14 = (_QWORD *)(a1 + 292);
  v15 = (_QWORD *)(a1 + 244);
  FIELD_F32(a1, 224) = a5;
  FIELD_F32(a1, 240) = a6;
  if ( FIELD_U32(a1, 60) == 2 )
    sub_60967204(a2, v15, v14, &dword_60B3B980);
  else
    sub_6096701C(a2, v15, v14, a3);
  FIELD_F32(a1, 208) = a7;
  sub_60964200(a1 + 68, a3, a4, a5, a6);
  v16 = a3 + 4;
  v18 = *a3;
  v19 = a3[1];
  v17 = a3 + 2;
  FIELD_U64(a1, 708) = v18;
  FIELD_U64(a1, 716) = v19;
  v20 = v17[1];
  FIELD_U64(a1, 724) = *v17;
  FIELD_U64(a1, 732) = v20;
  v21 = v16[1];
  FIELD_U64(a1, 740) = *v16;
  FIELD_U64(a1, 748) = v21;
  v22 = a4[1];
  FIELD_U64(a1, 756) = *a4;
  FIELD_U64(a1, 764) = v22;
  v23 = a4[3];
  FIELD_U64(a1, 772) = a4[2];
  FIELD_U64(a1, 780) = v23;
  v24 = a4[5];
  FIELD_U64(a1, 788) = a4[4];
  FIELD_U64(a1, 796) = v24;
  v25 = a4[7];
  FIELD_U64(a1, 804) = a4[6];
  FIELD_U64(a1, 812) = v25;
  v26 = FIELD_U8(a2, 112);
  FIELD_U8(a1, 1376) = v26;
  FIELD_U32(a1, 988) = 0;
  if ( v26 )
  {
    FIELD_U32(a1, 40) = sub_6095F0C4;
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 32) = sub_6095F06C;
    FIELD_U32(a1, 36) = 0;
    v27 = sub_6095F6B0(a1, a1 + 708, 1, &unk_60B3B93C, 0.0, 0.0);
    v44 = FIELD_U32(a1, 288);
    v37 = FIELD_U32(a1, 260);
    v38 = FIELD_U32(a1, 264);
    v39 = FIELD_U32(a1, 268);
    v40 = FIELD_U32(a1, 272);
    v41 = FIELD_U32(a1, 276);
    v42 = FIELD_U32(a1, 280);
    v43 = FIELD_U32(a1, 284);
    sub_609673FC(
      (int)v45,
      FIELD_U32(a1, 244),
      FIELD_U32(a1, 248),
      FIELD_U32(a1, 252),
      FIELD_U32(a1, 256),
      *(float *)&v27,
      *((float *)&v27 + 1),
      v28);
    ((void (__fastcall *)(int, int, int, _BYTE *, float, float, int, int, int, int, int, int, int, int, int))loc_6095FAFC)(
      a1,
      a1 + 708,
      a1 + 756,
      v45,
      (float)(FIELD_F32(a1, 800) - (float)(FIELD_F32(a1, 796) * FIELD_F32(a1, 224)))
    / (float)(FIELD_F32(a1, 816) - (float)(FIELD_F32(a1, 224) * FIELD_F32(a1, 812))),
      (float)(FIELD_F32(a1, 800) - (float)(FIELD_F32(a1, 796) * FIELD_F32(a1, 240)))
    / (float)(FIELD_F32(a1, 816) - (float)(FIELD_F32(a1, 812) * FIELD_F32(a1, 240))),
      1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    sub_609600C8(a1);
  }
  else
  {
    FIELD_U32(a1, 40) = sub_6096030C;
    FIELD_U32(a1, 44) = 0;
    FIELD_U32(a1, 32) = sub_60960688;
    FIELD_U32(a1, 36) = 0;
    v29 = v15[1];
    FIELD_U64(a1, 532) = *v15;
    FIELD_U64(a1, 540) = v29;
    v30 = FIELD_U64(a1, 268);
    FIELD_U64(a1, 548) = FIELD_U64(a1, 260);
    FIELD_U64(a1, 556) = v30;
    v31 = FIELD_U64(a1, 284);
    FIELD_U64(a1, 564) = FIELD_U64(a1, 276);
    FIELD_U64(a1, 572) = v31;
    v32 = v14[1];
    FIELD_U64(a1, 580) = *v14;
    FIELD_U64(a1, 588) = v32;
    v33 = FIELD_U64(a1, 316);
    FIELD_U64(a1, 596) = FIELD_U64(a1, 308);
    FIELD_U64(a1, 604) = v33;
    v34 = FIELD_U64(a1, 332);
    FIELD_U64(a1, 612) = FIELD_U64(a1, 324);
    FIELD_U64(a1, 620) = v34;
    v35 = FIELD_U64(a1, 348);
    FIELD_U64(a1, 628) = FIELD_U64(a1, 340);
    FIELD_U64(a1, 636) = v35;
    ((void (__fastcall *)(int, float, float))loc_6095FAFC)(a1, -1.0, 1.0);
  }
  FIELD_U32(a1, 820) = 2139095039;
  FIELD_U32(a1, 824) = 2139095039;
  FIELD_U32(a1, 828) = 2139095039;
  FIELD_U32(a1, 832) = -8388609;
  FIELD_U32(a1, 836) = -8388609;
  FIELD_U32(a1, 840) = -8388609;
  FIELD_U32(a1, 892) = 2139095039;
  FIELD_U32(a1, 896) = 2139095039;
  FIELD_U32(a1, 900) = 2139095039;
  FIELD_U32(a1, 904) = -8388609;
  FIELD_U32(a1, 908) = -8388609;
  FIELD_U32(a1, 912) = -8388609;
  FIELD_U32(a1, 844) = 2139095039;
  FIELD_U32(a1, 848) = 2139095039;
  FIELD_U32(a1, 852) = 2139095039;
  FIELD_U32(a1, 856) = -8388609;
  FIELD_U32(a1, 860) = -8388609;
  FIELD_U32(a1, 864) = -8388609;
  FIELD_U32(a1, 916) = 2139095039;
  FIELD_U32(a1, 920) = 2139095039;
  FIELD_U32(a1, 924) = 2139095039;
  FIELD_U32(a1, 928) = -8388609;
  FIELD_U32(a1, 932) = -8388609;
  FIELD_U32(a1, 936) = -8388609;
  FIELD_U32(a1, 868) = 2139095039;
  FIELD_U32(a1, 872) = 2139095039;
  FIELD_U32(a1, 876) = 2139095039;
  FIELD_U32(a1, 880) = -8388609;
  FIELD_U32(a1, 884) = -8388609;
  FIELD_U32(a1, 888) = -8388609;
  FIELD_U32(a1, 940) = 2139095039;
  FIELD_U32(a1, 944) = 2139095039;
  FIELD_U32(a1, 948) = 2139095039;
  FIELD_U32(a1, 952) = -8388609;
  FIELD_U32(a1, 956) = -8388609;
  FIELD_U32(a1, 960) = -8388609;
  return 2139095039;
}

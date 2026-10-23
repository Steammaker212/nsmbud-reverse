/* sub_605FC990
 * address: 0x605FC990   size: 1364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605FC990(_DWORD *a1)
{
  unsigned int v2; // r2
  int v3; // r0
  unsigned int v4; // r1
  int v5; // r0
  unsigned int v6; // s0
  float *v7; // r6
  float *v8; // r9
  unsigned int v9; // r1
  float *v10; // r10
  int v11; // r0
  int v12; // r5
  float *v13; // r5
  unsigned int v14; // t1
  float v15; // s0
  int v16; // r5
  float v17; // s0
  int v18; // r12
  unsigned int v19; // s0
  float v20; // s4
  float *v21; // r9
  bool v22; // zf
  float *v23; // lr
  float *v24; // r12
  float v25; // s0
  float *v26; // r0
  float *v27; // r11
  float *v28; // r3
  float v29; // s0
  ShapedColliderInfo v31[2]; // [sp+18h] [bp-60h] BYREF

  v2 = 8;
  a1[29] = 1136394240;
  a1[1541] = 0;
  a1[129] = 1132462080;
  a1[130] = 1132462080;
  a1[131] = 1142947840;
  a1[132] = 1142947840;
  v3 = a1[5];
  v4 = v3 & 0xF;
  v5 = (unsigned __int8)v3 >> 4;
  if ( !v4 )
    v4 = 8;
  if ( v5 )
    v2 = v5;
  v6 = v2;
  v7 = (float *)(a1 + 1708);
  v8 = (float *)(a1 + 1707);
  if ( v2 <= v4 )
    LOBYTE(v2) = v4;
  *v8 = (float)((float)v6 * 16.0) * 0.03125;
  *v7 = (float)((float)v4 * 16.0) * 0.03125;
  *((_BYTE *)a1 + 6871) = v2;
  block_slide_ref(a1);
  v9 = a1[6];
  v10 = (float *)(a1 + 1716);
  *((float *)a1 + 1716) = (float)(HIWORD(v9) & 0xF0);
  *((_BYTE *)a1 + 6869) = (a1[5] & 0x1000) != 0;
  v11 = *((char *)a1 + 28);
  *((_BYTE *)a1 + 6870) = v11;
  if ( v9 >> 28 <= 6 )
    a1[41] = dword_60B060F0[v9 >> 28];
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
    *((_BYTE *)a1 + 6869) = *v7 <= *v8;
  if ( (_BYTE)v11 )
  {
    a1[36] = 0;
    a1[37] = 1056964608;
    a1[38] = 1065353216;
    v12 = sub_605FE180(v11);
    if ( v12 )
    {
      ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1542));
      a1[1541] = FIELD_U32(v12, 8);
      v14 = FIELD_U16(v12, 6116);
      v13 = (float *)(v12 + 6116);
      *((float *)a1 + 1715) = fabsf(*v8 - *v7) / (float)v14;
      v15 = *(v13 - 3);
      *v10 = v15;
      *((float *)a1 + 1724) = v15 / (float)*(unsigned __int16 *)v13;
      sub_605FD008(a1);
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB2634);
      ((void (__fastcall *)(_DWORD *))loc_605FD28C)(a1);
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB2614);
    }
  }
  else
  {
    v16 = v9 & 0xF00000;
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1542));
    if ( v16 )
      v17 = fabsf(*v8 - *v7) / *v10;
    else
      v17 = fabsf(*v8 - *v7) * 0.03125;
    *((float *)a1 + 1715) = v17;
    a1[1724] = 1065353216;
    sub_605FD008(a1);
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB2634);
  }
  memset(a1 + 1726, 0, 60);
  v18 = (a1[5] >> 8) & 0xF;
  v19 = *((unsigned __int8 *)a1 + 6871);
  a1[1725] = v18;
  v20 = (float)v19;
  if ( v18 == 1 )
  {
    v21 = (float *)(a1 + 1740);
    v23 = (float *)(a1 + 1739);
    v24 = (float *)(a1 + 1736);
    v26 = (float *)(a1 + 1735);
    v27 = (float *)(a1 + 1737);
    v28 = (float *)(a1 + 1734);
    v25 = -(float)(v20 + -1.0);
  }
  else
  {
    v21 = (float *)(a1 + 1740);
    v22 = v18 == 0;
    v23 = (float *)(a1 + 1739);
    v24 = (float *)(a1 + 1736);
    v25 = 0.0;
    v26 = (float *)(a1 + 1735);
    v27 = (float *)(a1 + 1737);
    v28 = (float *)(a1 + 1734);
    if ( v22 )
      v25 = 0.5 - (float)(v20 * 0.5);
  }
  *((float *)a1 + 1726) = v25 + 0.0;
  *((float *)a1 + 1727) = v25 + 1.0;
  *((float *)a1 + 1728) = v25 + 2.0;
  *((float *)a1 + 1729) = v25 + 3.0;
  *((float *)a1 + 1730) = v25 + 4.0;
  *((float *)a1 + 1731) = v25 + 5.0;
  *((float *)a1 + 1732) = v25 + 6.0;
  *((float *)a1 + 1733) = v25 + 7.0;
  *v28 = v25 + 8.0;
  *v26 = v25 + 9.0;
  *v24 = v25 + 10.0;
  *v27 = v25 + 11.0;
  *((float *)a1 + 1738) = v25 + 12.0;
  *v23 = v25 + 13.0;
  *v21 = v25 + 14.0;
  memset(v31, 0, 16);
  v29 = *((float *)a1 + 36);
  v31[0].topLeft.x = v29 * -16.0;
  v31[0].topLeft.y = 8.0;
  v31[0].bottomRight.x = v29 * 16.0;
  v31[0].bottomRight.y = -8.0;
  v31[0].rotation = a1[41];
  sub_605FD1C0(a1);
  ShapedCollider_init((ShapedCollider *)(a1 + 1542), (StageActor *)a1, v31);
  sub_60160630((ColliderBase *)(a1 + 1542), 2);
  if ( a1[41] )
    a1[1576] &= 0xFFFFFFFC;
  ((void (__fastcall *)(_DWORD *))loc_605FD28C)(a1);
  return 1;
}

/* sub_605FECC4
 * address: 0x605FECC4   size: 1116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605FECC4(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // r0
  unsigned int v5; // s0
  float *v6; // r5
  float *v7; // r7
  unsigned int v8; // r3
  int v9; // r0
  unsigned int v10; // r3
  float v11; // s0
  int v12; // r1
  float v13; // s2
  float v14; // s0
  float v15; // s0
  int v16; // r12
  unsigned int v17; // s0
  float v18; // s4
  float v19; // s0
  ShapedColliderInfo v21[2]; // [sp+18h] [bp-60h] BYREF

  a1[1710] = a1[27];
  a1[29] = 1136394240;
  a1[1706] = 0;
  v2 = a1[5];
  v3 = (unsigned __int8)v2 >> 4;
  if ( !((unsigned __int8)v2 >> 4) )
    v3 = 8;
  v4 = v2 & 0xF;
  if ( !v4 )
    v4 = 8;
  v5 = v4;
  v6 = (float *)(a1 + 1709);
  v7 = (float *)(a1 + 1708);
  if ( v4 <= v3 )
    LOBYTE(v4) = v3;
  *v7 = (float)((float)v5 * 16.0) * 0.03125;
  *v6 = (float)((float)v3 * 16.0) * 0.03125;
  *((_BYTE *)a1 + 6879) = v4;
  block_slide_ref_2(a1);
  v8 = a1[6];
  v9 = (v8 >> 20) & 0xF;
  v10 = v8 >> 28;
  v11 = (float)(unsigned int)(16 * v9);
  *((float *)a1 + 1718) = v11;
  *((_BYTE *)a1 + 6877) = (a1[5] & 0x1000) != 0;
  v12 = *((unsigned __int8 *)a1 + 28);
  *((_BYTE *)a1 + 6878) = v12;
  if ( v10 <= 6 )
    a1[41] = dword_60B06160[v10];
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
    *((_BYTE *)a1 + 6877) = *v6 <= *v7;
  if ( v12 )
  {
    a1[36] = 1056964608;
    a1[37] = 0;
    a1[38] = 1065353216;
    if ( !sub_605FF28C(a1) )
      (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB275C);
  }
  else
  {
    v13 = fabsf(*v7 - *v6);
    if ( v9 )
      v14 = v13 / v11;
    else
      v14 = v13 * 0.03125;
    *((float *)a1 + 1717) = v14;
    sub_605FF3DC(a1);
    a1[1726] = 1065353216;
    v15 = *((float *)a1 + 37);
    memset(v21, 0, 16);
    v21[0].topLeft.x = -8.0;
    v21[0].topLeft.y = v15 * 16.0;
    v21[0].bottomRight.x = 8.0;
    v21[0].bottomRight.y = v15 * -16.0;
    v21[0].rotation = a1[41];
    ShapedCollider_init((ShapedCollider *)(a1 + 1542), (StageActor *)a1, v21);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1542));
    (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60CB271C);
  }
  memset(a1 + 1728, 0, 60);
  v16 = (a1[5] >> 8) & 0xF;
  v17 = *((unsigned __int8 *)a1 + 6879);
  a1[1727] = v16;
  v18 = (float)v17;
  v19 = 0.0;
  if ( v16 != 1 )
  {
    if ( v16 )
      v19 = -(float)(v18 + -1.0);
    else
      v19 = 0.5 - (float)(v18 * 0.5);
  }
  *((float *)a1 + 1728) = v19 + 0.0;
  *((float *)a1 + 1729) = v19 + 1.0;
  *((float *)a1 + 1730) = v19 + 2.0;
  *((float *)a1 + 1731) = v19 + 3.0;
  *((float *)a1 + 1732) = v19 + 4.0;
  *((float *)a1 + 1733) = v19 + 5.0;
  *((float *)a1 + 1734) = v19 + 6.0;
  *((float *)a1 + 1735) = v19 + 7.0;
  *((float *)a1 + 1736) = v19 + 8.0;
  *((float *)a1 + 1737) = v19 + 9.0;
  *((float *)a1 + 1738) = v19 + 10.0;
  *((float *)a1 + 1739) = v19 + 11.0;
  *((float *)a1 + 1740) = v19 + 12.0;
  *((float *)a1 + 1741) = v19 + 13.0;
  *((float *)a1 + 1742) = v19 + 14.0;
  sub_605FF59C(a1);
  sub_60160630((ColliderBase *)(a1 + 1542), 2);
  a1[1576] &= 0xFFFFFFFC;
  a1[123] = 0;
  a1[124] = 0;
  a1[125] = 1140326400;
  a1[126] = 1131413504;
  ((void (__fastcall *)(_DWORD *))loc_605FF658)(a1);
  return 1;
}

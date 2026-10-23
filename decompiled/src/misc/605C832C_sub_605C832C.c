/* sub_605C832C
 * address: 0x605C832C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C832C(int a1)
{
  unsigned int v2; // r0
  int v3; // s4
  float v4; // s0
  float v5; // r0
  float v6; // r0
  float v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int a5[7]; // [sp+0h] [bp-A0h] BYREF
  ShapedColliderInfo v15; // [sp+1Ch] [bp-84h] BYREF
  int v16; // [sp+40h] [bp-60h]
  int v17; // [sp+44h] [bp-5Ch]
  int v18; // [sp+48h] [bp-58h]
  int v19; // [sp+4Ch] [bp-54h]
  int v20; // [sp+50h] [bp-50h]
  int v21; // [sp+54h] [bp-4Ch]
  int v22; // [sp+58h] [bp-48h]
  int v23; // [sp+5Ch] [bp-44h]
  int v24; // [sp+60h] [bp-40h]
  int v25; // [sp+64h] [bp-3Ch]
  int v26; // [sp+68h] [bp-38h]
  int v27; // [sp+6Ch] [bp-34h]
  int v28; // [sp+70h] [bp-30h]
  int v29; // [sp+74h] [bp-2Ch]
  float y; // [sp+78h] [bp-28h]

  v2 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 2932) = (v2 & 0x10) != 0;
  v3 = (v2 >> 8) & 0xF;
  FIELD_U32(a1, 1000) = v3;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + (float)((float)(unsigned int)v3 * 16.0);
  if ( !sub_60695168(a1) )
    return 2;
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 1107296256;
  FIELD_U32(a1, 500) = 1124073472;
  FIELD_U32(a1, 504) = 1119879168;
  memset(&v15, 0, 12);
  v15.field_C = 10.0;
  v15.topLeft.x = -16.0;
  LODWORD(v15.topLeft.y) = dword_60CB0C68;
  v15.bottomRight.x = 16.0;
  LODWORD(v15.bottomRight.y) = dword_60CB0C6C;
  v15.rotation = 0;
  ShapedCollider_init((ShapedCollider *)(a1 + 1040), (StageActor *)a1, &v15);
  FIELD_U32(a1, 1352) = sub_605C8554;
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1040));
  sub_605C78B0((float *)a1);
  v4 = (float)FIELD_U32(a1, 1000);
  v15.distToCenter.x = -16.0;
  v15.distToCenter.y = (float)(v4 * -16.0) + -1.0;
  v5 = FIELD_F32(a1, 2960);
  v15.field_C = FIELD_F32(a1, 2964);
  v15.field_8 = v5;
  v6 = FIELD_F32(a1, 2968);
  v15.topLeft.y = FIELD_F32(a1, 2972);
  v15.topLeft.x = v6;
  v7 = FIELD_F32(a1, 2976);
  v15.bottomRight.y = FIELD_F32(a1, 2980);
  v15.bottomRight.x = v7;
  v8 = FIELD_U32(a1, 2984);
  v16 = FIELD_U32(a1, 2988);
  v15.rotation = v8;
  v17 = -1048576000;
  v18 = dword_60CB0C6C;
  v19 = 1098907648;
  v20 = dword_60CB0C6C;
  v9 = FIELD_U32(a1, 2992);
  v22 = FIELD_U32(a1, 2996);
  v21 = v9;
  v10 = FIELD_U32(a1, 3000);
  v24 = FIELD_U32(a1, 3004);
  v23 = v10;
  v11 = FIELD_U32(a1, 3008);
  v26 = FIELD_U32(a1, 3012);
  v25 = v11;
  v12 = FIELD_U32(a1, 3020);
  v27 = FIELD_U32(a1, 3016);
  v28 = v12;
  v29 = 1098907648;
  memset(a5, 0, 16);
  a5[4] = (int)&v15;
  y = v15.distToCenter.y;
  a5[5] = 0;
  sub_60161E18((_DWORD *)(a1 + 1696), a1, a5);
  ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 1696));
  StateMgr__changeState((StateMgr *)(a1 + 1024), (StateBase *)&dword_60CB0B04);
  return 1;
}

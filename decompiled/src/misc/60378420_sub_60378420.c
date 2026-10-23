/* sub_60378420
 * address: 0x60378420   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60378420(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r7
  float32x2_t v9; // [sp+8h] [bp-58h] BYREF
  int v10; // [sp+10h] [bp-50h]
  int v11; // [sp+14h] [bp-4Ch]
  int v12; // [sp+18h] [bp-48h]
  int v13; // [sp+1Ch] [bp-44h]
  int v14; // [sp+20h] [bp-40h]
  int v15; // [sp+24h] [bp-3Ch]
  int v16; // [sp+28h] [bp-38h]
  int v17; // [sp+2Ch] [bp-34h]
  int v18; // [sp+30h] [bp-30h]
  int v19; // [sp+34h] [bp-2Ch]
  unsigned int v20; // [sp+38h] [bp-28h] BYREF
  unsigned int v21; // [sp+3Ch] [bp-24h] BYREF
  unsigned int v22; // [sp+40h] [bp-20h] BYREF

  v2 = operator_new(0x10u);
  FIELD_U32(a1, 6100) = sub_60794D48(v2, 4, 1, 0, 1);
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60B00620, 0, 0);
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = 0;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 116) = 1152876544;
  FIELD_U32(a1, 80) = 1;
  FIELD_U32(a1, 160) = -536870912;
  StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9649C);
  v3 = FIELD_U32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v5 = FIELD_U32(a1, 108);
  v6 = FIELD_U32(a1, 156);
  v7 = FIELD_U32(a1, 160);
  v22 = FIELD_U32(a1, 164);
  v21 = v7;
  v20 = v6;
  v9.n64_u64[0] = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 1065353216;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v11 = v5;
  v15 = v3;
  v19 = v4;
  Mtx34_rotateY(&v9, &v21);
  Mtx34_rotateX(&v9, &v20);
  Mtx34_rotateZ(&v9, &v22);
  ((void (__fastcall *)(_DWORD, float32x2_t *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 6100) + 4), &v9);
  return 1;
}

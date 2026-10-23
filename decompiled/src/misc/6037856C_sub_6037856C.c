/* sub_6037856C
 * address: 0x6037856C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037856C(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r5
  float32x2_t v8; // [sp+0h] [bp-50h] BYREF
  int v9; // [sp+8h] [bp-48h]
  int v10; // [sp+Ch] [bp-44h]
  int v11; // [sp+10h] [bp-40h]
  int v12; // [sp+14h] [bp-3Ch]
  int v13; // [sp+18h] [bp-38h]
  int v14; // [sp+1Ch] [bp-34h]
  int v15; // [sp+20h] [bp-30h]
  int v16; // [sp+24h] [bp-2Ch]
  int v17; // [sp+28h] [bp-28h]
  int v18; // [sp+2Ch] [bp-24h]
  unsigned int v19; // [sp+30h] [bp-20h] BYREF
  unsigned int v20; // [sp+34h] [bp-1Ch] BYREF
  unsigned int v21; // [sp+38h] [bp-18h] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 6100) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 6100)
                                                                                               + 4));
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionActor__sub_600034C8((CollisionActor *)a1);
  v2 = FIELD_U32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 108);
  v5 = FIELD_U32(a1, 156);
  v6 = FIELD_U32(a1, 160);
  v21 = FIELD_U32(a1, 164);
  v20 = v6;
  v19 = v5;
  v8.n64_u64[0] = 1065353216;
  v9 = 0;
  v11 = 0;
  v12 = 1065353216;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 1065353216;
  v10 = v4;
  v14 = v2;
  v18 = v3;
  Mtx34_rotateY(&v8, &v20);
  Mtx34_rotateX(&v8, &v19);
  Mtx34_rotateZ(&v8, &v21);
  ((void (__fastcall *)(_DWORD, float32x2_t *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 6100) + 4), &v8);
  return 1;
}

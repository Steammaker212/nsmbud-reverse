/* sub_606BFA14
 * address: 0x606BFA14   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606BFA14(int a1)
{
  int v2; // r5
  int v3; // r8
  unsigned int v4; // r1
  unsigned int v5; // r2
  _DWORD **v6; // r4
  _DWORD *v7; // t1
  ShapedColliderInfo v9; // [sp+8h] [bp-80h] BYREF
  unsigned int v10; // [sp+30h] [bp-58h] BYREF
  unsigned int v11; // [sp+34h] [bp-54h] BYREF
  unsigned int v12; // [sp+38h] [bp-50h] BYREF
  float32x2_t v13; // [sp+40h] [bp-48h] BYREF
  int v14; // [sp+48h] [bp-40h]
  int v15; // [sp+4Ch] [bp-3Ch]
  int v16; // [sp+50h] [bp-38h]
  int v17; // [sp+54h] [bp-34h]
  int v18; // [sp+58h] [bp-30h]
  int v19; // [sp+5Ch] [bp-2Ch]
  int v20; // [sp+60h] [bp-28h]
  int v21; // [sp+64h] [bp-24h]
  int v22; // [sp+68h] [bp-20h]
  int v23; // [sp+6Ch] [bp-1Ch]

  v2 = 2;
  if ( FIELD_U8(dword_60CC6D78, 109032) && sub_606BFC24(a1) == 1 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    v3 = a1 + 144;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 492) = 0;
    FIELD_U32(a1, 496) = 0;
    FIELD_U32(a1, 508) = 1098907648;
    FIELD_U32(a1, 512) = 1098907648;
    memset(&v9, 0, 16);
    v9.topLeft.x = -8.0;
    v9.topLeft.y = 8.0;
    v9.bottomRight.x = 8.0;
    v9.bottomRight.y = -8.0;
    v9.rotation = 0;
    ShapedCollider_init((ShapedCollider *)(a1 + 6112), (StageActor *)a1, &v9);
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(a1 + 6112));
    TileMgr_setTile(
      TileMgr_instance,
      (unsigned int)FIELD_F32(a1, 108),
      (unsigned int)(float)-FIELD_F32(a1, 112),
      0,
      0);
    FIELD_U32(a1, 116) = 1140457472;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBA85C);
    v4 = FIELD_U32(a1, 160);
    v5 = FIELD_U32(a1, 164);
    v10 = FIELD_U32(a1, 156);
    v11 = v4;
    v12 = v5;
    v13.n64_u64[0] = 1065353216;
    v14 = 0;
    v16 = 0;
    v17 = 1065353216;
    v18 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 1065353216;
    v15 = FIELD_U32(a1, 108);
    v19 = FIELD_U32(a1, 112);
    v23 = FIELD_U32(a1, 116);
    Mtx34_rotateY(&v13, &v11);
    Mtx34_rotateX(&v13, &v10);
    Mtx34_rotateZ(&v13, &v12);
    v7 = *(_DWORD **)(a1 + 6104);
    v6 = (_DWORD **)(a1 + 6104);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v7 + 60))(*v7, &v13);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v6 + 68))(**v6, v3);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 52))(**v6);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 56))(**v6);
    return 1;
  }
  return v2;
}

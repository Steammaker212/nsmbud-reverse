/* FinalBowser__onExecute
 * address: 0x6006EC40   size: 796   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall FinalBowser__onExecute(int a1)
{
  int v2; // r0
  _DWORD **v3; // r7
  _DWORD *v4; // r9
  _DWORD **v5; // r7
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v10; // [sp+0h] [bp-58h] BYREF
  int v11; // [sp+4h] [bp-54h]
  float32x2_t v12; // [sp+8h] [bp-50h] BYREF
  int v13; // [sp+14h] [bp-44h]
  int v14; // [sp+24h] [bp-34h]
  int v15; // [sp+34h] [bp-24h]

  sub_600009FC((StageActor *)a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1008))(a1);
  v2 = FIELD_U32(a1, 7144);
  if ( (v2 & 1) != 0 )
  {
    v3 = (_DWORD **)(a1 + 7112);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7112) + 108))(
      **(_DWORD **)(a1 + 7112),
      FIELD_U32(a1, 7552),
      &v12);
    FIELD_U32(a1, 7384) = v13;
    FIELD_U32(a1, 7388) = v14;
    FIELD_U32(a1, 7392) = v15;
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, FIELD_U32(a1, 7604), &v12);
    FIELD_U32(a1, 7420) = v13;
    FIELD_U32(a1, 7424) = v14;
    FIELD_U32(a1, 7428) = v15;
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, FIELD_U32(a1, 7612), &v12);
    FIELD_U32(a1, 7432) = v13;
    FIELD_U32(a1, 7436) = v14;
    FIELD_U32(a1, 7440) = v15;
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, FIELD_U32(a1, 7600), &v12);
    FIELD_U32(a1, 7444) = v13;
    FIELD_U32(a1, 7448) = v14;
    FIELD_U32(a1, 7452) = v15;
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, FIELD_U32(a1, 7608), &v12);
    FIELD_U32(a1, 7456) = v13;
    FIELD_U32(a1, 7460) = v14;
    FIELD_U32(a1, 7464) = v15;
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v3 + 108))(**v3, FIELD_U32(a1, 7540), &v12);
    FIELD_U32(a1, 7472) = v13;
    FIELD_U32(a1, 7476) = v14;
    FIELD_U32(a1, 7480) = v15;
    v2 = FIELD_U32(a1, 7144);
  }
  if ( (v2 & 1) != 0 )
  {
    ((void (__fastcall *)(int))loc_6006EF5C)(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1008))(a1);
    v4 = (_DWORD *)(a1 + 7616);
    v5 = (_DWORD **)(a1 + 7112);
    (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 7112) + 108))(
      **(_DWORD **)(a1 + 7112),
      FIELD_U32(a1, 7616),
      &v12);
    sub_60237454(a1 + 25384, &v12, 1, v6, 1065353216, 1065353216);
    sub_6023636C(a1 + 25400, &v10);
    Mtx34_rotateZ(&v12, (unsigned int *)(a1 + 25592));
    sub_60237454(a1 + 25488, &v12, 1, v7, v10, v11);
    sub_6023636C(a1 + 25504, &v10);
    sub_6006F4A4(a1);
    sub_6006F594(a1);
    if ( sub_60235E50(a1 + 25724) == 1 )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v5 + 108))(**v5, *v4, &v12);
      sub_60236A80(a1 + 25724, &v12, 1);
    }
    if ( FIELD_U8(a1, 25892) )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD, float32x2_t *))(*(_DWORD *)**v5 + 108))(**v5, *v4, &v12);
      sub_60237454(a1 + 25788, &v12, 1, v8, v10, v11);
    }
    CircularCollider_execute(a1 + 23896);
    CircularCollider_execute(a1 + 24296);
    ShapedCollider_execute(a1 + 24696);
  }
  ((void (__fastcall *)(int))loc_6006F6F8)(a1);
  return 1;
}

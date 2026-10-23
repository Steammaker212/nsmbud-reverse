/* sub_6036CAC0
 * address: 0x6036CAC0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6036CAC0(int a1)
{
  int v2; // s0
  _DWORD **v3; // r5
  float v4; // s8
  float v5; // s10
  float v6; // s4
  float v7; // s6
  float v8; // s0
  float v9; // s2
  int v11[2]; // [sp+0h] [bp-48h] BYREF
  _DWORD v12[16]; // [sp+8h] [bp-40h] BYREF

  ((void (*)(void))loc_6036CBDC)();
  *(float *)&v2 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
  *(float *)v11 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
  v11[1] = v2;
  sub_602F2FD0(a1 + 6728, v11, 0);
  v3 = (_DWORD **)(a1 + 6064);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6064));
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 112);
  v6 = FIELD_F32(a1, 7296);
  v7 = FIELD_F32(a1, 7292);
  v8 = FIELD_F32(a1, 7300);
  v9 = FIELD_F32(a1, 116);
  v12[0] = 1065353216;
  v12[1] = 0;
  v12[2] = 0;
  v12[4] = 0;
  v12[5] = 1065353216;
  v12[6] = 0;
  v12[8] = 0;
  v12[9] = 0;
  v12[10] = 1065353216;
  *(float *)&v12[3] = v4 + v7;
  *(float *)&v12[7] = v5 + v6;
  *(float *)&v12[11] = v9 + v8;
  (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)**v3 + 60))(**v3, v12);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v3 + 68))(**v3, a1 + 144);
  ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6064));
  ShapedCollider_execute((ColliderBase *)(a1 + 6072));
  return 1;
}

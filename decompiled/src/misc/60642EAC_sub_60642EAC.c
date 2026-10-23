/* sub_60642EAC
 * address: 0x60642EAC   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60642EAC(int a1)
{
  float v1; // s0
  float v2; // s10
  float v3; // s2
  float v4; // s6
  float v5; // s4
  float v6; // s8
  ModelWrapper *v7; // r4
  _DWORD v9[14]; // [sp+0h] [bp-38h] BYREF

  v1 = FIELD_F32(a1, 572);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 576);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 580);
  v6 = FIELD_F32(a1, 116);
  v7 = *(ModelWrapper **)(a1 + 6768);
  v9[0] = 1065353216;
  v9[1] = 0;
  v9[2] = 0;
  v9[4] = 0;
  v9[5] = 1065353216;
  v9[6] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 1065353216;
  *(float *)&v9[3] = v2 + v1;
  *(float *)&v9[7] = v4 + v3;
  *(float *)&v9[11] = v6 + v5;
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v7, 0x0) + 60))(FIELD_U32(v7, 0x0), v9);
  return ModelWrapper_updateModel(v7);
}

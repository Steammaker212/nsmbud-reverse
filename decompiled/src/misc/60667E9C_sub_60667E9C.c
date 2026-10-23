/* sub_60667E9C
 * address: 0x60667E9C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60667E9C(int a1)
{
  unsigned int v1; // r10
  unsigned int v2; // r7
  float v3; // r0
  float v4; // r1
  int v5; // r2
  float v6; // s0
  float v7; // s4
  int result; // r0
  _DWORD v9[3]; // [sp+4h] [bp-64h] BYREF
  float v10[9]; // [sp+10h] [bp-58h] BYREF
  float v11; // [sp+34h] [bp-34h]
  float v12; // [sp+38h] [bp-30h]
  int v13; // [sp+3Ch] [bp-2Ch]

  v1 = a1 + 8056;
  v2 = a1 + 6104;
  do
  {
    v3 = *(float *)v2;
    v4 = FIELD_F32(v2, 4);
    v5 = FIELD_U32(v2, 8);
    v9[0] = 1065353216;
    v9[1] = 1065353216;
    v9[2] = 1065353216;
    v6 = (float)(0.024541 * 0.0) + 0.0;
    v7 = (float)(-0.00030118 * 0.0) + 1.0;
    v10[0] = v7 * v7;
    v10[4] = v6 * v7;
    v10[8] = -v6;
    v10[1] = (float)((float)(v6 * v6) * v7) - (float)(v6 * v7);
    v10[5] = (float)(v7 * v7) + (float)(v6 * (float)(v6 * v6));
    v11 = v6 * v7;
    v10[2] = (float)(v6 * v6) + (float)(v6 * (float)(v7 * v7));
    v10[6] = (float)(v6 * v11) - v11;
    v12 = v7 * v7;
    v10[3] = v3;
    v10[7] = v4;
    v13 = v5;
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(v2 + 12) + 60))(**(_DWORD **)(v2 + 12), v10);
    (*(void (__fastcall **)(_DWORD, _DWORD *))(***(_DWORD ***)(v2 + 12) + 68))(**(_DWORD **)(v2 + 12), v9);
    ModelWrapper_updateModel(*(ModelWrapper **)(v2 + 12));
    result = DrawMgr_drawModel(DrawMgr_instance, **(void ***)(v2 + 12));
    v2 += 488;
  }
  while ( v2 < v1 );
  return result;
}

/* face_1_ref_7D3560
 * address: 0x607D3560   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall face_1_ref_7D3560(int a1)
{
  float v2; // r5
  float v3; // r7
  float v4; // s0
  int v5; // r0
  float v6; // s0
  int result; // r0
  float v8; // s0
  Vec3 v9; // [sp+Ch] [bp-54h] BYREF
  _BYTE v10[72]; // [sp+18h] [bp-48h] BYREF

  FIELD_U32(a1, 100) = *(_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1100))(a1);
  FIELD_U32(a1, 96) = -1065353216;
  sub_60773F4C(a1);
  LODWORD(v9.x) = &sead__SafeStringBase__vtable;
  LODWORD(v9.y) = "face_1";
  (*(void (__fastcall **)(_DWORD, _BYTE *, Vec3 *))(**(_DWORD **)(a1 + 11368) + 144))(FIELD_U32(a1, 11368), v10, &v9);
  sub_60236F24(FIELD_S8(a1, 84), a1 + 11612, 422, (int)v10, 0);
  v2 = FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 112);
  v4 = sub_600024C4(a1);
  v9.x = v2;
  v9.y = v3;
  v9.z = v4;
  sub_60236EC4(FIELD_S8(a1, 84), (EffectWrapper *)(a1 + 11716), dword_60B0D358[FIELD_U32(a1, 7004)], &v9, 0, 0);
  v5 = FIELD_U32(a1, 80);
  v6 = flt_60B0A898[v5] + flt_60B0A898[v5];
  FIELD_F32(a1, 88) = v6;
  if ( (FIELD_U8(a1, 6904) & 0x18) != 0 )
    FIELD_F32(a1, 88) = v6 * 0.5;
  if ( !v5 )
  {
    if ( (FIELD_U8(a1, 6900) & 0x40) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( v5 == 1 && (FIELD_U8(a1, 6900) & 0x20) != 0 )
LABEL_8:
    FIELD_U32(a1, 80) = v5 ^ 1;
LABEL_9:
  result = EnemyCounterMaybe_instance;
  v8 = FIELD_F32(EnemyCounterMaybe_instance, 16) + 0.0;
  if ( v8 > 0.0 && FIELD_F32(a1, 108) > v8 )
  {
    FIELD_U32(a1, 80) = 1;
    FIELD_F32(a1, 108) = v8;
    return 1;
  }
  return result;
}

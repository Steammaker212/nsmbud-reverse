/* balloon_awachibiyoshi_ref_2
 * address: 0x605D3D9C   size: 416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall balloon_awachibiyoshi_ref_2(int a1)
{
  float v2; // s6
  int v3; // r5
  int (__fastcall *v4)(int, _DWORD *); // r2
  void (__fastcall *v5)(int, int, unsigned int *); // r6
  int v6; // r0
  int result; // r0
  _DWORD v8[2]; // [sp+0h] [bp-78h] BYREF
  unsigned int v9[11]; // [sp+8h] [bp-70h] BYREF
  int v10; // [sp+34h] [bp-44h]
  float32x2_t v11; // [sp+38h] [bp-40h] BYREF
  int v12; // [sp+40h] [bp-38h]
  int v13; // [sp+44h] [bp-34h]
  int v14; // [sp+48h] [bp-30h]
  float v15; // [sp+4Ch] [bp-2Ch]
  int v16; // [sp+50h] [bp-28h]
  int v17; // [sp+54h] [bp-24h]
  int v18; // [sp+58h] [bp-20h]
  float v19; // [sp+5Ch] [bp-1Ch]
  int v20; // [sp+60h] [bp-18h]
  int v21; // [sp+64h] [bp-14h]

  v11.n64_u64[0] = 1065353216;
  v12 = 0;
  v14 = 0;
  v15 = 1.0;
  v16 = 0;
  v18 = 0;
  v19 = 0.0;
  v20 = 1065353216;
  v13 = FIELD_U32(a1, 108);
  v17 = FIELD_U32(a1, 112);
  v21 = FIELD_U32(a1, 116);
  if ( FIELD_U8(a1, 812) == 2 )
  {
    Mtx34_rotateZ(&v11, (unsigned int *)(a1 + 816));
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(a1 + 808, 0.0, 0.025, 0.01, 0.000001);
    v2 = (float)(FIELD_F32(a1, 808) * -0.1) + 1.0;
    v11.n64_f32[1] = v11.n64_f32[1] * v2;
    v15 = v2 * v15;
    v19 = v2 * v19;
    v9[0] = -FIELD_U32(a1, 816);
    Mtx34_rotateZ(&v11, v9);
    FIELD_U32(a1, 816) += 119304647;
  }
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 648));
  v3 = **(_DWORD **)(a1 + 648);
  (*(void (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v3 + 60))(v3, &v11);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 68))(v3, a1 + 892);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 56))(v3);
  v4 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v3 + 84);
  v5 = *(void (__fastcall **)(int, int, unsigned int *))(*(_DWORD *)v3 + 108);
  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "balloon_awachibiyoshi";
  v6 = v4(v3, v8);
  v5(v3, v6, v9);
  FIELD_U32(a1, 768) = v9[3];
  FIELD_U32(a1, 772) = v9[7];
  result = v10;
  FIELD_U32(a1, 776) = v10;
  return result;
}

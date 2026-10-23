/* sub_606780AC
 * address: 0x606780AC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606780AC(int a1)
{
  signed int v2; // r1
  int result; // r0
  float v4; // s0
  int v5; // r0
  int v6; // r1
  _DWORD **v7; // r4
  _DWORD *v8; // t1
  float32x2_t v9; // [sp+0h] [bp-40h] BYREF
  int v10; // [sp+8h] [bp-38h]
  int v11; // [sp+Ch] [bp-34h]
  int v12; // [sp+10h] [bp-30h]
  int v13; // [sp+14h] [bp-2Ch]
  int v14; // [sp+18h] [bp-28h]
  float v15; // [sp+1Ch] [bp-24h]
  int v16; // [sp+20h] [bp-20h]
  int v17; // [sp+24h] [bp-1Ch]
  int v18; // [sp+28h] [bp-18h]
  int v19; // [sp+2Ch] [bp-14h]

  v2 = StageActor__befreDraw((Actor *)a1);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = FIELD_F32(a1, 112);
    v5 = FIELD_U32(a1, 116);
    v6 = FIELD_U32(a1, 108);
    v9.n64_u64[0] = 1065353216;
    v10 = 0;
    v12 = 0;
    v13 = 1065353216;
    v14 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 1065353216;
    v11 = v6;
    v15 = v4 + 8.0;
    v19 = v5;
    Mtx34_rotateY(&v9, (unsigned int *)(a1 + 160));
    Mtx34_rotateX(&v9, (unsigned int *)(a1 + 156));
    Mtx34_rotateZ(&v9, (unsigned int *)(a1 + 164));
    v8 = *(_DWORD **)(a1 + 6100);
    v7 = (_DWORD **)(a1 + 6100);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v8 + 60))(*v8, &v9);
    (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v7 + 68))(**v7, v7 - 1489);
    ModelWrapper_updateModel((ModelWrapper *)*v7);
    LightMask__draw((RevealMaskRelated *)(v7 + 1));
    return 1;
  }
  return result;
}

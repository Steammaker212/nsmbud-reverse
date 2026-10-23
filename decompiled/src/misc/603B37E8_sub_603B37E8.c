/* sub_603B37E8
 * address: 0x603B37E8   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B37E8(int a1)
{
  int v2; // r1
  int result; // r0
  unsigned int v4; // r1
  unsigned int v5; // r2
  _DWORD **v6; // r5
  unsigned int v7; // [sp+0h] [bp-50h] BYREF
  unsigned int v8; // [sp+4h] [bp-4Ch] BYREF
  unsigned int v9; // [sp+8h] [bp-48h] BYREF
  float32x2_t v10; // [sp+10h] [bp-40h] BYREF
  int v11; // [sp+18h] [bp-38h]
  int v12; // [sp+1Ch] [bp-34h]
  int v13; // [sp+20h] [bp-30h]
  int v14; // [sp+24h] [bp-2Ch]
  int v15; // [sp+28h] [bp-28h]
  int v16; // [sp+2Ch] [bp-24h]
  int v17; // [sp+30h] [bp-20h]
  int v18; // [sp+34h] [bp-1Ch]
  int v19; // [sp+38h] [bp-18h]
  int v20; // [sp+3Ch] [bp-14h]

  v2 = damage_ref_3B3948();
  result = 2;
  if ( v2 == 1 )
  {
    FIELD_U32(a1, 116) = 1158455296;
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    FIELD_U32(a1, 160) = 0x20000000;
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C97FB8);
    v4 = FIELD_U32(a1, 160);
    v5 = FIELD_U32(a1, 164);
    v7 = FIELD_U32(a1, 156);
    v8 = v4;
    v9 = v5;
    v10.n64_u64[0] = 1065353216;
    v11 = 0;
    v13 = 0;
    v14 = 1065353216;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 1065353216;
    v12 = FIELD_U32(a1, 108);
    v16 = FIELD_U32(a1, 112);
    v20 = FIELD_U32(a1, 116);
    Mtx34_rotateY(&v10, &v8);
    Mtx34_rotateX(&v10, &v7);
    Mtx34_rotateZ(&v10, &v9);
    v6 = (_DWORD **)(a1 + 6104);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6104) + 60))(**(_DWORD **)(a1 + 6104), &v10);
    (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v6 + 68))(**v6, a1 + 144);
    sub_604218E0(*(_DWORD **)(a1 + 6104));
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 52))(**v6);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v6 + 56))(**v6);
    return 1;
  }
  return result;
}

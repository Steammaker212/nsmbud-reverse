/* sub_6070D980
 * address: 0x6070D980   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6070D980(int a1)
{
  int v2; // r5
  ModelWrapper *v3; // r6
  ModelWrapper *v4; // r6
  int result; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  _DWORD v9[16]; // [sp+8h] [bp-40h] BYREF

  v9[0] = 1065353216;
  v9[1] = 0;
  v9[2] = 0;
  v9[4] = 0;
  v9[5] = 1065353216;
  v9[6] = 0;
  v9[8] = 0;
  v9[9] = 0;
  v9[10] = 1065353216;
  v2 = a1 + 108;
  v9[3] = FIELD_U32(a1, 108);
  v9[7] = FIELD_U32(a1, 112);
  v9[11] = FIELD_U32(a1, 116);
  v3 = *(ModelWrapper **)(a1 + 6120);
  (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v3, 0x0) + 60))(FIELD_U32(v3, 0x0), v9);
  ModelWrapper_updateModel(v3);
  v4 = *(ModelWrapper **)(v2 + 6016);
  if ( v4 )
  {
    (*(void (__fastcall **)(void *, _DWORD *))(*(_DWORD *)FIELD_U32(v4, 0x0) + 60))(FIELD_U32(v4, 0x0), v9);
    ModelWrapper_updateAnims(v4);
    ModelWrapper_updateModel(v4);
  }
  result = sub_6069AFA0(a1 + 6496, v2, (_DWORD *)(a1 + 492), (_DWORD *)(a1 + 6536), (ColliderBase *)(a1 + 6128));
  if ( result == 1 )
  {
    v6 = FIELD_U32(a1, 108);
    v7 = FIELD_U32(a1, 112);
    v8 = FIELD_U32(a1, 116);
    FIELD_U32(a1, 584) = v6;
    FIELD_U32(a1, 588) = v7;
    FIELD_U32(a1, 592) = v8;
    FIELD_U32(a1, 608) = v6;
    FIELD_U32(a1, 612) = v7;
    FIELD_U32(a1, 616) = v8;
    return sub_60160948((_DWORD *)(a1 + 6128));
  }
  return result;
}

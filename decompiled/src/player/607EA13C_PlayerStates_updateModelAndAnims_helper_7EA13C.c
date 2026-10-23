/* PlayerStates_updateModelAndAnims_helper_7EA13C
 * address: 0x607EA13C   size: 312   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall PlayerStates_updateModelAndAnims_helper_7EA13C(ModelWrapper **a1)
{
  ModelWrapper *v2; // t1
  unsigned int v4; // [sp+4h] [bp-44h] BYREF
  float32x2_t v5; // [sp+8h] [bp-40h] BYREF
  int v6; // [sp+10h] [bp-38h]
  int v7; // [sp+14h] [bp-34h]
  int v8; // [sp+18h] [bp-30h]
  int v9; // [sp+1Ch] [bp-2Ch]
  int v10; // [sp+20h] [bp-28h]
  int v11; // [sp+24h] [bp-24h]
  int v12; // [sp+28h] [bp-20h]
  int v13; // [sp+2Ch] [bp-1Ch]
  int v14; // [sp+30h] [bp-18h]
  int v15; // [sp+34h] [bp-14h]

  v5.n64_u64[0] = 1065353216;
  v6 = 0;
  v8 = 0;
  v9 = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 1065353216;
  v4 = 0;
  v7 = 1102577664;
  v11 = 1096810496;
  v15 = -1054867456;
  Mtx34_rotateZ(&v5, &v4);
  v4 = -2028179001;
  Mtx34_rotateX(&v5, &v4);
  v4 = 0x40000000;
  Mtx34_rotateY(&v5, &v4);
  v2 = a1[432295];
  a1 += 432295;
  (*(void (__fastcall **)(void *, _DWORD, _DWORD))(*(_DWORD *)FIELD_U32(v2, 0x0) + 136))(FIELD_U32(v2, 0x0), 0, 0);
  (*(void (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)(*a1)->model + 136))((*a1)->model, 1, 0);
  (*(void (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)(*a1)->model + 136))((*a1)->model, 2, 0);
  (*(void (__fastcall **)(void *, float32x2_t *))(*(_DWORD *)(*a1)->model + 60))((*a1)->model, &v5);
  (*(void (__fastcall **)(void *, int *))(*(_DWORD *)(*a1)->model + 68))((*a1)->model, &dword_60B3B98C);
  return ModelWrapper_updateModel(*a1);
}

/* sub_6063BEA4
 * address: 0x6063BEA4   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063BEA4(int a1, sead__SafeString *a2, int a3)
{
  void *v6; // r9
  void *Model2; // r7
  ModelWrapper *v8; // r5
  ModelWrapper *v9; // r0
  void *v10; // r5
  ModelWrapper *v11; // r7
  ModelWrapper *v12; // r0
  float v13; // s0
  char *cstr; // r2
  char *v15; // r1
  int v16; // r0
  _DWORD v18[2]; // [sp+18h] [bp-38h] BYREF
  float v19; // [sp+20h] [bp-30h]
  void *vtable; // [sp+24h] [bp-2Ch]
  char *v21; // [sp+28h] [bp-28h]
  float v22; // [sp+2Ch] [bp-24h]

  v6 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
  Model2 = (void *)Resource_getModel2(v6, a2, 0, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v9, v6, 0, 0);
  FIELD_U32(a1, 6192) = v8;
  v10 = (void *)Resource_getModel2(v6, a2 + 1, 0, 0, 0, 0, 0, 0, 0);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v12 = ModelWrapper_ctor(v11, v10, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v12, v6, 0, 0);
  FIELD_U32(a1, 6196) = v11;
  v13 = FIELD_F32(a1, 116);
  cstr = a2[2].cstr;
  v18[0] = a2[2].vtable;
  v18[1] = cstr;
  v19 = flt_60AF21D0[a3] - v13;
  v15 = a2[3].cstr;
  vtable = a2[3].vtable;
  v21 = v15;
  v22 = v19;
  v16 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 256))(a1);
  return sub_6063CC30(a1 + 6200, v6, v16, v18);
}

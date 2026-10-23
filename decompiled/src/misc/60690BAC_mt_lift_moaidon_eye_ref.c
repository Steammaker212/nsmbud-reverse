/* mt_lift_moaidon_eye_ref
 * address: 0x60690BAC   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mt_lift_moaidon_eye_ref(_DWORD *a1, void *a2, sead__SafeString *a3, int a4)
{
  void *Model2; // r7
  ModelWrapper *v9; // r5
  ModelWrapper *v10; // r0
  void *model; // r5
  int (__fastcall *v12)(void *, _DWORD *); // r2
  int v13; // r0
  int result; // r0
  _DWORD v15[10]; // [sp+18h] [bp-28h] BYREF

  *a1 = a2;
  sead__SafeStringBase__operator_assign((int)(a1 + 1), (int)&a3[1]);
  Model2 = (void *)Resource_getModel2(a2, a3, 0, 1, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model2, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v10, a2, 0, 0);
  a1[3] = v9;
  model = FIELD_U32(v9, 0x0);
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)model + 68))(model, a4);
  v12 = *(int (__fastcall **)(void *, _DWORD *))(*(_DWORD *)model + 124);
  v15[0] = &sead__SafeStringBase__vtable;
  v15[1] = "mt_lift_moaidon_eye";
  v13 = v12(model, v15);
  result = (*(int (__fastcall **)(void *, int))(*(_DWORD *)model + 132))(model, v13);
  a1[4] = result;
  return result;
}

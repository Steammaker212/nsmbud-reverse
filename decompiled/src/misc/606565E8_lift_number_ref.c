/* lift_number_ref
 * address: 0x606565E8   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lift_number_ref(int a1, void *a2, sead__SafeString *a3, char a4)
{
  void *Model2; // r5
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  void *model; // r5
  int v10; // r7
  int result; // r0
  _DWORD v12[10]; // [sp+18h] [bp-28h] BYREF

  FIELD_U8(a1, 622) = a4;
  *(_DWORD *)a1 = a2;
  Model2 = (void *)Resource_getModel2(a2, a3, 1, 1, 1, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model2, 1, 1, 1, 0, 0);
  ModelWrapper_setup(v8, a2, 0, 0);
  FIELD_U32(a1, 4) = v7;
  model = FIELD_U32(v7, 0x0);
  FIELD_U32(a1, 8) = FIELD_U32(v7, 0x0);
  v10 = (int)*FIELD_U32(v7, 0x14);
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "lift_number";
  TexAnim_play(v10, (int)a2, v12);
  FIELD_U32(v10, 20) = 1099431936;
  FIELD_U32(v10, 28) |= 2u;
  FIELD_U8(a1, 620) = 0;
  FIELD_U8(a1, 621) = 0;
  FIELD_U32(a1, 76) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U32(a1, 84) = 0;
  FIELD_U32(a1, 72) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB6444);
  FIELD_U32(a1, 152) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 148) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB644C);
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 232) = 0;
  FIELD_U32(a1, 236) = 0;
  FIELD_U32(a1, 224) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB6454);
  FIELD_U32(a1, 304) = 0;
  FIELD_U32(a1, 308) = 0;
  FIELD_U32(a1, 312) = 0;
  FIELD_U32(a1, 300) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB645C);
  FIELD_U32(a1, 380) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 376) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB6464);
  FIELD_U32(a1, 456) = 0;
  FIELD_U32(a1, 460) = 0;
  FIELD_U32(a1, 464) = 0;
  FIELD_U32(a1, 452) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB646C);
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 540) = 0;
  FIELD_U32(a1, 528) = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB6474);
  FIELD_U32(a1, 608) = 0;
  FIELD_U32(a1, 612) = 0;
  FIELD_U32(a1, 616) = 0;
  result = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 84))(model, &dword_60CB647C);
  FIELD_U32(a1, 604) = result;
  return result;
}

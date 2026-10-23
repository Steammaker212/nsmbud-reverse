/* sub_60674EA4
 * address: 0x60674EA4   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60674EA4(int a1, int r1_0)
{
  void *ResArchiveById; // r6
  void *Model2; // r7
  ModelWrapper *v6; // r4
  ModelWrapper *v7; // r0
  void *model; // r5
  char v9; // r12
  int v10; // r0
  int v11; // r0
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "lift_zen_tagaichigai_gear";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6116) = v6;
  model = FIELD_U32(v6, 0x0);
  if ( ((unsigned int)dword_60CB7BE0 & ~(1617383276 << v9) & 1) == 0 && _cxa_guard_acquire(dword_60CB7BE0) )
  {
    dword_60CB7BE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB7BEC = (int)"mt_gear_03";
    dword_60CB7BF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CB7BF4 = (int)"mt_gear_02";
    sub_60000288();
    _cxa_guard_release(dword_60CB7BE0);
  }
  v10 = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 124))(model, &dword_60CB7BE8);
  (*(void (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)model + 136))(model, v10, FIELD_U8(r1_0, 36));
  v11 = (*(int (__fastcall **)(void *, int *))(*(_DWORD *)model + 124))(model, &dword_60CB7BF0);
  return (*(int (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)model + 136))(
           model,
           v11,
           FIELD_U8(r1_0, 37));
}

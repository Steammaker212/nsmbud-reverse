/* cobStarGate_ref
 * address: 0x601FB434   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobStarGate_ref(int a1)
{
  char v2; // r1
  char v3; // r2
  void *v4; // r8
  void *Model; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  void *v8; // r0
  int (__fastcall *v9)(void *, sead__SafeString *); // r2
  char v10; // r12
  sead__SafeString identifier; // [sp+18h] [bp-28h] BYREF

  v2 = FIELD_U8(a1, 216);
  v3 = v2 | 2;
  if ( (FIELD_U8(dword_60CC6D78, 2093) & 1) != 0 )
    v3 = v2 & 0xFD;
  FIELD_U8(a1, 216) = v3;
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobStarGate";
  v4 = (void *)LoadResource(ResourceMgrRelated_instance, &identifier);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobStarGate";
  Model = (void *)Resource_getModel(v4, &identifier, 6, 1, 0, 0, 0, 0, 1, 0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v7, (int)v4, 0, 0);
  FIELD_U32(a1, 268) = v6;
  v8 = FIELD_U32(v6, 0x0);
  v9 = *(int (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)FIELD_U32(v6, 0x0) + 84);
  identifier.vtable = &sead__SafeStringBase__vtable;
  identifier.cstr = "cobStarGate";
  FIELD_U32(a1, 292) = v9(v8, &identifier);
  if ( ((unsigned int)&dword_60C8C0D0 & ~(1612690764 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C8C0D0) )
  {
    dword_60C8C0D4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C0D8 = (int)"fall";
    dword_60C8C0DC = (int)&sead__SafeStringBase__vtable;
    dword_60C8C0E0 = (int)"enter";
    dword_60C8C0E4 = (int)&sead__SafeStringBase__vtable;
    dword_60C8C0E8 = (int)"wait";
    sub_60000288();
    _cxa_guard_release(&dword_60C8C0D0);
  }
  sub_6040F4B8(FIELD_U32(a1, 268), &dword_60C8C0E4, 1);
  FIELD_U32(a1, 272) = 2;
  sub_601FB64C(a1);
  FIELD_U32(a1, 212) = 1135542272;
  return 1;
}

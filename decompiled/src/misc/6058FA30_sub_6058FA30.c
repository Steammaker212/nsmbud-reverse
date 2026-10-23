/* sub_6058FA30
 * address: 0x6058FA30   size: 1388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6058FA30(int a1)
{
  void *ResArchiveById; // r8
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  void *v6; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  void *model; // r6
  int (__fastcall *v10)(void *, sead__SafeString *); // r2
  int v11; // r0
  void (__fastcall ***v12)(_DWORD, int, _DWORD *, sead__SafeString *, int *); // r6
  void (__fastcall *v13)(_DWORD, _DWORD, _DWORD *, sead__SafeString *, int *); // r4
  void (__fastcall *v14)(_DWORD, int, _DWORD *, sead__SafeString *, int *); // r4
  void *v15; // r6
  ModelWrapper *v16; // r7
  ModelWrapper *v17; // r0
  void *v18; // r6
  ModelWrapper *v19; // r7
  ModelWrapper *v20; // r0
  char *v21; // r1
  int v22; // r2
  int v23; // r0
  void (__fastcall *v24)(int, sead__SafeString *); // r3
  char v25; // r12
  int v26; // r5
  int v27; // r5
  int v28; // r5
  int v29; // r4
  sead__SafeString a2; // [sp+18h] [bp-38h] BYREF
  int v31; // [sp+20h] [bp-30h]
  _DWORD v32[11]; // [sp+24h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ship_bottom_top";
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v5, ResArchiveById, 0, 0);
  FIELD_U32(a1, 644) = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ship_bottom";
  v6 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, v6, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v8, ResArchiveById, 0, 0);
  FIELD_U32(a1, 648) = v7;
  model = FIELD_U32(v7, 0x0);
  v10 = *(int (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)FIELD_U32(v7, 0x0) + 124);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ki_mat";
  v11 = v10(model, &a2);
  v12 = (void (__fastcall ***)(_DWORD, int, _DWORD *, sead__SafeString *, int *))(*(int (__fastcall **)(void *, int))(*(_DWORD *)model + 132))(
                                                                                   model,
                                                                                   v11);
  v32[0] = FIELD_U32(a1, 660);
  v32[1] = 1065353216;
  v13 = **v12;
  a2.vtable = 0;
  v13(v12, 0, v32, &a2, &dword_60B3B944);
  v14 = **v12;
  a2.vtable = 0;
  v14(v12, 1, v32, &a2, &dword_60B3B944);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ship_bottom_waku";
  v15 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v16 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v17 = ModelWrapper_ctor(v16, v15, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v17, ResArchiveById, 0, 0);
  FIELD_U32(a1, 652) = v16;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ship_bottom_waku";
  v18 = (void *)Resource_getModel2(ResArchiveById, &a2, 0, 0, 0, 0, 0, 0, 0);
  v19 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v20 = ModelWrapper_ctor(v19, v18, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v20, ResArchiveById, 0, 0);
  FIELD_U32(a1, 656) = v19;
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 644) + 68))(**(_DWORD **)(a1 + 644), a1 + 144);
  v21 = *(char **)(a1 + 148);
  v22 = FIELD_U32(a1, 152);
  v23 = **(_DWORD **)(a1 + 648);
  v24 = *(void (__fastcall **)(int, sead__SafeString *))(*(_DWORD *)v23 + 68);
  a2.vtable = *(void **)(a1 + 660);
  a2.cstr = v21;
  v31 = v22;
  v24(v23, &a2);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 652) + 68))(**(_DWORD **)(a1 + 652), a1 + 144);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 656) + 68))(**(_DWORD **)(a1 + 656), a1 + 144);
  v26 = **(_DWORD **)(a1 + 644);
  if ( ((unsigned int)&dword_60C80400 & ~(1616444812 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v26 && (**(int (__fastcall ***)(int, int *))v26)(v26, &dword_60C803FC) == 1 )
  {
    FIELD_U32(v26, 312) = 6;
    FIELD_U32(v26, 36) = 8;
  }
  v27 = **(_DWORD **)(a1 + 648);
  if ( ((unsigned int)&dword_60C80400 & ~(1616444948 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v27 && (**(int (__fastcall ***)(int, int *))v27)(v27, &dword_60C803FC) == 1 )
  {
    FIELD_U32(v27, 312) = 6;
    FIELD_U32(v27, 36) = 8;
  }
  v28 = **(_DWORD **)(a1 + 652);
  if ( ((unsigned int)&dword_60C80400 & ~(1616445084 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v28 && (**(int (__fastcall ***)(int, int *))v28)(v28, &dword_60C803FC) == 1 )
  {
    FIELD_U32(v28, 312) = 6;
    FIELD_U32(v28, 36) = 8;
  }
  v29 = **(_DWORD **)(a1 + 656);
  if ( ((unsigned int)&dword_60C80400 & ~(1616445220 << v25) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v29 )
  {
    if ( (**(int (__fastcall ***)(int, int *))v29)(v29, &dword_60C803FC) == 1 )
    {
      FIELD_U32(v29, 312) = 6;
      FIELD_U32(v29, 36) = 8;
    }
  }
}

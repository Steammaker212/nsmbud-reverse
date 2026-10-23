/* sub_600F5200
 * address: 0x600F5200   size: 460   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F5200(_DWORD *a1)
{
  void *v2; // r8
  void *Model2; // r10
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r1
  _DWORD **v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r0
  sead__SafeString a2; // [sp+14h] [bp-2Ch] BYREF

  a1[29] = -988004352;
  a1[1580] = 5;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "deka_sanbo";
  LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ef_dekasanbo";
  v2 = (void *)LoadResource(ResourceMgrRelated_instance, &a2);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ef_dekasanbo_appsand";
  Model2 = (void *)Resource_getModel2(v2, &a2, 1, 0, 2, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 2, 0, 0);
  ModelWrapper_setup(v5, (int)v2, 0, 0);
  a1[1581] = v4;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ef_dekasanbo_appsand";
  sub_6040F4B8(v4, &a2, 0);
  v6 = **(_DWORD **)(a1[1581] + 28);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ef_dekasanbo_appsand";
  sub_60446088(v6, (int)v2, (int)&a2);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1581] + 28) + 4), 0);
  v7 = a1[1581];
  v8 = FIELD_U32(v7, 24);
  v9 = *(_DWORD ***)(v7 + 28);
  if ( v8 > 1 )
    ++v9;
  v10 = *v9;
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "ef_dekasanbo_appsand";
  ShuAnim_play(v10, (int)v2, (int)&a2);
  v11 = a1[1581];
  v12 = FIELD_U32(v11, 24);
  v13 = FIELD_U32(v11, 28);
  if ( v12 > 1 )
    v13 += 4;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v13 + 4), 0);
  (*(void (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C859D8);
  return 1;
}

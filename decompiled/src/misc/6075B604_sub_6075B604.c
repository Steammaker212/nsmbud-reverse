/* sub_6075B604
 * address: 0x6075B604   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

sead_IDisposer *__fastcall sub_6075B604(sead_IDisposer *a1, int r1_0, int a3)
{
  void *vtable; // r8
  void *Model2; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  int containingHeap; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  __int64 v14; // d1
  float v15; // s16
  int v16; // r0
  int v17; // r0
  sead__SafeString a2[12]; // [sp+18h] [bp-140h] BYREF
  _QWORD v20[28]; // [sp+78h] [bp-E0h] BYREF

  sead_IDisposer_ctor(a1);
  FIELD_U32(a1, 0x0) = (int)&off_60C240C4;
  LODWORD(v20[0]) = &sead__SafeStringBase__vtable;
  HIDWORD(v20[0]) = "MiiMdl";
  a1[1].vtable = LoadResource(ResourceMgrRelated_instance, v20);
  LODWORD(v20[0]) = &sead__SafeStringBase__vtable;
  HIDWORD(v20[0]) = "CommonAnm";
  a1[1].containingHeap = LoadResource(ResourceMgrRelated_instance, v20);
  a1[1].field_8 = 0;
  a1[1].field_C = r1_0;
  a1[2].vtable = 1065353216;
  a1[2].containingHeap = a3;
  a1[2].field_8 = 0;
  memset(v20, 0, 12);
  sub_608DEB0C(v20, 1, (int)&v20[1] + 4);
  if ( SLODWORD(v20[0]) < SHIDWORD(v20[0]) )
    *(_DWORD *)(LODWORD(v20[1]) + 4 * LODWORD(v20[0])++) = a1[1].containingHeap;
  vtable = (void *)a1[1].vtable;
  a2[0].vtable = &sead__SafeStringBase__vtable;
  a2[0].cstr = "MiiB_capture_model";
  Model2 = (void *)Resource_getModel2(vtable, a2, 1, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v9, vtable, (int *)v20, 0);
  a1[1].field_8 = (int)v8;
  containingHeap = a1[1].containingHeap;
  v11 = (int)*FIELD_U32(v8, 0x8).animations;
  LODWORD(v20[0]) = &sead__SafeStringBase__vtable;
  HIDWORD(v20[0]) = "capture_pose";
  SkeletalAnim_play(v11, containingHeap, (const char **)v20);
  v12 = operator_new(0x4C8u);
  a1[2].field_8 = sub_60436A4C(v12);
  sub_604186F8((int)v20);
  sub_6042A9E8(dword_60C9C0FC, v20, 4u);
  sub_6042F294(a2, &a1[1].field_C);
  qmemcpy(v20, a2, 0x5Cu);
  sub_60436B70((_DWORD *)a1[2].field_8, v20, 4u, a1[2].containingHeap, 0);
  v20[0] = 0x3F0000003F000000LL;
  v20[1] = 0x3F8000003F000000LL;
  v13 = a1[2].field_8;
  if ( v13 )
  {
    v20[0] = sub_6043779C(v13);
    v20[1] = v14;
    v15 = (float)((float)sub_604377CC(a1[2].field_8) * 0.0031496) + 0.4;
  }
  else
  {
    v15 = 0.4;
  }
  v16 = *(_DWORD *)a1[1].field_8;
  if ( v16 )
  {
    v17 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v16 + 132))(v16, 0);
    if ( v17 )
      (*(void (__fastcall **)(int, _DWORD, _QWORD *))(*(_DWORD *)v17 + 12))(v17, 0, v20);
    *(float *)&a1[2].vtable = v15;
  }
  return a1;
}

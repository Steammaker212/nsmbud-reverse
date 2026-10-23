/* fruits_kusa_ref
 * address: 0x6060F49C   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fruits_kusa_ref(int a1)
{
  int v2; // r6
  int v3; // r0
  void *v4; // r5
  char *v5; // r9
  void *ResArchiveById; // r5
  void *v7; // r10
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  unsigned int v10; // r1
  void *Model2; // r10
  ModelWrapper *v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r1
  sead__SafeString a2; // [sp+18h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 20);
  v3 = (unsigned __int8)v2 >> 4;
  if ( v3 == 2 )
  {
    FIELD_U32(a1, 644) = 0;
  }
  else if ( v3 == 1 )
  {
    ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 1u);
    switch ( v2 & 0xF )
    {
      case 0:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_gake_S";
        goto LABEL_16;
      case 1:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_gake_M";
        goto LABEL_16;
      case 2:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_gake_L";
        goto LABEL_16;
      case 3:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_gake_LL";
LABEL_16:
        a2.cstr = v5;
        Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
        v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        v12 = ModelWrapper_ctor(v8, Model2, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v12, ResArchiveById, 0, 0);
        FIELD_U32(a1, 644) = v8;
        v10 = 1;
LABEL_17:
        v13 = (int)*FIELD_U32(v8, 0xC);
        v14 = Profile__getResArchiveById(*(Profile **)(a1 + 12), v10);
        a2.vtable = &sead__SafeStringBase__vtable;
        a2.cstr = v5;
        SkeletalAnim_play(v13, v14, (const char **)&a2);
        break;
      default:
        break;
    }
  }
  else if ( !((unsigned __int8)v2 >> 4) )
  {
    v4 = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    switch ( v2 & 0xF )
    {
      case 0:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_S";
        goto LABEL_12;
      case 1:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_M";
        goto LABEL_12;
      case 2:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_L";
        goto LABEL_12;
      case 3:
        a2.vtable = &sead__SafeStringBase__vtable;
        v5 = "fruits_kusa_LL";
LABEL_12:
        a2.cstr = v5;
        v7 = (void *)Resource_getModel2(v4, &a2, 1, 0, 0, 0, 0, 0, 0);
        v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
        v9 = ModelWrapper_ctor(v8, v7, 1, 0, 0, 0, 0);
        ModelWrapper_setup(v9, v4, 0, 0);
        FIELD_U32(a1, 644) = v8;
        v10 = 0;
        goto LABEL_17;
      default:
        break;
    }
  }
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(FIELD_U32(a1, 644) + 12) + 24) = 1065353216;
  FIELD_U32(a1, 164) = (FIELD_U32(a1, 20) << 20) & 0xF0000000;
  v15 = **(_DWORD **)(FIELD_U32(a1, 644) + 12);
  FIELD_F32(v15, 20) = (float)(FIELD_U32(dword_60C99DD4, 1052) % (unsigned int)FIELD_F32(v15, 8));
  FIELD_U32(v15, 28) |= 2u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
  return 1;
}

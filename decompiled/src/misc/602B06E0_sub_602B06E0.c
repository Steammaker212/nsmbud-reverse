/* sub_602B06E0
 * address: 0x602B06E0   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602B06E0(int *a1)
{
  void *Resource; // r11
  void *Model2; // r5
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  char *v6; // r5
  void *v7; // r8
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  int v10; // r7
  int v11; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C90C84);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90C98, 2, 0, 1, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
  v5 = sub_60421830(v4, Model2, 2, 0, 1, 0, 0);
  j_ModelWrapper_setupModel((int)v5, (int)Resource, 0, 0);
  a1[1575] = (int)v4;
  v6 = (char *)*FIELD_U32(v4, 0x18).animations;
  ShuAnim_play(v6, (int)Resource, (int)&dword_60C90CA8);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
  *((_DWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 5) = 0;
  *((_DWORD *)v6 + 7) |= 2u;
  if ( sub_6068C438(MaskMgr_instance) )
  {
    v7 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90CA0, 2, 0, 1, 0, 0, 0, 0);
    v8 = (ModelWrapper *)operator_new_8DE25C(0x48u, 0, 4);
    v9 = sub_60421830(v8, v7, 2, 0, 1, 0, 0);
    j_ModelWrapper_setupModel((int)v9, (int)Resource, 0, 0);
    a1[1576] = (int)v8;
    *((_DWORD *)FIELD_U32(v8, 0x0) + 9) = 19;
    v10 = **(_DWORD **)(a1[1576] + 28);
    ShuAnim_play((_DWORD *)v10, (int)Resource, (int)&unk_60C90CB0);
    AnimationCtrl_setRepeat((ModelAnimation *)(v10 + 4), 0);
    FIELD_U32(v10, 24) = 0;
    FIELD_U32(v10, 20) = 0;
    FIELD_U32(v10, 28) |= 2u;
  }
  a1[1577] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90CB8, 0, 0, 1, 0, 0, 0, 0);
  a1[1588] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90CC0, 0, 0, 0, 0, 0, 0, 0);
  a1[1599] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90CC8, 0, 0, 0, 0, 0, 0, 0);
  a1[1610] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C90CD0, 0, 0, 0, 0, 0, 0, 0);
  if ( a1[1621] )
  {
    a1[1621] = 0;
    sub_60421AD4(a1[1575]);
    v11 = a1[1576];
    if ( v11 )
      sub_60421AD4(v11);
  }
  return (*(int (__fastcall **)(int, _DWORD, char *))(*(_DWORD *)a1[1577] + 180))(a1[1577], 0, v6);
}

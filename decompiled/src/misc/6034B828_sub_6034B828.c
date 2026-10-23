/* sub_6034B828
 * address: 0x6034B828   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034B828(_DWORD *a1)
{
  void *Resource; // r9
  void *Model2; // r6
  ModelWrapper *v4; // r7
  ModelWrapper *v5; // r0
  char v6; // r12
  int result; // r0
  void *v8; // r6
  int v9; // r7
  ModelWrapper *v10; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C94D00);
  Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C94D08, 1, 0, 0, 0, 0, 0, 0);
  v4 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v5 = ModelWrapper_ctor(v4, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v5, (int)Resource, 0, 0);
  a1[1706] = v4;
  a1[1707] = Resource_getModel2(Resource, (sead__SafeString *)&dword_60C94D10, 0, 0, 0, 0, 0, 0, 0);
  if ( ((unsigned int)algn_60C94CEC & ~(1614067972 << v6) & 1) == 0 && _cxa_guard_acquire((__guard *)algn_60C94CEC) )
  {
    dword_60C94D38 = (int)&sead__SafeStringBase__vtable;
    dword_60C94D3C = (int)"walk";
    sub_60000288();
    _cxa_guard_release((__guard *)algn_60C94CEC);
  }
  a1[1709] = 0;
  sub_6040F4B8(a1[1706], &dword_60C94D38, 1);
  result = sub_6068C438(MaskMgr_instance);
  if ( result == 1 )
  {
    v8 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&dword_60C94D18, 1, 0, 0, 0, 0, 0, 0);
    v9 = operator_new_8DE25C(0x30u, 0, 4);
    v10 = ModelWrapper_ctor((ModelWrapper *)v9, v8, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v10, (int)Resource, 0, 0);
    a1[1708] = v9;
    SkeletalAnim_play(**(_DWORD **)(v9 + 12), (int)Resource, (int)&dword_60C94D20);
    result = *(_DWORD *)a1[1708];
    FIELD_U32(result, 36) = 19;
  }
  return result;
}

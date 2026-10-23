/* sub_603ED650
 * address: 0x603ED650   size: 404   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_603ED650(int a1)
{
  void *Resource; // r4
  char v3; // r12
  ModelWrapper **v4; // r6
  int i; // r9
  void *Model2; // r7
  ModelWrapper *v7; // r5
  ModelWrapper *v8; // r0
  ModelWrapper *result; // r0
  _DWORD v10[11]; // [sp+34h] [bp-2Ch] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "wanwan";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v10);
  v4 = (ModelWrapper **)(a1 + 92);
  for ( i = 0; i != 6; ++i )
  {
    if ( ((unsigned int)&unk_60C99C90 & ~(1614731024 << v3) & 1) == 0 )
    {
      if ( _cxa_guard_acquire((__guard *)&unk_60C99C90) )
      {
        dword_60C99C98 = (int)&sead__SafeStringBase__vtable;
        dword_60C99C9C = (int)"wanwan_chainA";
        dword_60C99CA0 = (int)&sead__SafeStringBase__vtable;
        dword_60C99CA4 = (int)"wanwan_chainB";
        sub_60000288();
        _cxa_guard_release((__guard *)&unk_60C99C90);
      }
    }
    Model2 = (void *)Resource_getModel2(Resource, (sead__SafeString *)&unk_60C99C90 + (i & 1) + 1, 0, 0, 0, 0, 0, 0, 0);
    v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v8 = ModelWrapper_ctor(v7, Model2, 0, 0, 0, 0, 0);
    result = ModelWrapper_setup(v8, (int)Resource, 0, 0);
    *v4 = v7;
    v4 += 10;
  }
  return result;
}

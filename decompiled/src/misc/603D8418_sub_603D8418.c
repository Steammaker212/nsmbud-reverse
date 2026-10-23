/* sub_603D8418
 * address: 0x603D8418   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D8418(int a1)
{
  char v1; // r12
  int i; // r11
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  int result; // r0
  _DWORD v9[11]; // [sp+24h] [bp-2Ch] BYREF

  if ( ((unsigned int)&dword_60C99124[1] & ~(1614644280 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C99124[1]) )
  {
    dword_60C99134 = (int)&sead__SafeStringBase__vtable;
    dword_60C99138 = (int)"wanwan_chainA";
    dword_60C9913C = (int)&sead__SafeStringBase__vtable;
    dword_60C99140 = (int)"wanwan_chainB";
    sub_60000288();
    _cxa_guard_release(&dword_60C99124[1]);
  }
  for ( i = 0; i != 17; ++i )
  {
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "wanwan";
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, v9);
    Model2 = (void *)Resource_getModel2(
                       Resource,
                       (sead__SafeString *)&byte_60C99120[8 * ((i + 1) & 1) + 20],
                       1,
                       0,
                       0,
                       0,
                       0,
                       0,
                       0);
    v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
    ModelWrapper_setup(v7, (int)Resource, 0, 0);
    result = a1 + 6308;
    *(_DWORD *)(a1 + 6308 + 4 * i) = v6;
  }
  return result;
}

/* bolt_pyramid_ref
 * address: 0x605BF824   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall bolt_pyramid_ref(ModelWrapper **a1, void *a2, int a3)
{
  char v3; // r12
  void *Model2; // r6
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  ModelWrapper *result; // r0

  if ( ((unsigned int)&dword_60CB08A4[1] & ~(1616640076 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CB08A4[1]) )
  {
    dword_60CB08BC = (int)&sead__SafeStringBase__vtable;
    dword_60CB08C0 = (int)"bolt";
    dword_60CB08C4 = (int)&sead__SafeStringBase__vtable;
    dword_60CB08C8 = (int)"bolt_pyramid";
    sub_60000288();
    _cxa_guard_release(&dword_60CB08A4[1]);
  }
  Model2 = (void *)Resource_getModel2(a2, (sead__SafeString *)&dword_60CB08A0[2 * a3 + 7], 0, 0, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v9, a2, 0, 0);
  *a1 = v8;
  return result;
}

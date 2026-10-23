/* R_kanban_ref
 * address: 0x6067FFC8   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall R_kanban_ref(int a1)
{
  char v1; // r12
  void *Resource; // r5
  void *Model2; // r6
  ModelWrapper *v5; // r7
  ModelWrapper *v6; // r0
  ModelWrapper *result; // r0

  if ( ((unsigned int)&unk_60CB80F0 & ~(1617428452 << v1) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60CB80F0) )
  {
    dword_60CB80F8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB80FC = (int)"R_kanban_1_1";
    dword_60CB8100 = (int)&sead__SafeStringBase__vtable;
    dword_60CB8104 = (int)"R_kanban_9_9";
    sub_60000288();
    _cxa_guard_release((__guard *)&unk_60CB80F0);
  }
  if ( ((unsigned int)&dword_60CB80F4 & ~(1617428580 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB80F4) )
  {
    dword_60CB8108 = (int)&sead__SafeStringBase__vtable;
    dword_60CB810C = (int)"R_kanban_1_1";
    dword_60CB8110 = (int)&sead__SafeStringBase__vtable;
    dword_60CB8114 = (int)"R_kanban_9_9";
    sub_60000288();
    _cxa_guard_release(&dword_60CB80F4);
  }
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, (_DWORD *)&unk_60CB80F0 + 2 * FIELD_U32(a1, 648) + 2);
  Model2 = (void *)Resource_getModel2(
                     Resource,
                     (sead__SafeString *)&unk_60CB80F0 + FIELD_U32(a1, 648) + 3,
                     1,
                     0,
                     1,
                     0,
                     0,
                     0,
                     0);
  v5 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v6 = ModelWrapper_ctor(v5, Model2, 1, 0, 1, 0, 0);
  result = ModelWrapper_setup(v6, Resource, 0, 0);
  FIELD_U32(a1, 644) = v5;
  return result;
}

/* lift_zen_kanaami_ref
 * address: 0x60638E00   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall lift_zen_kanaami_ref(
        ModelWrapper **a1,
        void *a2,
        sead__SafeString *a3,
        ModelWrapper **a4,
        int a5,
        void *heap)
{
  int v9; // r7
  void *Model2; // r10
  ModelWrapper *v11; // r5
  ModelWrapper *v12; // r0
  char *result; // r0

  v9 = 0;
  a1[1] = *a4;
  a1[2] = a4[1];
  a1[3] = a4[2];
  Model2 = (void *)Resource_getModel2(a2, a3, 0, 1, 0, 0, 0, 0, (int)heap);
  v11 = (ModelWrapper *)operator_new_8DE25C(0x30u, heap, 4);
  v12 = ModelWrapper_ctor(v11, Model2, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v12, a2, 0, heap);
  *a1 = v11;
  (*(void (__fastcall **)(void *, int))(*(_DWORD *)FIELD_U32(v11, 0x0) + 68))(FIELD_U32(v11, 0x0), a5);
  (*((void (__fastcall **)(sead__SafeString *))a3->vtable + 3))(a3);
  (*((void (__fastcall **)(sead__SafeString *))a3->vtable + 3))(a3);
  result = a3->cstr;
  if ( result == "lift_zen_kanaami" )
  {
LABEL_5:
    result = (char *)FIELD_U32(v11, 0x0);
    *((_DWORD *)FIELD_U32(v11, 0x0) + 9) = 2;
  }
  else
  {
    while ( result[v9] == aLiftZenKanaami[v9] )
    {
      if ( result[v9] )
      {
        if ( ++v9 < 16 )
          continue;
      }
      goto LABEL_5;
    }
  }
  return result;
}

/* sub_6069339C
 * address: 0x6069339C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_6069339C(int a1, void *a2, int a3)
{
  void *Model2; // r7
  ModelWrapper *v7; // r4
  ModelWrapper *v8; // r0
  ModelWrapper *result; // r0
  void *model; // r6
  unsigned int v11; // r4
  int v12; // r5
  ModelWrapper **v13; // r7

  Model2 = (void *)Resource_getModel2(a2, (sead__SafeString *)a3, 0, 0, 0, 0, 0, 0, 0);
  v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v8 = ModelWrapper_ctor(v7, Model2, 0, 0, 0, 0, 0);
  result = ModelWrapper_setup(v8, a2, 0, 0);
  *(_DWORD *)a1 = v7;
  model = FIELD_U32(v7, 0x0);
  v11 = FIELD_U8(a3, 56);
  FIELD_U8(a1, 773) = v11;
  if ( v11 >= 0xC )
    v11 = 12;
  if ( v11 )
  {
    v12 = FIELD_U32(a3, 8);
    v13 = (ModelWrapper **)(a1 + 64);
    do
    {
      result = (ModelWrapper *)(*(int (__fastcall **)(void *, int))(*(_DWORD *)model + 84))(model, v12);
      *v13 = result;
      v13 += 16;
      --v11;
      v12 += 8;
    }
    while ( v11 );
  }
  FIELD_U8(a1, 772) = 0;
  return result;
}

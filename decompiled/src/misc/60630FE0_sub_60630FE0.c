/* sub_60630FE0
 * address: 0x60630FE0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60630FE0(int a1, void *a2, float a3)
{
  sead__SafeString *v6; // r9
  void *Model2; // r4
  ModelWrapper *v8; // r7
  ModelWrapper *v9; // r0
  int result; // r0
  int v11; // r4

  v6 = *(sead__SafeString **)a1;
  Model2 = (void *)Resource_getModel2(a2, *(sead__SafeString **)a1, 0, 1, 0, 0, 0, 0, 0);
  v8 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v9 = ModelWrapper_ctor(v8, Model2, 0, 1, 0, 0, 0);
  ModelWrapper_setup(v9, a2, 0, 0);
  FIELD_U32(a1, 4) = v8;
  FIELD_U8(a1, 720) = 0;
  result = 0;
  if ( *v6[3].cstr )
  {
    v11 = (int)*FIELD_U32(v8, 0x14);
    TexAnim_play(v11, (int)a2, &v6[3].vtable);
    FIELD_F32(v11, 20) = a3;
    result = FIELD_U32(v11, 28) | 2;
    FIELD_U32(v11, 28) = result;
  }
  return result;
}

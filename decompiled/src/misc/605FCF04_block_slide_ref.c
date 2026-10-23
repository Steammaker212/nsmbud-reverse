/* block_slide_ref
 * address: 0x605FCF04   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall block_slide_ref(int a1)
{
  void *ResArchiveById; // r5
  unsigned int result; // r0
  unsigned __int8 v4; // r9
  void *Model2; // r7
  ModelWrapper *v6; // r6
  ModelWrapper *v7; // r0
  unsigned int v8; // r0
  sead__SafeString a2; // [sp+1Ch] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  result = FIELD_U8(a1, 6871);
  if ( FIELD_U8(a1, 6871) )
  {
    v4 = 0;
    do
    {
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "block_slide";
      Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
      v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v7 = ModelWrapper_ctor(v6, Model2, 1, 0, 0, 0, 0);
      ModelWrapper_setup(v7, ResArchiveById, 0, 0);
      v8 = v4++;
      if ( v8 >= 0xF )
        v8 = 0;
      *(_DWORD *)(a1 + 4 * v8 + 6104) = v6;
      result = FIELD_U8(a1, 6871);
    }
    while ( v4 < result );
  }
  return result;
}

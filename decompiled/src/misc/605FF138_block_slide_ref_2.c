/* block_slide_ref_2
 * address: 0x605FF138   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall block_slide_ref_2(int a1)
{
  void *ResArchiveById; // r4
  unsigned int result; // r0
  unsigned __int8 v3; // r9
  void *Model2; // r7
  void *v5; // r10
  ModelWrapper *v6; // r4
  ModelWrapper *v7; // r0
  int v8; // r0
  int v9; // r7
  int *animations; // r0
  int v11; // r0
  int v12; // r0
  sead__SafeString a2; // [sp+24h] [bp-2Ch] BYREF

  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  result = FIELD_U8(a1, 6879);
  if ( FIELD_U8(a1, 6879) )
  {
    v3 = 0;
    do
    {
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "block_slide";
      Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 1, 0, 0, 0, 0, 0);
      v5 = ResArchiveById;
      v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
      v7 = ModelWrapper_ctor(v6, Model2, 1, 1, 0, 0, 0);
      ModelWrapper_setup(v7, v5, 0, 0);
      v8 = v3;
      if ( v3 >= 0xFu )
        v8 = 0;
      v9 = a1 + 4 * v8;
      FIELD_U32(v9, 6104) = v6;
      animations = (int *)FIELD_U32(v6, 0x14);
      ResArchiveById = v5;
      v11 = *animations;
      a2.vtable = &sead__SafeStringBase__vtable;
      a2.cstr = "block_slide";
      TexAnim_play(v11, (int)v5, &a2);
      ++v3;
      v12 = **(_DWORD **)(FIELD_U32(v9, 6104) + 20);
      FIELD_U32(v12, 20) = 0;
      FIELD_U32(v12, 28) |= 2u;
      result = FIELD_U8(a1, 6879);
    }
    while ( v3 < result );
  }
  return result;
}

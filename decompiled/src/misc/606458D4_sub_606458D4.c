/* sub_606458D4
 * address: 0x606458D4   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606458D4(int a1, int a2)
{
  int v4; // r5
  void *ResArchiveById; // r9
  int v6; // r1
  char *v7; // r6
  void *Model2; // r10
  ModelWrapper *v9; // r7
  ModelWrapper *v10; // r0
  ShapedCollider *v11; // r7
  ShapedCollider **v12; // r5
  float v13; // s16
  __int16 v14; // r0
  ShapedColliderInfo *v15; // r6
  unsigned int v16; // r4

  v4 = FIELD_U32(a1, 20);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v6 = v4 & 3;
  if ( v6 == 3 )
    v6 = 0;
  v7 = (char *)&unk_60CB5DD0 + 28 * v6;
  Model2 = (void *)Resource_getModel2(ResArchiveById, (sead__SafeString *)v7, 0, 0, 0, 0, 0, 0, 0);
  v9 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v10 = ModelWrapper_ctor(v9, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v10, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6192) = v9;
  v11 = (ShapedCollider *)(a1 + 6464);
  v12 = (ShapedCollider **)(a1 + 6196);
  FIELD_F32(a1, 108) = *((float *)v7 + 2) + FIELD_F32(a1, 108);
  FIELD_F32(a1, 112) = *((float *)v7 + 3) + FIELD_F32(a1, 112);
  v13 = *((float *)v7 + 4);
  FIELD_F32(a1, 508) = v13;
  FIELD_F32(a1, 512) = v13;
  v14 = (unsigned __int8)v7[24];
  v15 = *((ShapedColliderInfo **)v7 + 5);
  v16 = 44 * v14 + a1 + 6196;
  do
  {
    ShapedCollider_init(v11, (StageActor *)a1, v15);
    *v12 = v11;
    v12 += 11;
    v11 = (ShapedCollider *)((char *)v11 + 656);
    ++v15;
  }
  while ( (unsigned int)v12 < v16 );
  *(_DWORD *)a2 = a1 + 6196;
  FIELD_U32(a2, 4) = v12;
  FIELD_F32(a2, 8) = v13 + 64.0;
  FIELD_F32(a2, 12) = v13 + 64.0;
  return v13 + 64.0;
}

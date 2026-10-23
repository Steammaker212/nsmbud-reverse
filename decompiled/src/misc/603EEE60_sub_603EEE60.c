/* sub_603EEE60
 * address: 0x603EEE60   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EEE60(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  void *Resource; // r8
  void *Model2; // r6
  ModelWrapper *v6; // r7
  ModelWrapper *v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  int v10; // r1
  int *v11; // r3
  int *v12; // r3
  int v13; // r5
  int v14; // r6

  v2 = (_DWORD *)(a1 + 96);
  v3 = (FIELD_U32(a1, 84) >> 4) & 3;
  sead__SafeStringBase__operator_assign(a1 + 96, (int)&dword_60C99CE0[2 * v3]);
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v2);
  Model2 = (void *)Resource_getModel2(
                     Resource,
                     (sead__SafeString *)&dword_60C99D00[6 * v3 + 2 * (((FIELD_U32(a1, 84) >> 8) & 3u) % 3)],
                     0,
                     0,
                     0,
                     0,
                     0,
                     0,
                     0);
  v6 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v7 = ModelWrapper_ctor(v6, Model2, 0, 0, 0, 0, 0);
  ModelWrapper_setup(v7, (int)Resource, 0, 0);
  FIELD_U32(a1, 92) = v6;
  *((_DWORD *)FIELD_U32(v6, 0x0) + 9) = 16;
  FIELD_U16(a1, 88) = 240;
  FIELD_U32(a1, 80) = -1103101952;
  FIELD_U32(a1, 48) = -1065353216;
  v8 = FIELD_U32(a1, 84);
  v9 = (v8 >> 8) & 3;
  if ( (v8 & 0x1000) != 0 )
  {
    v10 = FIELD_U32(a1, 84) & 1;
    v11 = (int *)&unk_60AF2884;
    if ( !v10 )
      v11 = &dword_60AF2864;
    FIELD_U32(a1, 32) = v11[v9];
    v12 = (int *)&unk_60AF2894;
    if ( !v10 )
      v12 = &dword_60AF2874;
    FIELD_U32(a1, 36) = v12[v9];
    FIELD_U32(a1, 40) = 0;
  }
  FIELD_U32(a1, 76) = (2135553183 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  v13 = unk_60C99D60;
  v14 = unk_60C99D64;
  FIELD_U32(a1, 104) = ((sead__Random__getU32((void *)(dword_60C9CF0C + 1340))
                          * (unsigned __int64)(unsigned int)(v14 - v13)) >> 32)
                        + v13;
  return sub_603EF044(a1);
}

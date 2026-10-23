/* sub_603EC7B0
 * address: 0x603EC7B0   size: 548   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603EC7B0(int a1)
{
  void *Resource; // r4
  int v3; // r10
  int v4; // r8
  int *v5; // r5
  void *Model2; // r6
  ModelWrapper *v7; // r7
  ModelWrapper *v8; // r0
  void *v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r0
  unsigned int result; // r0
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int (**v20)(); // [sp+24h] [bp-2Ch] BYREF
  const char *v21; // [sp+28h] [bp-28h]

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60C99C34[2 * FIELD_U32(a1, 204)]);
  v3 = a1 + 92;
  v4 = 0;
  v5 = &dword_60C99AF4;
  do
  {
    Model2 = (void *)Resource_getModel2(
                       Resource,
                       (sead__SafeString *)&v5[8 * FIELD_U32(a1, 204)],
                       0,
                       1,
                       1,
                       0,
                       0,
                       0,
                       0);
    v7 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
    v8 = ModelWrapper_ctor(v7, Model2, 0, 1, 1, 0, 0);
    ModelWrapper_setup(v8, (int)Resource, 0, 0);
    *(_DWORD *)(v3 + 4 * v4) = v7;
    if ( (unsigned int)(FIELD_U32(a1, 204) - 1) > 1 )
      goto LABEL_8;
    v9 = *FIELD_U32(v7, 0x14);
    v20 = &sead__SafeStringBase__vtable;
    v21 = "box_wood_parts";
    TexAnim_play(v9, Resource, &v20);
    v10 = FIELD_U32(a1, 208);
    if ( v10 == 1 )
    {
      v11 = *(_DWORD *)(v3 + 4 * v4);
      v12 = 1065353216;
    }
    else
    {
      if ( v10 )
        goto LABEL_8;
      v11 = *(_DWORD *)(v3 + 4 * v4);
      v12 = 0;
    }
    v13 = **(_DWORD **)(v11 + 20);
    FIELD_U32(v13, 20) = v12;
    FIELD_U32(v13, 28) |= 2u;
LABEL_8:
    result = FIELD_U32(a1, 204) - 7;
    if ( result <= 2 )
    {
      v15 = **(_DWORD ***)(*(_DWORD *)(v3 + 4 * v4) + 28);
      v20 = &sead__SafeStringBase__vtable;
      v21 = "boss_kameck_block_parts";
      ShuAnim_play(v15, (int)Resource, (int)&v20);
      AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)(v3 + 4 * v4) + 28) + 4), 0);
      v16 = FIELD_U32(a1, 204);
      if ( v16 == 7 )
      {
        v17 = **(_DWORD **)(*(_DWORD *)(v3 + 4 * v4) + 28);
        FIELD_U32(v17, 20) = 0x40000000;
        result = v17 + 4;
      }
      else
      {
        if ( v16 == 8 )
          v18 = 1065353216;
        else
          v18 = 0;
        v19 = **(_DWORD **)(*(_DWORD *)(v3 + 4 * v4) + 28);
        result = v19 + 4;
        FIELD_U32(v19, 20) = v18;
      }
      FIELD_U32(result, 24) |= 2u;
    }
    ++v4;
    v5 += 2;
  }
  while ( v4 != 4 );
  return result;
}

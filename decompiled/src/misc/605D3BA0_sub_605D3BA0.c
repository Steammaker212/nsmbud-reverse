/* sub_605D3BA0
 * address: 0x605D3BA0   size: 492   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D3BA0(_DWORD *a1)
{
  int i; // r11
  void *Resource; // r0
  void *v4; // r9
  sead__SafeString *v5; // r7
  void *Model2; // r6
  int v7; // r10
  ModelWrapper *v8; // r0
  int v9; // r7
  int result; // r0
  int v11; // r1
  int v12; // r1
  bool v13; // vf
  int v14; // r6
  int v15; // r1
  int v16; // r2
  int v17; // r2
  int v18; // r1

  for ( i = 0; i != 6; ++i )
  {
    Resource = (void *)LoadResource(ResourceMgrRelated_instance, &dword_60CB12C8[6 * i]);
    v4 = Resource;
    v5 = (sead__SafeString *)&dword_60CB12C8[6 * i + 2];
    if ( i )
    {
      Model2 = (void *)Resource_getModel2(Resource, v5, 1, 1, 0, 0, 0, 0, 0);
      v7 = operator_new_8DE25C(0x30u, 0, 4);
      v8 = ModelWrapper_ctor((ModelWrapper *)v7, Model2, 1, 1, 0, 0, 0);
      ModelWrapper_setup(v8, v4, 0, 0);
      SkeletalAnim_play(**(_DWORD **)(v7 + 12), (int)v4, (const char **)&dword_60CB12C8[6 * i + 4]);
      if ( i == 4 )
      {
        v9 = **(_DWORD **)(v7 + 20);
        TexAnim_play(v9, (int)v4, &dword_60CB1378);
        AnimationCtrl_setRepeat((ModelAnimation *)(v9 + 4), 1);
        FIELD_U32(v9, 24) = 0;
        FIELD_U32(v9, 20) = 1065353216;
        FIELD_U32(v9, 28) |= 2u;
      }
      result = a1[164];
      v11 = a1[166];
      if ( v11 < result )
      {
        a1[166] = v11 + 1;
        v12 = a1[165] + v11;
        v13 = __OFSUB__(v12, result);
        result = v12 - result;
        if ( result < 0 != v13 )
          result = v12;
        *(_DWORD *)(a1[163] + 4 * result) = v7;
      }
    }
    else
    {
      v14 = 6;
      do
      {
        result = Resource_getModel2(v4, v5, 0, 0, 0, 0, 0, 0, 0);
        v15 = a1[173];
        v16 = a1[175];
        if ( v16 < v15 )
        {
          a1[175] = v16 + 1;
          v17 = a1[174] + v16;
          v13 = __OFSUB__(v17, v15);
          v18 = v17 - v15;
          if ( v18 < 0 != v13 )
            v18 = v17;
          *(_DWORD *)(a1[172] + 4 * v18) = result;
        }
        --v14;
      }
      while ( v14 );
    }
  }
  return result;
}

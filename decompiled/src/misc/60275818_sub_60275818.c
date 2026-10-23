/* sub_60275818
 * address: 0x60275818   size: 524   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60275818(int a1)
{
  _DWORD *v2; // r6
  int v3; // r5
  int result; // r0
  int v5; // r5
  int v6; // r5
  int v7; // r5
  int v8; // r0
  int v9; // r1
  unsigned int U32; // r0
  int v11; // r1
  int v12; // r6
  ActorBuildInfo v13; // [sp+0h] [bp-40h] BYREF

  v2 = (_DWORD *)(a1 + 6096);
  v3 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C8ED70 + 8))();
  if ( v3 != result )
  {
    v5 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
    result = (*(int (**)(void))(dword_60C8ED90 + 8))();
    if ( v5 != result )
    {
      v6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
      result = (*(int (**)(void))(dword_60C8EDB0 + 8))();
      if ( v6 != result )
      {
        v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v2 + 8))(*v2);
        result = (*(int (**)(void))(dword_60C8ED4C + 8))();
        if ( v7 != result )
        {
          v8 = FIELD_U32(a1, 6312);
          v9 = FIELD_U32(a1, 6304);
          v13.settings1 = (int)&sead__SafeStringBase__vtable;
          v13.settings2 = (int)"run";
          SkeletalAnim_play(v8, v9, (int)&v13);
          AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6312) + 4), 1);
          *(_DWORD *)(FIELD_U32(a1, 6312) + 24) = 1065353216;
          U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v11 = FIELD_U32(a1, 6312);
          FIELD_F32(v11, 20) = (float)(int)(12 * ((10 * (unsigned __int64)U32) >> 32));
          FIELD_U32(v11, 28) |= 2u;
          result = -6288;
          v12 = FIELD_U32(a1, 24);
          if ( (v12 & 0x10000000) == 0 )
          {
            memset(&v13.parentId, 0, 36);
            v13.settings1 = FIELD_U32(a1, 20);
            v13.settings2 = v12;
            v13.profile = Profile__get(0x17u);
            v13.position = *(Vec3 *)(a1 + 6460);
            v13.field_1C = FIELD_U32(a1, 160);
            v13.field_20 = 0;
            result = (int)ActorMgr__create((void *)ActorMgr__instance, &v13, 0);
            if ( result )
            {
              result = FIELD_U32(result, 8);
              FIELD_U32(a1, 6524) = result;
            }
          }
        }
      }
    }
  }
  return result;
}

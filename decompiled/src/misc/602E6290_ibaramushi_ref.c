/* ibaramushi_ref
 * address: 0x602E6290   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ibaramushi_ref(_DWORD *a1, int a2, int a3)
{
  int Resource; // r7
  int result; // r0
  _DWORD v8[10]; // [sp+0h] [bp-28h] BYREF

  v8[0] = &sead__SafeStringBase__vtable;
  v8[1] = "ibaramushi";
  Resource = LoadResource(ResourceMgrRelated_instance, v8);
  TexAnim_play(**(_DWORD **)(*a1 + 20), Resource, &dword_60C92340[2 * a2 + 3]);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 20) + 4), a3);
  *(_DWORD *)(**(_DWORD **)(*a1 + 20) + 24) = 1065353216;
  if ( a2 != 3 )
  {
    sub_60446088(**(_DWORD **)(*a1 + 28), Resource, (int)&dword_60C92340[2 * a2 + 3]);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*a1 + 28) + 4), a3);
    *(_DWORD *)(**(_DWORD **)(*a1 + 28) + 24) = 1065353216;
  }
  TexAnim_play(**(_DWORD **)(a1[1] + 20), Resource, &dword_60C92340[2 * a2 + 11]);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1] + 20) + 4), a3);
  result = **(_DWORD **)(a1[1] + 20);
  FIELD_U32(result, 24) = 1065353216;
  if ( a2 != 3 )
  {
    sub_60446088(**(_DWORD **)(a1[1] + 28), Resource, (int)&dword_60C92340[2 * a2 + 11]);
    AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(a1[1] + 28) + 4), a3);
    result = **(_DWORD **)(a1[1] + 28);
    FIELD_U32(result, 24) = 1065353216;
  }
  return result;
}

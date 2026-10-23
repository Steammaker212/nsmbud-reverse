/* YB_wait_ref
 * address: 0x607D4AF8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall YB_wait_ref(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r1
  unsigned int v6; // r2
  int *v7; // r0
  int v8; // r5
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  result = a1[43];
  if ( result != a2 )
  {
    a1[43] = a2;
    v4 = a1[6];
    v5 = a1[4];
    v6 = FIELD_U32(v4, 16);
    v7 = *(int **)(v4 + 20);
    if ( v6 > 1 )
      ++v7;
    v8 = *v7;
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "YB_wait";
    TexAnim_play(v8, v5, v9);
    AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), 1);
    FIELD_U32(v8, 24) = 1065353216;
    result = a1[43];
    if ( !result )
    {
      a1[44] = 0;
      return 0;
    }
  }
  return result;
}

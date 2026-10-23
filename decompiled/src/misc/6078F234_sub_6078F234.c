/* sub_6078F234
 * address: 0x6078F234   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078F234(int result, int a2)
{
  int v2; // r2
  int *v3; // r4
  unsigned int v4; // r1
  int *v5; // r2
  int v6; // r5

  v2 = FIELD_U32(result, 292);
  if ( v2 )
  {
    v3 = &dword_60CC4440[5 * a2];
    v4 = FIELD_U32(v2, 16);
    v5 = *(int **)(v2 + 20);
    if ( v4 > 1 )
      ++v5;
    v6 = *v5;
    TexAnim_play(*v5, FIELD_U32(result, 16), v3);
    AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), v3[2]);
    result = v3[3];
    FIELD_U32(v6, 24) = result;
  }
  return result;
}

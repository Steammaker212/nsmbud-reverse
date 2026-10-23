/* sub_600DA19C
 * address: 0x600DA19C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600DA19C(int *a1)
{
  int *v2; // r5
  int v3; // r1
  unsigned int v4; // r0
  int v5; // r1
  unsigned int v6; // r0

  KoopalingBase__vf5B8((int)a1);
  if ( **(_BYTE **)(a1[1778] + 20) )
  {
    v2 = a1 + 1774;
    sub_60421AD4(a1[1774]);
    v3 = *(_DWORD *)(a1[1774] + 12);
    v4 = *(_DWORD *)(a1[1774] + 68);
    if ( *(_DWORD *)(a1[1774] + 8) > v4 )
      v3 += 4 * v4;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v3 + 4), 0);
    v5 = *(_DWORD *)(*v2 + 12);
    v6 = *(_DWORD *)(*v2 + 68);
    if ( *(_DWORD *)(*v2 + 8) > v6 )
      v5 += 4 * v6;
    *(_DWORD *)(*(_DWORD *)v5 + 24) = a1[1940];
  }
  return (*(int (__fastcall **)(int *))(*a1 + 1040))(a1);
}

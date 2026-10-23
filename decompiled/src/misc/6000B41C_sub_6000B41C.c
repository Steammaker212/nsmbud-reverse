/* sub_6000B41C
 * address: 0x6000B41C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6000B41C(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)PlayerLookTargetList_instance;
  if ( !PlayerLookTargetList_instance )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x24u, a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BC04D4;
    dword_60C7B460 = (int)v3;
    *v2 = &off_60BC04E4;
    v2[5] = v2 + 5;
    v2[6] = v2 + 5;
    v2[7] = 0;
    v2[8] = 36;
    PlayerLookTargetList_instance = (int)v2;
  }
  return v2;
}

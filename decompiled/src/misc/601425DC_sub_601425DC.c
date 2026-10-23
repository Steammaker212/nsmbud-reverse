/* sub_601425DC
 * address: 0x601425DC   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601425DC(_DWORD *a1)
{
  int v2; // r5
  ActiveColliderMgr *v3; // r6

  v2 = 2;
  a1[1547] = 0;
  a1[1548] = 2;
  a1[156] = a1 + 1540;
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 244))(a1) == 1 )
  {
    a1[155] = a1 + 1531;
    a1[1535] = 6;
    ActiveCollider__init((ActiveCollider *)(a1 + 1607), (StageActor *)a1, &stru_60AF693C, (int)(a1 + 1683));
    v3 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1607))
      && !ActiveColliderMgr_isInCreateList(v3, (ActiveCollider *)(a1 + 1607)) )
    {
      ActiveColliderMgr_addToCreateList(v3, (ActiveCollider *)(a1 + 1607));
    }
    LightMask__init((RevealMaskRelated *)(a1 + 1549), 0, 2);
    *((float *)a1 + 1559) = (*(float (__fastcall **)(_DWORD *))(*a1 + 0x108))(a1);
    a1[1527] = a1[27];
    a1[1528] = a1[28];
    a1[1529] = a1[29];
    a1[123] = 0;
    a1[124] = 0;
    v2 = 1;
    a1[125] = 1082130432;
    a1[126] = 1082130432;
  }
  return v2;
}

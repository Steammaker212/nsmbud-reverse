/* sub_606FF41C
 * address: 0x606FF41C   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606FF41C(int a1)
{
  _DWORD *v2; // r2
  ActiveColliderMgr *v3; // r5

  sub_606FF4BC(a1);
  FIELD_U32(a1, 7296) = 0;
  v2 = (_DWORD *)(a1 + 7300);
  do
  {
    *v2 = 0;
    v2[4] = 0;
    v2[5] = 0x40000000;
    v2 += 9;
  }
  while ( (unsigned int)v2 <= a1 + 7480 );
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(a1 + 188));
  ActiveColldierMgr_removeFromList3(v3, a1 + 188);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6192));
  return 1;
}

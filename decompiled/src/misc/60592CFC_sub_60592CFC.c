/* sub_60592CFC
 * address: 0x60592CFC   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60592CFC(int a1)
{
  _BYTE *v1; // r6
  ActiveCollider *v2; // r5
  ActiveColliderMgr *v3; // r4

  FIELD_U32(a1, 8204) = 16;
  v1 = (_BYTE *)(a1 + 8161);
  if ( FIELD_U8(a1, 8161) )
  {
    v2 = (ActiveCollider *)(a1 + 188);
    v3 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188));
    ActiveColldierMgr_removeFromCreateList(v3, v2);
    ActiveColldierMgr_removeFromList3(v3, (int)v2);
  }
  *v1 = 0;
  return 0;
}

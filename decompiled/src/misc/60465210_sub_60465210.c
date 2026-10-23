/* sub_60465210
 * address: 0x60465210   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60465210(unsigned int *a1)
{
  unsigned int v2; // r4
  ActiveColliderMgr *v3; // r6
  ActiveColliderMgr *v4; // r7

  v2 = a1[9];
  if ( FIELD_U8(v2, 6258) )
  {
    FIELD_U32(v2, 6236) = 660;
    FIELD_U32(v2, 6240) = 4;
    FIELD_U16(v2, 6248) = 0;
    v2 = a1[9];
  }
  v3 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v2 + 188));
  ActiveColldierMgr_removeFromCreateList(v3, (ActiveCollider *)(v2 + 188));
  ActiveColldierMgr_removeFromList3(v3, v2 + 188);
  v4 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(v2 + 6332));
  ActiveColldierMgr_removeFromCreateList(v4, (ActiveCollider *)(v2 + 6332));
  ActiveColldierMgr_removeFromList3(v4, v2 + 6332);
  (*(void (__fastcall **)(unsigned int, int *))(*(_DWORD *)a1[9] + 192))(a1[9], &dword_60C9D2B8);
  sub_6000C0F4(a1);
  return 1;
}

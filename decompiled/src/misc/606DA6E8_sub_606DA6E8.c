/* sub_606DA6E8
 * address: 0x606DA6E8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DA6E8(int a1)
{
  int v2; // r2
  int v3; // r1
  int result; // r0
  int *v5; // r5
  _DWORD *v6; // r4
  int v7; // t1

  v2 = FIELD_U32(a1, 6564) + 1;
  FIELD_U32(a1, 6564) = v2;
  v3 = 30;
  v5 = (int *)(a1 + 6512);
  result = FIELD_U32(a1, 6512);
  if ( result == 2 )
    v3 = 55;
  if ( !(v2 % v3) )
  {
    SE_SYS_KINO_GIVE_ITEM_ref_2(a1);
    ++FIELD_U16(a1, 6546);
    PlayerLookTargetMgr_remove(PlayerLookTargetList_instance, a1 + 6608);
    if ( FIELD_U16(a1, 6546) >= FIELD_S32(a1, 6524) )
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CBB99C);
    result = *v5;
  }
  if ( result == 1 )
  {
    v7 = FIELD_U32(a1, 6540);
    v6 = (_DWORD *)(a1 + 6540);
    result = v7;
    if ( v7 )
      *v6 = --result;
  }
  return result;
}

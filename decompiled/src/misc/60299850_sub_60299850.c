/* sub_60299850
 * address: 0x60299850   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60299850(Actor *a1)
{
  int v2; // r0
  Actor *previous; // r1
  int ProfileId; // r0
  int *v5; // r2
  int v6; // s0
  int *v7; // r1

  (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 72))(a1);
  (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 724))(a1);
  v2 = *(_DWORD *)&a1[76].movementId;
  a1[1].childCount = a1[76].settigns2;
  a1[1].field_2C = v2;
  a1[1].field_30 = 0;
  previous = (Actor *)a1[76].field_20.previous;
  a1[1].field_34 = 0;
  a1[1].parent = previous;
  a1[1].field_3C = 0;
  a1[78].field_2C = a1[76].field_30;
  a1[1].settigns2 = 0;
  a1[1].settings1 = (int)a1[76].field_20.next;
  ProfileId = Actor__getProfileId(a1);
  v5 = dword_60299938;
  if ( ProfileId == 491 )
    v5 = &dword_60299938[1];
  a1[2].vtable = 0x20000000;
  v6 = *v5;
  a1[1].field_40 = *v5;
  a1[1].field_44 = v6;
  a1[1].field_48 = v6;
  v7 = dword_60299940;
  if ( (a1[1].heap & 0x2000000) != 0 )
    v7 = &dword_60299940[1];
  a1[1].field_20.next = (sead_ListNode *)*v7;
  LOBYTE(a1[75].parent) = 1;
  return sub_602A7CEC(a1);
}

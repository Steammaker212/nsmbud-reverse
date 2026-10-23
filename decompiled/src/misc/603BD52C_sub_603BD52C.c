/* sub_603BD52C
 * address: 0x603BD52C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BD52C(int a1)
{
  _BOOL4 active; // r0
  char v3; // r0

  active = ActiveCollider_check5C((ActiveCollider *)(a1 + 188), 8);
  FIELD_U8(a1, 6852) = 0;
  if ( active )
  {
    v3 = FIELD_U8(a1, 2984);
    if ( (v3 & 3) != 0 )
    {
      FIELD_U8(a1, 6852) = 1;
      FIELD_U8(a1, 6853) = (v3 & 1) == 0;
    }
  }
  else
  {
    FIELD_U8(a1, 6820) = 0;
  }
  sub_603BD5E8(a1);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_602A33AC((_BYTE *)a1);
  if ( FIELD_U8(a1, 6864) )
    return 1;
  if ( FIELD_U8(a1, 6854) )
    StageActor__cullCheck((StageActor *)a1, 8);
  else
    sub_603A2194(a1);
  return 1;
}

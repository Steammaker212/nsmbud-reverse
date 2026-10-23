/* sub_603934DC
 * address: 0x603934DC   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603934DC(int a1)
{
  if ( !FIELD_U8(a1, 2992) )
  {
    if ( FIELD_U8(a1, 3000) )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( FIELD_U8(a1, 2996) )
  {
LABEL_5:
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B008D0, 3);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 2);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 0);
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), 0, 1);
    CollisionMgr_vf14(a1 + 648);
  }
LABEL_6:
  if ( !FIELD_U8(a1, 6398) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 76))(a1);
  FIELD_U8(a1, 6401) = 0;
  return 6401;
}

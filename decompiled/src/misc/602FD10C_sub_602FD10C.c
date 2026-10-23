/* sub_602FD10C
 * address: 0x602FD10C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FD10C(StateActor *a1)
{
  FIELD_U32(a1, 0x50) = StageActor__directionToPlayerX(a1, &FIELD_U32(a1, 0x6C));
  *(_DWORD *)&a1[1]._.collisionMgr[1752] = 120;
  sub_603005F4(a1, 15);
  return (*(int (__fastcall **)(StateActor *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60C92B3C);
}

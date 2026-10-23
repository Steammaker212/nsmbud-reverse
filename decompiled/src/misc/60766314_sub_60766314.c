/* sub_60766314
 * address: 0x60766314   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60766314(int a1, StateBase *a2, int a3)
{
  int v5; // r0

  v5 = FIELD_S8(a1, 84);
  if ( v5 >= 0 )
  {
    FIELD_U32(PlayerMgr_instance, 144) |= 1 << v5;
    FIELD_U8(dword_60C99DE4, 29) |= 1 << FIELD_U8(a1, 84);
    FIELD_U32(a1, 1204) |= 0x20u;
    FIELD_U32(a1, 1228) |= 0x400000u;
  }
  FIELD_U32(a1, 9704) = 0;
  FIELD_U32(a1, 9708) = 0;
  FIELD_U32(a1, 9696) = a3;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 1);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 3);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 4);
  return StateMgr__changeState((StateMgr *)(a1 + 9680), a2);
}

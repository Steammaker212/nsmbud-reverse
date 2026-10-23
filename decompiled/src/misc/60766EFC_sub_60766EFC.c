/* sub_60766EFC
 * address: 0x60766EFC   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60766EFC(int a1)
{
  char v1; // r12
  int v3; // r5
  StateMethodExecuter *result; // r0
  int v5; // r0

  v3 = FIELD_U32(dword_60C995D0, 32);
  if ( ((unsigned int)&dword_60C99A44 & ~(1618374436 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C99A44) )
  {
    dword_60C99A40 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C99A44);
  }
  if ( !v3
    || (result = (StateMethodExecuter *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 8))(v3, &dword_60C99A40)) == 0 )
  {
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
    FIELD_U32(a1, 9696) = 0;
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 1);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 3);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 628))(a1, 4);
    return StateMgr__changeState((StateMgr *)(a1 + 9680), &stru_60CBF37C);
  }
  return result;
}

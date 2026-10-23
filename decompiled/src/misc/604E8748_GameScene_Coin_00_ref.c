/* GameScene_Coin_00_ref
 * address: 0x604E8748   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall GameScene_Coin_00_ref(int a1, int a2)
{
  char v2; // r12

  if ( ((unsigned int)dword_60CA5C90 & ~(1615759204 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CA5C90) )
  {
    dword_60CA5C98 = (int)&sead__SafeStringBase__vtable;
    dword_60CA5C9C = (int)"GameScene_Coin_00";
    _cxa_guard_release(dword_60CA5C90);
  }
  return sub_6047E0EC(&dword_60CA5C98, *(_DWORD *)(FIELD_U32(a1, 12) + 4 * FIELD_U32(a1, 264)), 1, a2);
}

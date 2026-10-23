/* ItemStock_DelItem_ref
 * address: 0x604F7280   size: 280   group: items
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ItemStock_DelItem_ref(int a1, int a2)
{
  char v2; // r12
  int result; // r0

  result = FIELD_U32(a1, 9648);
  if ( result == 1 )
  {
    if ( ((unsigned int)&dword_60CA6C60[7] & ~(1615819440 << v2) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60CA6C60[7]) )
      {
        dword_60CA6CAC = (int)&sead__SafeStringBase__vtable;
        dword_60CA6CB0 = (int)"ItemStock_DelItem_01";
        _cxa_guard_release(&dword_60CA6C60[7]);
      }
    }
    return sub_6047E0EC(&dword_60CA6CAC, FIELD_U32(a1, 3588), 0);
  }
  else if ( a2 >= 1 )
  {
    if ( ((unsigned int)&dword_60CA6C60[8] & ~(1615819568 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[8]) )
    {
      dword_60CA6CB4 = (int)&sead__SafeStringBase__vtable;
      dword_60CA6CB8 = (int)"ItemStock_DelItem_00";
      _cxa_guard_release(&dword_60CA6C60[8]);
    }
    return sub_6047E0EC(&dword_60CA6CB4, FIELD_U32(a1, 3588), 1, a2);
  }
  return result;
}

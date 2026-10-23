/* sub_60082188
 * address: 0x60082188   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60082188(int result)
{
  char v1; // r12
  int v2; // r4

  v2 = FIELD_U32(result, 7244);
  if ( v2 )
  {
    if ( ((unsigned int)&dword_60C81104 & ~(1611145644 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    result = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C81100);
    if ( result == 1 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 192))(v2, &unk_60C82020);
  }
  return result;
}

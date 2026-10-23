/* sub_601162D4
 * address: 0x601162D4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601162D4(int a1)
{
  char v1; // r12
  int v2; // r4

  v2 = FIELD_U32(a1, 7244);
  if ( ((unsigned int)&dword_60C86B30 & ~(1611752176 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C86B30) )
  {
    dword_60C86B2C = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C86B30);
  }
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C86B2C) == 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 820))(v2);
  else
    return 0;
}

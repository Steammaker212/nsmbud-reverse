/* sub_603D9298
 * address: 0x603D9298   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D9298(_DWORD *a1, int a2, int a3)
{
  int v6; // r7
  char v7; // r12
  int result; // r0

  v6 = FIELD_U32(a3, 64);
  if ( !v6 || Actor__getProfileId(*(Actor **)(a3 + 64)) != 392 )
    goto LABEL_8;
  if ( ((unsigned int)&dword_60C7B39C & ~(1614648032 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
  {
    dword_60C7B398 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C7B39C);
  }
  if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B398) != 1 || (result = 0, !FIELD_U8(v6, 7531)) )
  {
LABEL_8:
    Enemy__collisionThrowableObject(a1, a2, a3);
    return 1;
  }
  return result;
}

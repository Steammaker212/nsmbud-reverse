/* sub_60169BD8
 * address: 0x60169BD8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60169BD8(int a1, int *a2)
{
  char v2; // r12
  int *v3; // r4
  int *v4; // r6
  int v5; // r7

  v3 = a2;
  v4 = *(int **)(ActorMgr__instance + 27180);
  if ( v4 != a2 )
  {
    while ( 1 )
    {
      v5 = *v3;
      if ( ((unsigned int)&dword_60C88AA8 & ~(1612094536 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C88AA8) )
      {
        dword_60C88AA4 = (int)&off_60BD4BA4;
        _cxa_guard_release(&dword_60C88AA8);
      }
      if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C88AA4) == 1 && FIELD_U32(v5, 240) == a1 )
        break;
      if ( v4 == ++v3 )
        return v4;
    }
  }
  return v3;
}

/* sub_607F2624
 * address: 0x607F2624   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_607F2624()
{
  char v0; // r12
  int *v1; // r0
  int v2; // r4
  int v3; // r1

  v1 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v1 += 6;
  v2 = *v1;
  if ( ((unsigned int)&dword_60C81740 & ~(1618945624 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  if ( v2 )
  {
    v3 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v2 + 8))(v2, &dword_60C8173C);
    if ( v3 )
      v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  sub_604431BC(DrawMgr_instance, v3, 1u);
  sub_603FF398(dword_60C99E2C);
  return sub_60443298((int)DrawMgr_instance);
}

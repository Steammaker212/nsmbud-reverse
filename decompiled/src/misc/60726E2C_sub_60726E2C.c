/* sub_60726E2C
 * address: 0x60726E2C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60726E2C(int a1)
{
  char v1; // r12
  int *v3; // r0
  int v4; // r5
  int v5; // r6

  v3 = *(int **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v3 += 6;
  v4 = *v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1618112104 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v5 = v4 + 420;
  if ( !(*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8173C) )
    v5 = 420;
  sub_60445504(*(_DWORD **)v5, *(_DWORD **)(a1 + 36), 0, 0, &dword_60B3B95C);
  return sub_60445504(*(_DWORD **)v5, *(_DWORD **)(a1 + 40), 0, 0, &dword_60B3B95C);
}

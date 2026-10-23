/* sub_60722468
 * address: 0x60722468   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60722468(int a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r0
  int result; // r0

  v3 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 6u )
    v3 += 6;
  v4 = (_DWORD *)*v3;
  if ( ((unsigned int)&dword_60C81740 & ~(1618093216 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C81740) )
  {
    dword_60C8173C = (int)&off_60BC6E70;
    _cxa_guard_release(&dword_60C81740);
  }
  v5 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))(*v4 + 8))(v4, &dword_60C8173C);
  if ( v5 )
    v5 = v4;
  v5[18] = a1 + 3548;
  v5[19] = a1 + 3376;
  result = v5[105];
  FIELD_U32(result, 880) = a1 + 16;
  return result;
}

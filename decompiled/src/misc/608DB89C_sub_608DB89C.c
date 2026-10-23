/* sub_608DB89C
 * address: 0x608DB89C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DB89C(int a1, unsigned int a2, void *a3)
{
  char v3; // r12
  int (__fastcall ***v7)(_DWORD, int *); // r6
  int v8; // r7
  int result; // r0
  _DWORD *v10; // r7

  v7 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619900620 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v8 = (int)(v7 + 48);
  if ( !(**v7)(v7, &dword_60CC6AE4) )
    v8 = 192;
  result = *(unsigned __int8 *)v8;
  if ( *(_BYTE *)v8 )
  {
    v10 = (_DWORD *)operator_new_8DE25C(0x3Cu, a3, 32);
    sub_608DD7BC(v10, a2, (int)a3);
    FIELD_U32(a1, 460) = v10;
    return sub_608DC84C(FIELD_U32(a1, 456), v10);
  }
  return result;
}

/* sub_608DADE4
 * address: 0x608DADE4   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void *__fastcall sub_608DADE4(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  void *result; // r0
  void *v6; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619897868 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v4 = (int)(v3 + 48);
  if ( !(**v3)(v3, &dword_60CC6AE4) )
    v4 = 192;
  result = (void *)*(unsigned __int8 *)v4;
  if ( *(_BYTE *)v4 )
  {
    sub_608AA754(a1 + 8);
    v6 = *(void **)(a1 + 436);
    if ( v6 )
    {
      operator_delete_8DE3FC(v6);
      FIELD_U32(a1, 436) = 0;
    }
    result = *(void **)(a1 + 428);
    if ( result )
    {
      operator_delete_8DE3FC(result);
      FIELD_U32(a1, 428) = 0;
      return 0;
    }
  }
  return result;
}

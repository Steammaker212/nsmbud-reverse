/* sub_605A24B0
 * address: 0x605A24B0   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A24B0(int a1, int a2)
{
  int (__fastcall ***v2)(_DWORD, int *); // r5
  int v3; // r4
  char v4; // r12
  int result; // r0
  int v6; // [sp+4h] [bp-14h] BYREF

  v2 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  v3 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a2 + 32))(a2, a1, 3);
  if ( ((unsigned int)&dword_60CAFEB0 & ~(1616520428 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60CAFEB0) )
  {
    dword_60CAFEAC = (int)&off_60BC8348;
    _cxa_guard_release(&dword_60CAFEB0);
  }
  if ( !v2 )
  {
    result = 0;
    if ( !v3 )
      return result;
    goto LABEL_10;
  }
  result = (**v2)(v2, &dword_60CAFEAC);
  if ( result )
    result = (int)v2;
  if ( v3 )
  {
LABEL_10:
    result = sub_605C2DE8(result + 73008, v3, &v6);
    if ( result == 1 )
    {
      result = v6;
      FIELD_U32(v3, 544) = 8;
      FIELD_U32(v3, 548) = result;
    }
  }
  return result;
}

/* sub_608DCC6C
 * address: 0x608DCC6C   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DCC6C(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r7
  int v7; // r0
  unsigned int v8; // r6
  int v9; // r0
  int result; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619905688 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v6 = (int)(v5 + 48);
  if ( !(**v5)(v5, &dword_60CC6AE4) )
    v6 = 192;
  if ( !*(_BYTE *)v6 )
    return 0;
  v7 = sub_608DC930(a1);
  v8 = sub_608ABDD0(a1, v7);
  FIELD_U32(a1, 548) = operator_new_8DE2C8(v8, a2, 64);
  v9 = sub_608DC930(a1);
  result = sub_608ABDF0(a1, v9, FIELD_U32(a1, 548), v8);
  FIELD_U8(a1, 556) = 1;
  return result;
}

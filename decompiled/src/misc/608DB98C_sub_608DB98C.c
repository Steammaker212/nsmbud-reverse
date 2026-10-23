/* sub_608DB98C
 * address: 0x608DB98C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DB98C(int a1, int a2, int a3, int a4, int a5)
{
  char v5; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r6
  int v11; // r4
  int v12; // r4
  int v13; // r2

  v10 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619900868 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v11 = (int)(v10 + 48);
  if ( !(**v10)(v10, &dword_60CC6AE4) )
    v11 = 192;
  if ( !*(_BYTE *)v11 )
    return 0;
  v12 = sub_608DC930(FIELD_U32(a1, 456));
  v13 = sub_608AAA04(a1 + 8);
  FIELD_U32(a1, 444) = v13;
  if ( v13 )
    v13 += a2;
  return sub_608DBAA4(a1, v12, v13, a3, a4, a5);
}

/* sub_608DB5F8
 * address: 0x608DB5F8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DB5F8(int a1, int a2)
{
  int v2; // r7
  char v3; // r12
  int (__fastcall ***v6)(_DWORD, int *); // r6
  int v7; // r4
  int result; // r0
  bool v9; // zf
  int v10; // r4
  int v11; // r0

  v6 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619899940 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v7 = (int)(v6 + 48);
  if ( !(**v6)(v6, &dword_60CC6AE4) )
    v7 = 192;
  result = *(unsigned __int8 *)v7;
  v9 = result == 0;
  if ( *(_BYTE *)v7 )
  {
    v2 = FIELD_U32(a1, 40);
    v9 = v2 == 0;
  }
  if ( !v9 )
  {
    v10 = 0;
    do
    {
      v11 = sub_608AB144(a1 + 8, v10 + 0x4000000);
      sub_608AC9B4(v11, 0, a2);
      ++v10;
    }
    while ( v2 != v10 );
    FIELD_U8(a1, 464) = 0;
    return 0;
  }
  return result;
}

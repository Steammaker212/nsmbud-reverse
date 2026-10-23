/* sub_608DAED0
 * address: 0x608DAED0   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DAED0(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r6
  int result; // r0

  v3 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619898104 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v4 = (int)(v3 + 48);
  if ( !(**v3)(v3, &dword_60CC6AE4) )
    v4 = 192;
  result = *(unsigned __int8 *)v4;
  if ( *(_BYTE *)v4 )
  {
    result = sub_608AE1DC();
    if ( result == 1 )
    {
      if ( FIELD_U8(a1, 504) )
      {
        sead__CriticalSection__lock(a1 + 468);
        sub_608AB028(a1 + 8);
        return sead__CriticalSection__unlock(a1 + 468);
      }
      else
      {
        return sub_608AB028(a1 + 8);
      }
    }
  }
  return result;
}

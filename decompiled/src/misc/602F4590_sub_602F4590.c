/* sub_602F4590
 * address: 0x602F4590   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F4590(unsigned int *a1, int (__fastcall ***a2)(_DWORD, int *))
{
  char v2; // r12
  int v5; // r7
  unsigned int v6; // r0

  if ( ((unsigned int)dword_60C927E0 & ~(1613710764 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C927E0) )
  {
    dword_60C927E0[1] = -33554432;
    dword_60C927E0[2] = 0x2000000;
    _cxa_guard_release(dword_60C927E0);
  }
  if ( ((unsigned int)dword_60C7B430 & ~(1613710828 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
  {
    Enemy_RTTI = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C7B430);
  }
  v5 = (int)(a2 + 1572);
  if ( !(**a2)(a2, &Enemy_RTTI) )
    v5 = 6288;
  v6 = dword_60C927E0[*(unsigned __int8 *)v5 + 1] + *a1;
  *a1 = v6;
  return (int)(float)((float)(*(float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0))
                            + (float)((float)((float)(v6 & 0xFFFFFF)
                                            * *(float *)((char *)&sinLutTable[1] + ((v6 >> 20) & 0xFF0)))
                                    * 0.000000059605))
                    * 50332000.0);
}

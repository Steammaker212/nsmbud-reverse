/* sub_608DCFB4
 * address: 0x608DCFB4   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_608DCFB4(int a1, unsigned int a2, int a3, int a4, int a5)
{
  char v5; // r12
  int (__fastcall ***v10)(_DWORD, int *); // r5
  int v11; // r4
  char v12; // r12
  int (__fastcall ***v13)(_DWORD, int *); // r4
  int v14; // r5
  int v15; // r4
  int v16; // r7

  v10 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619906540 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v11 = (int)(v10 + 48);
  if ( !(**v10)(v10, &dword_60CC6AE4) )
    v11 = 192;
  if ( !*(_BYTE *)v11 )
    return 0;
  v13 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619906680 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v14 = (int)(v13 + 48);
  if ( !(**v13)(v13, &dword_60CC6AE4) )
    v14 = 192;
  if ( *(_BYTE *)v14 && ((v15 = a5) != 0 || (v15 = FIELD_U32(a1, 552)) != 0) && (v16 = a1 + 12, sub_608B2C28(v16)) )
    return sub_608B2C3C(v16, a2, v15, a3, a4);
  else
    return 0;
}

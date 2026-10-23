/* sub_608DB6EC
 * address: 0x608DB6EC   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_608DB6EC(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  char v6; // r12
  int (__fastcall ***v11)(_DWORD, int *); // r5
  int v12; // r4
  char v13; // r12
  void (__fastcall ***v14)(_DWORD, int *); // r4

  v11 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619900192 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v12 = (int)(v11 + 48);
  if ( !(**v11)(v11, &dword_60CC6AE4) )
    v12 = 192;
  if ( !*(_BYTE *)v12 )
    return 128;
  v14 = *(void (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619900332 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  if ( v14 )
    (**v14)(v14, &dword_60CC6AE4);
  if ( FIELD_U8(a1, 465)
    || (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(dword_60CCFAF4 + 24) + 20))(FIELD_U32(dword_60CCFAF4, 24)) )
  {
    return 128;
  }
  else
  {
    return sub_608AB160(a1 + 8, a2, a3, a4, a5, a6);
  }
}

/* sub_6030859C
 * address: 0x6030859C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030859C(int a1)
{
  char v1; // r12
  int v2; // r1
  _BYTE *v3; // r4
  int (__fastcall ***v4)(_DWORD, int *); // r5
  char v5; // r12

  v3 = (_BYTE *)(a1 + 6596);
  v2 = FIELD_S8(a1, 6596);
  if ( FIELD_U32(a1, 6564) )
  {
    v4 = (int (__fastcall ***)(_DWORD, int *))sub_607891A0(PlayerMgr_instance, v2);
    if ( ((unsigned int)&dword_60C7B37C & ~(1613792732 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v4 || (**v4)(v4, &dword_60C7B378) != 1 )
      goto LABEL_16;
LABEL_15:
    sub_60775238(v4);
    goto LABEL_16;
  }
  if ( (unsigned __int8)v2 >= 4u )
    v2 = 0;
  v4 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 4 * v2 + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1613792872 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v4 && (**v4)(v4, &dword_60C7B378) )
    goto LABEL_15;
LABEL_16:
  *v3 = -1;
  return 255;
}

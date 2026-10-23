/* sub_608DB448
 * address: 0x608DB448   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DB448(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v5)(_DWORD, int *); // r6
  int v6; // r7
  int v7; // r0

  v5 = *(int (__fastcall ****)(_DWORD, int *))(dword_60CCFAF4 + 20);
  if ( ((unsigned int)&dword_60CC6AE8 & ~(1619899508 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CC6AE8) )
  {
    dword_60CC6AE4 = (int)&off_60C280A0;
    _cxa_guard_release(&dword_60CC6AE8);
  }
  v6 = (int)(v5 + 48);
  if ( !(**v5)(v5, &dword_60CC6AE4) )
    v6 = 192;
  if ( *(_BYTE *)v6 && (v7 = sub_608DC930(FIELD_U32(a1, 456))) != 0 )
    return nn__atk__SoundArchive__GetItemLabel_const(v7, a2);
  else
    return 0;
}

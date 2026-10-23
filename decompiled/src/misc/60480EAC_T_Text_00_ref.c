/* T_Text_00_ref
 * address: 0x60480EAC   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall T_Text_00_ref(int a1)
{
  char v2; // r12
  int v4; // [sp+4h] [bp-14h] BYREF

  sub_60480FC8();
  if ( ((unsigned int)&dword_60C9EDE4 & ~(1615335120 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9EDE4) )
  {
    dword_60C9EDE8 = (int)&sead__SafeStringBase__vtable;
    dword_60C9EDEC = (int)"T_Text_00";
    sub_60000288();
    _cxa_guard_release(&dword_60C9EDE4);
  }
  v4 = 1;
  sub_60475334(a1 + 2060, a1 + 12824, &dword_60C9EDE8, &v4);
  sub_6045BF58(a1 + 40, 0);
  sub_6045BF58(a1 + 444, 1);
  sub_6045BF58(a1 + 848, 2);
  sub_6045BF58(a1 + 1252, 3);
  return sub_6045BF58(a1 + 1656, 4);
}

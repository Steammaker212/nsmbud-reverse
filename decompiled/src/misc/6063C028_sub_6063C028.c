/* sub_6063C028
 * address: 0x6063C028   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063C028(int a1)
{
  char v2; // r12

  sub_6063CC70(a1 + 6200, a1 + 6124);
  if ( ((unsigned int)&dword_60CB55A0[2] & ~(1617150040 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB55A0[2]) )
  {
    dword_60CB55BC = 0;
    dword_60CB55C0 = 0;
    dword_60CB55C4 = 12;
    dword_60CB55C8 = 0x10000;
    dword_60CB55CC = 0x8000000;
    dword_60CB55D0 = 0x200000;
    dword_60CB55D4 = 0x100000;
    dword_60CB55D8 = 0x1000000;
    _cxa_guard_release(&dword_60CB55A0[2]);
  }
  sub_608337BC(a1 + 6736, &dword_60CB55BC);
  FIELD_U32(a1, 156) = FIELD_U32(a1, 6740);
  sub_6063C10C(a1);
  return sub_6063C3D4(a1, 1);
}

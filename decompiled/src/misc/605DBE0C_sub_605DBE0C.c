/* sub_605DBE0C
 * address: 0x605DBE0C   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DBE0C(int a1, _BYTE *a2)
{
  char v2; // r12
  int v5; // r0
  char v7; // r0

  v5 = FIELD_U32(a1, 6260);
  if ( (v5 & 0xC00) != 0 || v5 & 0x10000002 | FIELD_U32(a1, 6264) & 0x2000 )
    return 0;
  if ( ((unsigned int)&dword_60C7B374 & ~(1616756320 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( !a2
    || (**(int (__fastcall ***)(_BYTE *, int *))a2)(a2, &dword_60C7B370) != 1
    || (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a2 + 1432))(a2, a1, 1) != 1 )
  {
    return 0;
  }
  v7 = a2[84];
  FIELD_U8(a1, 6336) = v7;
  FIELD_U8(a1, 84) = v7;
  if ( (FIELD_U8(a1, 6265) & 0x20) != 0 )
    sub_605E0870(a1, &dword_60CB18A0, 0);
  sub_605D79D0(a1, (StateBase *)&dword_60CB1828, 0);
  return 1;
}

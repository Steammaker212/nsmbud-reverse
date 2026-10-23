/* sub_60611FCC
 * address: 0x60611FCC   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60611FCC(int a1)
{
  char v1; // r12
  _BYTE *v3; // r5

  v3 = *(_BYTE **)(dword_60C995D0 + 32);
  if ( ((unsigned int)&dword_60C995D8 & ~(1616977908 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C995D8) )
  {
    dword_60C995D4 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995D8);
  }
  if ( v3 && (*(int (__fastcall **)(_BYTE *, int *))(*(_DWORD *)v3 + 8))(v3, &dword_60C995D4) == 1 && v3[128] )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB31BC);
  else
    return sub_606153B0(a1);
}

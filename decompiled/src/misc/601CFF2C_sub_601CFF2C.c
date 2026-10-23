/* sub_601CFF2C
 * address: 0x601CFF2C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CFF2C(int a1, int a2)
{
  char v2; // r12

  if ( ((unsigned int)&unk_60C8AF00 & ~(1612513092 << v2) & 1) == 0 && _cxa_guard_acquire((__guard *)&unk_60C8AF00) )
  {
    dword_60C8AF04 = (int)&unk_60AFC328;
    dword_60C8AF08 = (int)&unk_60AFC314;
    dword_60C8AF0C = (int)&unk_60AFC33C;
    dword_60C8AF10 = (int)&unk_60AFC350;
    dword_60C8AF14 = (int)&unk_60AFC364;
    dword_60C8AF18 = (int)&unk_60AFC364;
    dword_60C8AF1C = (int)&unk_60AFC378;
    dword_60C8AF20 = (int)&unk_60AFC328;
    unk_60C8AF24 = &unk_60AFC3B4;
    unk_60C8AF28 = &unk_60AFC38C;
    unk_60C8AF2C = &unk_60AFC3A0;
    dword_60C8AF30 = (int)&unk_60AFC3C8;
    _cxa_guard_release((__guard *)&unk_60C8AF00);
  }
  return *((_DWORD *)&unk_60C8AF00 + a2 + 1);
}

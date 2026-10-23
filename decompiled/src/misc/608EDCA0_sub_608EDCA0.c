/* sub_608EDCA0
 * address: 0x608EDCA0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608EDCA0(int a1, int a2)
{
  int v4; // r4
  int v5; // r4
  char v6; // r12
  _DWORD v7[32]; // [sp+0h] [bp-118h] BYREF
  _DWORD v8[38]; // [sp+80h] [bp-98h] BYREF

  v8[0] = 2;
  v8[1] = sub_608EDDA0;
  sub_608EF0F0(v7, v8);
  v7[23] = a2;
  v4 = FIELD_U32(a1, 28);
  qmemcpy(v8, v7, 0x7Cu);
  v8[31] = sub_60909634;
  v5 = sub_608F01B0(v4, v8);
  if ( ((unsigned int)&dword_60CCEBF8 & ~(1619975452 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CCEBF8) )
  {
    dword_60CCEBF4 = (int)&off_60BD83BC;
    _cxa_guard_release(&dword_60CCEBF8);
  }
  if ( v5 )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60CCEBF4);
}

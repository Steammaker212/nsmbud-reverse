/* sub_600F7000
 * address: 0x600F7000   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F7000(int a1, int a2, int a3)
{
  char v3; // r12
  unsigned __int8 *v6; // r6
  int v7; // r1
  unsigned int v8; // r0

  v6 = *(unsigned __int8 **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B37C & ~(1611624480 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( v6 && (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C7B378) == 1 )
  {
    (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v6 + 1168))(v6, a1, 4);
    v7 = 0;
    FIELD_U8(a3, 110) |= 2u;
    v8 = v6[84];
    if ( v8 < 4 )
      v7 = (char)v8;
    *(_WORD *)(a1 + 2 * v7 + 6140) = 32;
  }
  return 1;
}

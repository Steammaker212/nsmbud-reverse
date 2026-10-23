/* sub_6098E0F8
 * address: 0x6098E0F8   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098E0F8(int a1, int a2)
{
  unsigned int v4; // r6
  int v5; // r0
  char v6; // r12
  int v7; // r7
  char v8; // r12
  int *v9; // r0

  v4 = FIELD_U16(a2, 24);
  if ( v4 <= 1 )
    LOWORD(v4) = 1;
  v5 = sub_609200A0(a2);
  v7 = FIELD_U16(a2, 26);
  if ( v5 > v7 )
    LOWORD(v7) = v5;
  if ( ((unsigned int)&dword_60CA047C & ~(1620631860 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60CA047C) )
  {
    if ( ((unsigned int)&dword_60CA0474 & ~(1620631900 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60CA0474) )
    {
      dword_60CA0470 = 0;
      _cxa_guard_release(&dword_60CA0474);
    }
    dword_60CA0478 = (int)&dword_60CA0470;
    _cxa_guard_release(&dword_60CA047C);
  }
  if ( a1 )
  {
    v9 = (int *)(**(int (__fastcall ***)(int))a1)(a1);
    if ( v9 )
    {
      while ( v9 != &dword_60CA0478 )
      {
        v9 = (int *)*v9;
        if ( !v9 )
          goto LABEL_17;
      }
      FIELD_U16(a1, 16) = v4;
      FIELD_U16(a1, 18) = v7;
    }
  }
LABEL_17:
  sub_60917A78(a2 + 64);
  FIELD_U64(a1, 8) = FIELD_U32(a2, 256);
  return 1;
}

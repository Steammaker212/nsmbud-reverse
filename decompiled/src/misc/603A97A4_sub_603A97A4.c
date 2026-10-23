/* sub_603A97A4
 * address: 0x603A97A4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603A97A4(int a1, _DWORD *a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r6
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r0

  v4 = (int (__fastcall ***)(_DWORD, int *))a2[36];
  if ( ((unsigned int)&dword_60C9797C & ~(1614452672 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9797C) )
  {
    dword_60C97978 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C9797C);
  }
  if ( v4 )
  {
    v5 = (**v4)(v4, &dword_60C97978);
    if ( v5 )
      v5 = (int)v4;
  }
  else
  {
    v5 = 0;
  }
  if ( ((unsigned int)dword_60C97984 & ~(1614452800 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C97984) )
  {
    dword_60C97980 = (int)&off_60BF4A9C;
    _cxa_guard_release(dword_60C97984);
  }
  v6 = (int)(a2 + 164);
  if ( !(*(int (__fastcall **)(_DWORD *, int *))(*a2 + 8))(a2, &dword_60C97980) )
    v6 = 656;
  v7 = *(_DWORD *)v6;
  if ( *(_DWORD *)v6 <= 0x13u )
  {
    v8 = v5 + 784 * v7 + 7888;
LABEL_18:
    sub_603A5ED0(v8);
    return 1;
  }
  if ( (v7 & 0xFFFFFFFE) == 0x14 )
  {
    v8 = v5 + 792 * v7 - 9536;
    goto LABEL_18;
  }
  return 1;
}

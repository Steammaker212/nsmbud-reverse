/* sub_60257538
 * address: 0x60257538   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60257538(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v4)(_DWORD, int *); // r5
  unsigned int v5; // r2
  int v6; // r1
  int (__fastcall ***v7)(_DWORD, _DWORD); // r0
  unsigned int v8; // r2
  int v9; // r1

  v4 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C8E02C & ~(1613067604 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8E02C) )
  {
    dword_60C8E028 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C8E02C);
  }
  if ( v4 && (**v4)(v4, &dword_60C8E028) == 1 )
  {
    v5 = FIELD_U32(a2, 104);
    v6 = 0;
    v7 = (int (__fastcall ***)(_DWORD, _DWORD))(v4 + 1579);
    if ( v5 >> 1 )
    {
      v8 = v5 >> 1;
      if ( (v8 & 3) != 0 )
      {
        v6 = 0;
        do
        {
          v7 = (int (__fastcall ***)(_DWORD, _DWORD))v7[46];
          ++v6;
        }
        while ( (v8 & 3) != v6 );
      }
      if ( v8 - 1 >= 3 )
      {
        v9 = v8 - v6;
        do
        {
          v9 -= 4;
          v7 = *(int (__fastcall ****)(_DWORD, _DWORD))(*((_DWORD *)v7[46][46] + 46) + 184);
        }
        while ( v9 );
      }
    }
    sub_60258174(v7);
  }
  return 1;
}

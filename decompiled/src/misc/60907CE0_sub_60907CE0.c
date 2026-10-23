/* sub_60907CE0
 * address: 0x60907CE0   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60907CE0(int a1, int a2, _DWORD *a3)
{
  int v5; // r1
  int v6; // r6
  bool v7; // cc
  int (__fastcall *v8)(int, _DWORD, int); // r7

  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  v5 = a3[1];
  v6 = 0;
  while ( *(_BYTE *)(v5 + v6) )
  {
    if ( !*(_BYTE *)(v5 + v6 + 1) )
    {
      ++v6;
      break;
    }
    if ( !*(_BYTE *)(v5 + v6 + 2) )
    {
      v6 += 2;
      break;
    }
    v7 = v6 + 2 < 0x80000;
    v6 += 3;
    if ( !v7 )
    {
      v6 = 0;
      break;
    }
  }
  v8 = *(int (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a2 + 4);
  (*(void (__fastcall **)(_DWORD *))(*a3 + 12))(a3);
  return v8(a2, a3[1], v6);
}

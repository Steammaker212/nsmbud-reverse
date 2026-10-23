/* sub_60903294
 * address: 0x60903294   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60903294(_DWORD *a1, int a2, unsigned int *a3)
{
  int v6; // r4
  bool v7; // cc
  unsigned int v8; // r8
  unsigned int v9; // r0

  v6 = 0;
  v7 = a2 <= 0;
  if ( a2 >= 0 )
    v7 = a1[9] <= a2;
  if ( !v7 )
  {
    v8 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[10] + 16 * a2 + 8));
    if ( !a3 )
      return a1[11] + v8;
    v9 = ((int (__fastcall *)(_DWORD))off_60C5CAFC[(a1[12] ^ 1) + 4])(*(_DWORD *)(a1[10] + 16 * a2 + 12));
    if ( v9 >= v8 )
    {
      *a3 = v8;
      a3[1] = v9 - v8;
      return a1[11] + v8;
    }
  }
  return v6;
}

/* sub_608DEBEC
 * address: 0x608DEBEC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DEBEC(int *a1, void *a2)
{
  int result; // r0
  int v5; // r6
  unsigned int U32; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r2
  bool v10; // cc

  result = *a1;
  if ( result >= 2 )
  {
    v5 = result - 1;
    do
    {
      U32 = sead__Random__getU32(a2);
      v7 = a1[2];
      v8 = (U32 * (unsigned __int64)(unsigned int)(v5 + 1)) >> 32;
      v9 = *(_DWORD *)(v7 + 4 * v5);
      *(_DWORD *)(v7 + 4 * v5) = *(_DWORD *)(v7 + 4 * v8);
      v10 = v5-- <= 1;
      result = a1[2];
      *(_DWORD *)(result + 4 * v8) = v9;
    }
    while ( !v10 );
  }
  return result;
}

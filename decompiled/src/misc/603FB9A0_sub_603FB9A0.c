/* sub_603FB9A0
 * address: 0x603FB9A0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FB9A0(int a1, unsigned int a2)
{
  unsigned int v3; // r5
  int v4; // r0
  int v5; // r1
  int result; // r0
  int v7; // r1
  int v8; // r2

  if ( FIELD_U32(a1, 764) == 1 )
  {
    v3 = 0;
    if ( a2 >= 4 )
      a2 = 0;
    v4 = 9 * a2;
    v5 = dword_60C9A1E0;
    ++*(_DWORD *)(dword_60C9A1E0 + 4 * v4 + 560);
    ((void (__fastcall *)(int))loc_607FAB18)(v5 + 708);
  }
  else
  {
    v3 = a2;
  }
  if ( v3 >= 6 )
    v3 = 0;
  result = a1 + 72 * v3;
  v7 = FIELD_U32(result, 296);
  v8 = v7 - 1;
  if ( v7 - 1 >= 99 )
    v8 = 99;
  if ( v7 < 1 )
    v8 = 0;
  FIELD_U32(result, 296) = v8;
  return result;
}

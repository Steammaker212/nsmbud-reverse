/* sub_60203FF0
 * address: 0x60203FF0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60203FF0(signed int *a1)
{
  signed int v2; // r4
  int v3; // r5
  int result; // r0
  signed int *v5; // r7
  signed int *v6; // r6
  signed int *v7; // r9
  signed int *v8; // r8
  bool v9; // zf
  signed int *v10; // r0

  *((_WORD *)a1 + 8) = 0;
  *((_WORD *)a1 + 10) = 0;
  *((_WORD *)a1 + 12) = 0;
  *((_WORD *)a1 + 14) = 0;
  *((_WORD *)a1 + 16) = 0;
  v2 = 0;
  v3 = sub_601A443C(dword_60C89E18, 2, 0);
  result = FIELD_U32(v3, 28);
  if ( result >= 1 )
  {
    v5 = a1 + 9;
    v6 = a1 + 10;
    v7 = a1 + 12;
    v8 = a1 + 11;
    do
    {
      v9 = sub_60183054(v3, v2, 64) == 0;
      v10 = v5;
      if ( v9
        && (v9 = sub_60183054(v3, v2, 128) == 0, v10 = v6, v9)
        && (v9 = sub_60183054(v3, v2, 256) == 0, v10 = v7, v9) )
      {
        if ( sub_60183054(v3, v2, 512) )
          *v8 = v2;
      }
      else
      {
        *v10 = v2;
      }
      result = FIELD_U32(v3, 28);
      ++v2;
    }
    while ( v2 < result );
  }
  return result;
}

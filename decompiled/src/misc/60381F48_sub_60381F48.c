/* sub_60381F48
 * address: 0x60381F48   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60381F48(int a1, unsigned int a2)
{
  unsigned int v3; // r0
  unsigned int *v4; // r5
  unsigned int v5; // r4
  unsigned int v6; // r7
  unsigned int *v7; // r8
  unsigned int v8; // r1
  unsigned int result; // r0
  int v10; // r5
  unsigned int v11; // r4

  v4 = (unsigned int *)(a1 + 6300);
  v3 = FIELD_U32(a1, 6300);
  v5 = a2;
  v7 = v4 + 1;
  v6 = v4[1];
  if ( v3 < a2 )
    v5 = v3;
  if ( v5 )
  {
    do
    {
      if ( *(_BYTE *)(*(_DWORD *)v6 + 128) )
        sub_60386654(*(_DWORD *)v6 + 12, 1);
      --v5;
      v6 += 4;
    }
    while ( v5 );
    v6 = *v7;
    v3 = *v4;
  }
  if ( v3 >= a2 )
    v3 = a2;
  sub_60386654(*(_DWORD *)(v6 + 4 * v3) + 12, 2);
  v8 = *v4;
  result = a2 + 1;
  if ( (int)(a2 + 1) < (int)*v4 && v8 > result )
  {
    v10 = *v7 + 4 * result;
    v11 = v8 - 1 - a2;
    do
    {
      result = *(_DWORD *)v10;
      if ( *(_BYTE *)(*(_DWORD *)v10 + 128) )
      {
        if ( (unsigned int)(FIELD_U32(result, 48) - 1) >= 2 )
          result = sub_60386654(result + 12, 3);
      }
      --v11;
      v10 += 4;
    }
    while ( v11 );
  }
  return result;
}

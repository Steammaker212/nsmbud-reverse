/* sub_608B470C
 * address: 0x608B470C   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B470C(int result, int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r4
  int v5; // r3
  int v6; // r12
  int v7; // r2

  v2 = FIELD_U32(result, 4);
  v3 = FIELD_U32(a2, 4);
  v4 = v2;
  if ( v3 < v2 )
    v4 = FIELD_U32(a2, 4);
  if ( v4 >= 1 )
  {
    if ( v2 > v3 )
      v2 = FIELD_U32(a2, 4);
    v5 = 0;
    if ( (v4 & 1) != 0 )
    {
      **(_BYTE **)result = **(_BYTE **)a2;
      v5 = 1;
    }
    if ( v2 != 1 )
    {
      do
      {
        *(_BYTE *)(*(_DWORD *)result + v5) = *(_BYTE *)(*(_DWORD *)a2 + v5);
        v6 = *(_DWORD *)result + v5;
        v7 = *(_DWORD *)a2 + v5;
        v5 += 2;
        FIELD_U8(v6, 1) = FIELD_U8(v7, 1);
      }
      while ( v5 < v4 );
    }
    v2 = FIELD_U32(result, 4);
  }
  if ( v4 < v2 )
  {
    do
      *(_BYTE *)(*(_DWORD *)result + v4++) = 0;
    while ( v4 < FIELD_U32(result, 4) );
  }
  FIELD_U8(result, 8) = FIELD_U8(a2, 8);
  FIELD_U32(result, 12) = FIELD_U32(a2, 12);
  return result;
}

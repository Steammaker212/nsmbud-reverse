/* sub_6042ADEC
 * address: 0x6042ADEC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042ADEC(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r0
  signed int v4; // r5
  int result; // r0
  unsigned int v6; // r0
  unsigned int v7; // [sp+4h] [bp-14h]

  v7 = a2;
  v3 = 0;
  v4 = 0;
  if ( a2 < 6 )
    v3 = a2;
  result = a1[14 * v3 + 183];
  if ( result >= 1 )
  {
    do
    {
      sub_6042AC08(a1, a2, v4);
      a2 = v7;
      v6 = 0;
      ++v4;
      if ( v7 < 6 )
        v6 = v7;
      result = a1[14 * v6 + 183];
    }
    while ( v4 < result );
  }
  return result;
}

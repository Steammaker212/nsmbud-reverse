/* sub_605BE604
 * address: 0x605BE604   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_605BE604(unsigned __int8 *a1, int a2)
{
  unsigned int result; // r0
  bool v5; // cc
  int v6; // r1
  unsigned int v7; // r1
  float v8; // s0
  int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0

  result = *a1;
  v5 = result > 8;
  if ( result >= 8 )
    v5 = a1[1] > 7u;
  if ( !v5 )
  {
    v6 = a1[2];
    if ( a1[2] )
    {
LABEL_19:
      a1[2] = v6 - 1;
      return v6 - 1;
    }
    v7 = a1[1];
    if ( result == v7 )
    {
      v8 = -0.5;
      if ( result >= 8 )
        LOWORD(result) = 0;
      v9 = 84 * (__int16)result + a2;
    }
    else
    {
      if ( result <= 7 )
      {
        sub_608337AC(84 * (__int16)result + a2, -0.5);
        v7 = a1[1];
      }
      if ( v7 > 7 )
        goto LABEL_14;
      v8 = -0.5;
      v9 = 84 * (__int16)v7 + a2;
    }
    sub_608337AC(v9, v8);
LABEL_14:
    v10 = *a1;
    v6 = 4;
    if ( v10 <= 7 )
      *a1 = v10 + 1;
    v11 = a1[1];
    if ( v11 <= 7 )
      a1[1] = v11 - 1;
    a1[2] = 4;
    goto LABEL_19;
  }
  return result;
}

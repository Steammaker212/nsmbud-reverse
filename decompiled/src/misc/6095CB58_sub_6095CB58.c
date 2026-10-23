/* sub_6095CB58
 * address: 0x6095CB58   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6095CB58(unsigned int *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  int v3; // lr
  unsigned int v4; // r1
  int v5; // r2
  int v6; // r4
  unsigned int v7; // r1
  unsigned int v8; // r4
  int v9; // r2
  int v10; // r5

  v1 = *a1;
  v2 = *a1 & 0x7F800000;
  v3 = HIWORD(*a1) & 0x8000;
  if ( v2 == 2139095040 )
  {
    if ( (v1 & 0x7FFFFF) != 0 )
    {
      if ( (v1 & 0x7FFFFF) > 0x3FFFFF )
      {
        v4 = HIWORD(v1);
        v5 = 0x7FFF;
LABEL_9:
        v3 = v4 | v5;
        goto LABEL_12;
      }
      v3 |= 0x7DFFu;
    }
    else
    {
      v3 |= 0x7C00u;
    }
  }
  else
  {
    v6 = (v2 >> 23) - 112;
    if ( v6 >= 31 )
    {
      v3 |= 0x7C00u;
      goto LABEL_12;
    }
    if ( v2 >= 0x38000001 )
    {
      v5 = (v6 << 10) & 0x7C00;
      v4 = (v1 >> 13) & 0x3FF | v3;
      goto LABEL_9;
    }
  }
LABEL_12:
  v7 = a1[1];
  v8 = v7 & 0x7F800000;
  v9 = HIWORD(v7) & 0x8000;
  if ( (v7 & 0x7F800000) == 0x7F800000 )
  {
    if ( (v7 & 0x7FFFFF) != 0 )
    {
      if ( (v7 & 0x7FFFFF) <= 0x3FFFFF )
        v9 |= 0x7DFFu;
      else
        v9 = HIWORD(v7) | 0x7FFF;
    }
    else
    {
      v9 |= 0x7C00u;
    }
  }
  else
  {
    v10 = (v8 >> 23) - 112;
    if ( v10 < 31 )
    {
      if ( v8 >= 0x38000001 )
        v9 |= (v7 >> 13) & 0x3FF | (v10 << 10) & 0x7C00;
    }
    else
    {
      v9 |= 0x7C00u;
    }
  }
  return v3 | (v9 << 16);
}

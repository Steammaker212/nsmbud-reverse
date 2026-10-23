/* SE_OBJ_SNAKE_BLOCK_ref_2_helper_8131CC
 * address: 0x608131CC   size: 568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall SE_OBJ_SNAKE_BLOCK_ref_2_helper_8131CC(_DWORD *a1, const char *a2)
{
  int v4; // r7
  _DWORD *v5; // r5
  _DWORD *result; // r0
  int v7; // r0

  v4 = 0;
  v5 = a1;
  do
  {
    if ( v5[117] && !strcmp(a2, (const char *)v5[123]) && v5[118] <= v5[119] )
      return v5;
    ++v4;
    v5 += 125;
  }
  while ( v4 < 20 );
  if ( !a1[117] )
    return a1;
  if ( !a1[242] )
    return a1 + 125;
  if ( !a1[367] )
    return a1 + 250;
  if ( !a1[492] )
  {
    v7 = 375;
    return &a1[v7];
  }
  if ( !a1[617] )
    return a1 + 500;
  if ( !a1[742] )
  {
    v7 = 625;
    return &a1[v7];
  }
  if ( !a1[867] )
  {
    v7 = 750;
    return &a1[v7];
  }
  if ( !a1[992] )
  {
    v7 = 875;
    return &a1[v7];
  }
  if ( !a1[1117] )
    return a1 + 1000;
  if ( !a1[1242] )
  {
    v7 = 1125;
    return &a1[v7];
  }
  if ( !a1[1367] )
  {
    v7 = 1250;
    return &a1[v7];
  }
  if ( !a1[1492] )
  {
    v7 = 1375;
    return &a1[v7];
  }
  if ( !a1[1617] )
  {
    v7 = 1500;
    return &a1[v7];
  }
  if ( !a1[1742] )
  {
    v7 = 1625;
    return &a1[v7];
  }
  if ( !a1[1867] )
  {
    v7 = 1750;
    return &a1[v7];
  }
  if ( !a1[1992] )
  {
    v7 = 1875;
    return &a1[v7];
  }
  if ( !a1[2117] )
    return a1 + 2000;
  if ( !a1[2242] )
  {
    v7 = 2125;
    return &a1[v7];
  }
  if ( !a1[2367] )
  {
    v7 = 2250;
    return &a1[v7];
  }
  result = 0;
  if ( !a1[2492] )
    return a1 + 2375;
  return result;
}

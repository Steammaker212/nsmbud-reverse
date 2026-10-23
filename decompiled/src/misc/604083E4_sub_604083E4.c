/* sub_604083E4
 * address: 0x604083E4   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_604083E4(char *result)
{
  unsigned int v1; // r1
  int v2; // r3
  bool v3; // zf
  int v4; // r2
  char *v5; // r4
  unsigned int v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r3

  v1 = 0;
  do
  {
    v2 = v1 + (v1 >> 31);
    v3 = (v1 & 1) == 0;
    v4 = 15;
    ++v1;
    if ( v3 )
      v4 = 240;
    v5 = result;
    if ( (unsigned int)(v2 >> 1) < 0x29 )
      v5 = &result[v2 >> 1];
    v6 = (unsigned __int8)v5[4];
    v7 = v6 & v4;
    v5[4] = v7;
    v8 = (((((v7 >> 1) & 0x55) + (v7 & 0x55)) >> 2) & 0x33) + ((((v7 >> 1) & 0x55) + (v7 & 0x55)) & 0x33);
    v9 = (((((v6 >> 1) & 0x55) + (v6 & 0x55)) >> 2) & 0x33) + ((((v6 >> 1) & 0x55) + (v6 & 0x55)) & 0x33);
    *(_DWORD *)result = *(_DWORD *)result - (v9 >> 4) - (v9 & 7) + (v8 >> 4) + (v8 & 7);
  }
  while ( v1 != 82 );
  *(_DWORD *)result = 0;
  return result;
}

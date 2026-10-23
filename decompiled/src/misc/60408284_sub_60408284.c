/* sub_60408284
 * address: 0x60408284   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60408284(int *a1, unsigned __int8 a2, unsigned __int8 a3, char a4)
{
  int result; // r0
  int *v7; // r2
  int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r3
  char v11; // r3
  unsigned __int8 v12; // r5
  int v13; // r3
  int v14; // r5
  unsigned int v15; // r0
  unsigned int v16; // r1
  unsigned int v17; // r0

  result = sub_6040E5B0(a2, a3, 1);
  if ( result != -1 )
  {
    v7 = a1;
    if ( (unsigned int)(result / 2) < 0x29 )
      v7 = (int *)((char *)a1 + result / 2);
    v8 = result & 1;
    v9 = *((unsigned __int8 *)v7 + 4);
    v10 = v9 >> 4;
    if ( !v8 )
      LOBYTE(v10) = v9 & 0xF;
    v11 = v10 | a4;
    v12 = 16 * v11;
    if ( !v8 )
      v12 = v11 & 0xF;
    v13 = v12;
    v14 = 15;
    if ( !v8 )
      v14 = 240;
    v15 = v13 | v9 & v14;
    *((_BYTE *)v7 + 4) = v15;
    v16 = (((((v9 >> 1) & 0x55) + (v9 & 0x55)) >> 2) & 0x33) + ((((v9 >> 1) & 0x55) + (v9 & 0x55)) & 0x33);
    v17 = (((((v15 >> 1) & 0x55) + (v15 & 0x55)) >> 2) & 0x33) + ((((v15 >> 1) & 0x55) + (v15 & 0x55)) & 0x33);
    result = *a1 - (v16 >> 4) - (v16 & 7) + (v17 >> 4) + (v17 & 7);
    *a1 = result;
  }
  return result;
}

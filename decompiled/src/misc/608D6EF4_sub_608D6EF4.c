/* sub_608D6EF4
 * address: 0x608D6EF4   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D6EF4(_DWORD *a1)
{
  int v1; // r2
  int v2; // r2
  int v3; // r12
  int v4; // r1
  int v5; // r2
  int v6; // r3
  char v8; // r12
  int v9; // lr

  v1 = a1[3];
  if ( a1[4] >= v1 )
    return 0;
  v2 = v1 + 7;
  v3 = v2 >> 3;
  if ( (int)(v2 & 0xFFFFFFF8) < 8 )
    return 0;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = *((unsigned __int8 *)a1 + v5 + 20);
    if ( v6 != 255 )
    {
      if ( (v6 & 1) == 0 )
      {
        v8 = 1;
        v9 = 0;
        goto LABEL_23;
      }
      if ( (v6 & 2) == 0 )
      {
        v8 = 2;
        v9 = 1;
        goto LABEL_23;
      }
      if ( (v6 & 4) == 0 )
      {
        v8 = 4;
        v9 = 2;
        goto LABEL_23;
      }
      if ( (v6 & 8) == 0 )
      {
        v8 = 8;
        v9 = 3;
        goto LABEL_23;
      }
      if ( (v6 & 0x10) == 0 )
      {
        v8 = 16;
        v9 = 4;
        goto LABEL_23;
      }
      if ( (v6 & 0x20) == 0 )
      {
        v8 = 32;
        v9 = 5;
        goto LABEL_23;
      }
      if ( (v6 & 0x40) == 0 )
      {
        v8 = 64;
        v9 = 6;
        goto LABEL_23;
      }
      if ( (v6 & 0x80) == 0 )
        break;
    }
    ++v5;
    v4 += 8;
    if ( v5 >= v3 )
      return 0;
  }
  v8 = 0x80;
  v9 = 7;
LABEL_23:
  *((_BYTE *)a1 + v5 + 20) = v6 | v8;
  ++a1[4];
  return *a1 + a1[2] * (v9 | v4);
}

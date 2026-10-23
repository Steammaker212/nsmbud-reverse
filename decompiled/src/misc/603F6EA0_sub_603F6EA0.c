/* sub_603F6EA0
 * address: 0x603F6EA0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F6EA0(char *a1, _BYTE *a2)
{
  int v4; // r6
  int v5; // r1
  int v6; // r0
  char *v7; // r1
  unsigned int v8; // r0
  char v9; // r2
  int v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int result; // r0

  v4 = 0;
  *a2 = 0;
  do
  {
    v5 = 42;
    if ( v4 != 7 )
      v5 = 22;
    v6 = sub_6040E5B0((unsigned __int8)v4, v5, 0);
    v7 = &byte_60B01630;
    if ( v6 >= 0 )
    {
      v7 = a1;
      if ( (unsigned int)v6 < 0x7B )
        v7 = &a1[v6];
    }
    v8 = (unsigned __int8)*v7;
    v9 = *v7;
    if ( (v8 & 0x40) != 0 )
    {
      v10 = 3;
      if ( (v9 & 4) == 0 )
        v10 = 5 - ((v8 >> 4) & 1);
      if ( (v8 & 0x80u) != 0 )
      {
LABEL_18:
        v11 = 3;
        if ( (v9 & 8) == 0 )
          v11 = 5 - ((v8 >> 5) & 1);
        goto LABEL_20;
      }
    }
    else
    {
      v10 = 2;
      if ( (v9 & 2) == 0 )
        v10 = v8 & 1;
      if ( (v8 & 0x80u) != 0 )
        goto LABEL_18;
    }
    v11 = 2;
    if ( (v9 & 2) == 0 )
      v11 = v8 & 1;
LABEL_20:
    v12 = 1 << v4++;
    if ( v10 > v11 )
      v11 = v10;
    v13 = (unsigned __int8)*a2;
    if ( v11 >= 3 )
      result = v13 | v12;
    else
      result = v13 & ~v12;
    *a2 = result;
  }
  while ( v4 != 8 );
  return result;
}

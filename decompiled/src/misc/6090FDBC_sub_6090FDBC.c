/* sub_6090FDBC
 * address: 0x6090FDBC   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090FDBC(unsigned int *a1, unsigned __int8 *a2, int a3)
{
  unsigned int i; // r4
  unsigned int v4; // r3
  unsigned int v5; // r5
  unsigned int v6; // r3
  unsigned int v7; // r5
  unsigned int v8; // r3
  unsigned int v9; // r5
  unsigned int v10; // r3
  unsigned int v11; // r5
  unsigned int j; // r3
  int v13; // t1

  if ( !byte_60CCFAEC )
  {
    for ( i = 0; i != 256; ++i )
    {
      v4 = (i >> 1) ^ 0xEDB88320;
      if ( (i & 1) == 0 )
        v4 = i >> 1;
      v5 = (v4 >> 1) ^ 0xEDB88320;
      if ( (v4 & 1) == 0 )
        v5 = v4 >> 1;
      v6 = (v5 >> 1) ^ 0xEDB88320;
      if ( (v5 & 1) == 0 )
        v6 = v5 >> 1;
      v7 = (v6 >> 1) ^ 0xEDB88320;
      if ( (v6 & 1) == 0 )
        v7 = v6 >> 1;
      v8 = (v7 >> 1) ^ 0xEDB88320;
      if ( (v7 & 1) == 0 )
        v8 = v7 >> 1;
      v9 = (v8 >> 1) ^ 0xEDB88320;
      if ( (v8 & 1) == 0 )
        v9 = v8 >> 1;
      v10 = (v9 >> 1) ^ 0xEDB88320;
      if ( (v9 & 1) == 0 )
        v10 = v9 >> 1;
      v11 = (v10 >> 1) ^ 0xEDB88320;
      if ( (v10 & 1) == 0 )
        v11 = v10 >> 1;
      dword_60CCF6EC[i] = v11;
    }
    byte_60CCFAEC = 1;
  }
  for ( j = *a1; a3; j = dword_60CCF6EC[v13 ^ (unsigned __int8)j] ^ (j >> 8) )
  {
    v13 = *a2++;
    --a3;
  }
  *a1 = j;
  return ~j;
}

/* sub_6090FED8
 * address: 0x6090FED8   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090FED8(unsigned int *a1, _BYTE *a2)
{
  unsigned int i; // r2
  unsigned int v3; // r3
  unsigned int v4; // r4
  unsigned int v5; // r3
  unsigned int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r4
  unsigned int v9; // r3
  unsigned int v10; // r4
  char v11; // r3
  unsigned int v12; // r2
  unsigned __int8 *v13; // r1
  int v14; // t1

  if ( !byte_60CCFAEC )
  {
    for ( i = 0; i != 256; ++i )
    {
      v3 = (i >> 1) ^ 0xEDB88320;
      if ( (i & 1) == 0 )
        v3 = i >> 1;
      v4 = (v3 >> 1) ^ 0xEDB88320;
      if ( (v3 & 1) == 0 )
        v4 = v3 >> 1;
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
      dword_60CCF6EC[i] = v10;
    }
    byte_60CCFAEC = 1;
  }
  v11 = *a2;
  v12 = *a1;
  if ( *a2 )
  {
    v13 = a2 + 1;
    do
    {
      v12 = dword_60CCF6EC[(unsigned __int8)(v11 ^ v12)] ^ (v12 >> 8);
      v14 = *v13++;
      v11 = v14;
    }
    while ( v14 );
  }
  *a1 = v12;
  return ~v12;
}

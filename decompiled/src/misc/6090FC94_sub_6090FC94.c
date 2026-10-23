/* sub_6090FC94
 * address: 0x6090FC94   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090FC94(unsigned int *a1, _BYTE *a2)
{
  unsigned int v2; // r3
  __int16 *v3; // lr
  unsigned int v4; // r2
  unsigned int v5; // r4
  unsigned int v6; // r2
  unsigned int v7; // r4
  unsigned int v8; // r2
  unsigned int v9; // r4
  unsigned int v10; // r2
  int v11; // r4
  char v12; // r3
  unsigned int v13; // r2
  unsigned __int8 *v14; // r1
  int v15; // t1

  if ( !byte_60CCF6E8 )
  {
    v2 = 0;
    v3 = word_60CCF4E8;
    do
    {
      v4 = (v2 >> 1) ^ 0xA001;
      if ( (v2 & 1) == 0 )
        v4 = v2 >> 1;
      ++v2;
      v5 = (v4 >> 1) ^ 0xA001;
      if ( (v4 & 1) == 0 )
        v5 = v4 >> 1;
      v6 = (v5 >> 1) ^ 0xA001;
      if ( (v5 & 1) == 0 )
        v6 = v5 >> 1;
      v7 = (v6 >> 1) ^ 0xA001;
      if ( (v6 & 1) == 0 )
        v7 = v6 >> 1;
      v8 = (v7 >> 1) ^ 0xA001;
      if ( (v7 & 1) == 0 )
        v8 = v7 >> 1;
      v9 = (v8 >> 1) ^ 0xA001;
      if ( (v8 & 1) == 0 )
        v9 = v8 >> 1;
      v10 = (v9 >> 1) ^ 0xA001;
      if ( (v9 & 1) == 0 )
        v10 = v9 >> 1;
      v11 = (v10 >> 1) ^ 0xA001;
      if ( (v10 & 1) == 0 )
        v11 = v10 >> 1;
      *v3++ = v11;
    }
    while ( v2 != 256 );
    byte_60CCF6E8 = 1;
  }
  v12 = *a2;
  v13 = *a1;
  if ( *a2 )
  {
    v14 = a2 + 1;
    do
    {
      v13 = (unsigned __int16)word_60CCF4E8[(unsigned __int8)(v12 ^ v13)] ^ (v13 >> 8);
      v15 = *v14++;
      v12 = v15;
    }
    while ( v15 );
  }
  *a1 = v13;
  return (unsigned __int16)v13;
}

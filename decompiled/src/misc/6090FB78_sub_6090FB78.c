/* sub_6090FB78
 * address: 0x6090FB78   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090FB78(unsigned int *a1, unsigned __int8 *a2, int a3)
{
  __int16 *v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r4
  unsigned int v6; // r5
  unsigned int v7; // r4
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r5
  unsigned int v11; // r4
  int v12; // r5
  unsigned int i; // r3
  int v14; // t1

  if ( !byte_60CCF6E8 )
  {
    v3 = word_60CCF4E8;
    v4 = 0;
    do
    {
      v5 = (v4 >> 1) ^ 0xA001;
      if ( (v4 & 1) == 0 )
        v5 = v4 >> 1;
      ++v4;
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
      v12 = (v11 >> 1) ^ 0xA001;
      if ( (v11 & 1) == 0 )
        v12 = v11 >> 1;
      *v3++ = v12;
    }
    while ( v4 != 256 );
    byte_60CCF6E8 = 1;
  }
  for ( i = *a1; a3; i = (unsigned __int16)word_60CCF4E8[v14 ^ (unsigned __int8)i] ^ (i >> 8) )
  {
    v14 = *a2++;
    --a3;
  }
  *a1 = i;
  return (unsigned __int16)i;
}

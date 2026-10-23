/* sub_6086F834
 * address: 0x6086F834   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6086F834(int a1, char a2)
{
  unsigned int v2; // r2
  int v3; // r4
  int v4; // r6

  v2 = FIELD_U16(a1, 170);
  if ( FIELD_U16(a1, 170) )
  {
    v3 = 0;
    do
    {
      v4 = FIELD_U32(a1, 88) + 32 * v3;
      FIELD_U32(v4, 20) = -1;
      *(_DWORD *)v4 = 0;
      ++v3;
      FIELD_U8(v4, 28) = 1;
    }
    while ( v2 != v3 );
  }
  FIELD_U8(a1, 169) = FIELD_U8(a1, 168);
  FIELD_U16(a1, 176) = 0;
  if ( (a2 & 1) == 0 )
    FIELD_U32(a1, 136) = 0;
  FIELD_U16(a1, 172) = 0;
  return memset(*(void **)(a1 + 128), 0, v2 >> 5);
}

/* sub_608716DC
 * address: 0x608716DC   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608716DC(int a1, void *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r6

  v4 = FIELD_U32(a1, 208);
  if ( v4 == -1 )
  {
    if ( FIELD_U8(a1, 219) )
      memset(a2, 0, 4 * FIELD_U8(a1, 219));
    v5 = FIELD_U16(a1, 214);
    if ( FIELD_U16(a1, 214) )
    {
      v6 = 0;
      do
      {
        --v5;
        v7 = FIELD_U32(a1, 24) + v6;
        v6 += 40;
        v8 = FIELD_U8(v7, 30) - FIELD_U8(v7, 29);
        *((_DWORD *)a2 + v8) = *((_DWORD *)a2 + v8) & ~FIELD_U32(v7, 32)
                             | (FIELD_U8(v7, 25) << FIELD_U8(v7, 31));
      }
      while ( v5 );
    }
  }
  else if ( FIELD_U8(a1, 219) )
  {
    memmove(
      a2,
      (const void *)(FIELD_U32(a1, 128)
                   + 4 * FIELD_U8(a1, 218)
                   + 4 * (FIELD_U8(a1, 219) + FIELD_U8(a1, 218)) * v4),
      4 * FIELD_U8(a1, 219));
  }
}

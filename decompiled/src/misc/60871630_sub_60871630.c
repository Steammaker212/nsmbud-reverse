/* sub_60871630
 * address: 0x60871630   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60871630(int a1, void *a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r2

  v4 = FIELD_U32(a1, 208);
  if ( v4 == -1 )
  {
    if ( FIELD_U8(a1, 218) )
      memset(a2, 0, 4 * FIELD_U8(a1, 218));
    v6 = FIELD_U16(a1, 212);
    if ( FIELD_U16(a1, 212) )
    {
      v7 = 0;
      do
      {
        --v6;
        v8 = FIELD_U32(a1, 8) + v7;
        v7 += 40;
        *((_DWORD *)a2 + FIELD_U8(v8, 30)) = *((_DWORD *)a2 + FIELD_U8(v8, 30))
                                                        & ~FIELD_U32(v8, 32)
                                                        | (FIELD_U8(v8, 25) << FIELD_U8(v8, 31));
      }
      while ( v6 );
    }
  }
  else
  {
    v5 = FIELD_U8(a1, 218);
    if ( 4 * v5 )
      memmove(a2, (const void *)(FIELD_U32(a1, 128) + 4 * v4 * (FIELD_U8(a1, 219) + v5)), 4 * v5);
  }
}

/* sub_60930F00
 * address: 0x60930F00   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60930F00(int a1, int *a2)
{
  unsigned int *v4; // r0
  unsigned int v5; // r1
  int v6; // r0
  int v7; // r3
  unsigned int v8; // r1

  FIELD_U32(a1, 1248) = a2;
  if ( a2 )
  {
    sub_60920EC8(a1 + 1256, a2);
    FIELD_U8(a1, 1575) = 1;
    FIELD_U8(a1, 1576) = 1;
    FIELD_U8(a1, 1577) = 1;
    v4 = (unsigned int *)(a1 + 1584);
    do
      v5 = __ldrex(v4);
    while ( __strex(v5 | 2, v4) );
  }
  if ( FIELD_S32(a1, 12) >= 1 )
  {
    v6 = 0;
    do
    {
      v7 = FIELD_U32(a1, 836);
      v8 = FIELD_U32(a1, 20) & v6++;
      if ( FIELD_U32(a1, 832) > v8 )
        v7 += 4 * v8;
      *(_DWORD *)(*(_DWORD *)v7 + 736) = a2;
    }
    while ( v6 < FIELD_U32(a1, 12) );
  }
  return sub_6092DC18(a1 + 32);
}

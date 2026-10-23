/* sub_6086F110
 * address: 0x6086F110   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6086F110(int a1, char *a2, char *a3)
{
  unsigned int v3; // r0
  char *v4; // r4
  char *v5; // r5
  int v6; // r8
  int v7; // r7
  size_t v8; // r6

  v3 = FIELD_U8(a1, 16);
  v4 = a3;
  v5 = a2;
  if ( v3 > 0xF )
  {
    if ( v3 <= 0x1B )
    {
      v6 = (int)(v3 - 16) >> 2;
      if ( v6 >= -1 )
      {
        v7 = -1;
        v8 = ((4 * v3) & 0xC) + 4;
        do
        {
          qmemcpy(v5, v4, v8);
          ++v7;
          v4 += v8;
          v5 += 16;
        }
        while ( v7 <= v6 );
      }
    }
  }
  else
  {
    qmemcpy(a2, a3, ((4 * v3) & 0xC) + 4);
  }
}

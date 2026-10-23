/* sub_608C1740
 * address: 0x608C1740   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C1740(int a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // r6
  int v7; // r1
  int result; // r0
  int v9; // r2
  _BYTE v10[8]; // [sp+4h] [bp-3Ch] BYREF
  unsigned int v11; // [sp+Ch] [bp-34h]

  LODWORD(v4) = a3;
  v7 = sub_608A9E10(a2, (int)v10);
  result = 0;
  if ( v7 == 1 )
  {
    v9 = FIELD_U32(a1, 28);
    result = 1;
    if ( v9 != a1 + 24 )
    {
      HIDWORD(v4) = a4 / v11;
      do
      {
        FIELD_U64(v9, 156) = v4;
        LODWORD(v4) = v4 + HIDWORD(v4);
        v9 = FIELD_U32(v9, 4);
      }
      while ( v9 != a1 + 24 );
    }
  }
  return result;
}

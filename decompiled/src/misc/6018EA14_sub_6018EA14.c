/* sub_6018EA14
 * address: 0x6018EA14   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018EA14(int a1)
{
  char v1; // r4
  int v2; // r5
  int v3; // r6
  int v4; // r0

  v1 = 1;
  if ( FIELD_S32(a1, 320) >= 1 )
  {
    v2 = FIELD_U32(a1, 316);
    if ( v2 )
    {
      v3 = a1 + 312;
      v1 = 1;
      do
      {
        v4 = FIELD_U32(v2, 8);
        if ( v4 )
          v1 &= (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        v2 = FIELD_U32(v2, 4);
        if ( v2 == v3 )
          v2 = 0;
      }
      while ( v2 );
    }
  }
  return v1 & 1;
}

/* sub_608C6F98
 * address: 0x608C6F98   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C6F98(int result, int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r0
  int v6; // r3
  bool v7; // zf

  v4 = FIELD_U32(result, 1544);
  if ( v4 )
  {
    result = FIELD_U32(v4, 768);
    do
    {
      if ( result > 63 )
        break;
      *(_DWORD *)(v4 + 12 * result) = a2;
      v5 = v4 + 12 * result;
      a2 = 2;
      FIELD_U32(v5, 4) = a3;
      FIELD_U32(v5, 8) = a4;
      a3 = -1;
      v6 = FIELD_U32(v4, 768) + 1;
      result = 63;
      FIELD_U32(v4, 768) = v6;
      v7 = v6 == 63;
      a4 = -1;
    }
    while ( v7 );
  }
  return result;
}

/* sub_60501CA0
 * address: 0x60501CA0   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60501CA0(int a1)
{
  unsigned int v2; // r1
  int v4; // r1
  int v5; // r2

  v2 = FIELD_U32(a1, 1028);
  if ( v2 == 256 )
    goto LABEL_5;
  if ( v2 >= 0x100 )
    v2 = 0;
  if ( (*(_DWORD *)(a1 + 4 * v2 + 1056) | 2) == 2 )
  {
LABEL_5:
    FIELD_U8(a1, 1040) = 0;
  }
  else
  {
    v4 = 0;
    FIELD_U8(a1, 1043) = 0;
    do
    {
      v5 = a1 + v4;
      v4 += 8;
      if ( FIELD_U32(v5, 1056) <= 1u )
        FIELD_U32(v5, 1056) = 0;
      if ( FIELD_U32(v5, 1060) < 2u )
        FIELD_U32(v5, 1060) = 0;
    }
    while ( v4 != 1024 );
    FIELD_U8(a1, 1053) = 0;
    sub_6047EB18((_DWORD *)(a1 + 40));
  }
  FIELD_U8(a1, 1042) = 0;
  return 0;
}

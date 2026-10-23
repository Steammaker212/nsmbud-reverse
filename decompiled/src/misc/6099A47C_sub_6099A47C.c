/* sub_6099A47C
 * address: 0x6099A47C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099A47C(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r0
  int v4; // r12
  int v5; // r3
  int v6; // r4
  int v7; // r2
  unsigned int v8; // r3
  unsigned __int8 *v9; // r0

  v3 = sub_6099A310(a1, a2);
  v4 = a1[4];
  v5 = FIELD_U32(v4, 16);
  if ( v3 == 0xFFFF )
    v3 = FIELD_U16(v4, 6);
  if ( v5 )
  {
    v6 = a1[3];
    while ( 1 )
    {
      v7 = v6 + v5;
      v8 = *(unsigned __int16 *)(v6 + v5);
      if ( v8 <= v3 && FIELD_U16(v7, 2) >= v3 )
        break;
      v5 = FIELD_U32(v7, 4);
      if ( !v5 )
        goto LABEL_8;
    }
    v9 = (unsigned __int8 *)(v7 + 3 * (v3 - v8) + 8);
  }
  else
  {
LABEL_8:
    v9 = (unsigned __int8 *)(v4 + 8);
  }
  return *v9 | (v9[1] << 8) | (v9[2] << 16);
}

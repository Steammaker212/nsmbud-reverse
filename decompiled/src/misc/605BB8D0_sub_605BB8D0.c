/* sub_605BB8D0
 * address: 0x605BB8D0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BB8D0(int a1)
{
  unsigned int v1; // lr
  int v2; // r1
  unsigned int v3; // r3
  unsigned int v4; // r4
  unsigned int v5; // r5

  if ( !FIELD_U32(a1, 320) )
    return 1;
  v1 = 0;
  v2 = 0;
LABEL_3:
  v3 = 0;
  v4 = 0;
  if ( v1 < 0x10 )
    v3 = v1;
  while ( 1 )
  {
    v5 = 0;
    if ( v4 < 0x10 )
      v5 = v4;
    if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(a1 + (v3 << 6) + 4 * v5 + 324) + 12) + 28) & 0x20) == 0 )
      return v2;
    if ( ++v4 >= FIELD_U8(a1, 1348) )
    {
      if ( ++v1 < FIELD_U8(a1, 1349) )
        goto LABEL_3;
      return 1;
    }
  }
}

/* sub_60582A68
 * address: 0x60582A68   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60582A68(int a1, int a2)
{
  unsigned __int8 *v2; // r0
  int v3; // r2

  v2 = (unsigned __int8 *)(a1 + 6184);
  v3 = 0;
  while ( !*((_DWORD *)v2 - 3)
       || *((float *)v2 - 6) != *(float *)a2
       || *((float *)v2 - 5) != FIELD_F32(a2, 4)
       || *((float *)v2 - 4) != FIELD_F32(a2, 8)
       || *v2 != FIELD_U8(a2, 24)
       || *((_DWORD *)v2 - 2) != FIELD_U32(a2, 16)
       || *((_DWORD *)v2 - 1) != FIELD_U32(a2, 20) )
  {
    ++v3;
    v2 += 28;
    if ( v3 >= 512 )
      return 3;
  }
  *((_DWORD *)v2 - 3) = FIELD_U32(a2, 12);
  return FIELD_U32(a2, 12);
}

/* sub_6022E638
 * address: 0x6022E638   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6022E638(int a1)
{
  int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r1
  unsigned int v5; // r2
  int v6; // r1

  v1 = FIELD_U32(a1, 8);
  v2 = FIELD_U32(a1, 32);
  v3 = FIELD_U32(v1, 24);
  v4 = FIELD_U32(v1, 28);
  if ( v3 > v2 )
    v4 += 4 * v2;
  v5 = *(_DWORD *)(*(_DWORD *)v4 + 28);
  if ( !FIELD_U8(a1, 36) )
    return (v5 >> 5) & 1;
  v6 = 0;
  if ( (v5 & 8) != 0 )
  {
    (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 24))(a1, 1.0);
    return 1;
  }
  return v6;
}

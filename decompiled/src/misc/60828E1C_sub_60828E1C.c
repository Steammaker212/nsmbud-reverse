/* sub_60828E1C
 * address: 0x60828E1C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60828E1C(int a1, int a2)
{
  int *v2; // r2
  _BOOL4 result; // r0
  int v4; // r1
  bool v5; // zf
  unsigned int v6; // r3

  v6 = FIELD_U32(dword_60CC6D78, 132);
  if ( v6 < 4
    || *(_DWORD *)(FIELD_U32(a1, 40) + 104 * a2 + 6364) != *(_DWORD *)(FIELD_U32(dword_60CC6D78, 128) + v6 - 4) )
  {
    return 0;
  }
  v2 = *(int **)(dword_60CC6D78 + 128);
  result = 0;
  v4 = *v2;
  v5 = v4 == 1213354066;
  if ( v4 == 1213354066 )
    v5 = *((_BYTE *)v2 + 4) == 1;
  if ( v5 )
    return *((_BYTE *)v2 + 5) == 0;
  return result;
}

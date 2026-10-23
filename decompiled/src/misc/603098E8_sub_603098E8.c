/* sub_603098E8
 * address: 0x603098E8   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603098E8(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r1
  _BOOL4 result; // r0

  v2 = FIELD_U32(a2, 24);
  v3 = (unsigned __int16)v2;
  v4 = BYTE2(v2);
  if ( !(_WORD)v2 )
    return (v4 | v3) == 0;
  result = 1;
  if ( v4 != 4 )
    return (v4 | v3) == 0;
  return result;
}

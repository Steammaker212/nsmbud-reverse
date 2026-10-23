/* sub_6082B568
 * address: 0x6082B568   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6082B568(int result)
{
  int v1; // r1
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // t1
  int v5; // r3
  char v6; // r1

  v1 = FIELD_U32(result, 40);
  v4 = FIELD_U32(v1, 44196);
  v2 = (_DWORD *)(v1 + 44196);
  v3 = v4;
  v5 = v4;
  if ( v4 != -1 )
    ++v5;
  *v2 = v5;
  v6 = FIELD_U8(result, 48);
  if ( v3 != v5 )
    v6 |= 1u;
  FIELD_U8(result, 48) = v6;
  return result;
}

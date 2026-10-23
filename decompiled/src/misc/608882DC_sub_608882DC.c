/* sub_608882DC
 * address: 0x608882DC   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608882DC(int a1, int a2, int a3, int a4)
{
  int v4; // r12
  int v5; // r0
  int result; // r0

  v4 = FIELD_U32(a1, 16);
  v5 = FIELD_U8(v4, 103);
  if ( v5 <= a4 )
    a4 = v5 - 1;
  result = FIELD_U32(v4, 32) + 56 * a4;
  if ( result )
    return sub_608722BC((_DWORD *)result, a2, 0, FIELD_U16(result, 52), a3);
  return result;
}

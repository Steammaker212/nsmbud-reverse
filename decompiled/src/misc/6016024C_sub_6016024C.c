/* sub_6016024C
 * address: 0x6016024C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6016024C(int result, int a2)
{
  int v3; // r3
  int v4; // r1

  v3 = FIELD_U32(a2, 2152);
  v4 = a2 + 2148;
  if ( v3 || FIELD_U32(a2, 2156) || FIELD_U32(result, 256) == v4 )
    return (*(int (__fastcall **)(int, int))(FIELD_U32(result, 252) + 4))(result + 252, v4);
  return result;
}

/* sub_601603AC
 * address: 0x601603AC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601603AC(int result, int a2)
{
  int v3; // r3
  int v4; // r1

  v3 = FIELD_U32(a2, 2188);
  v4 = a2 + 2184;
  if ( v3 || FIELD_U32(a2, 2192) || FIELD_U32(result, 292) == v4 )
    return (*(int (__fastcall **)(int, int))(FIELD_U32(result, 288) + 4))(result + 288, v4);
  return result;
}

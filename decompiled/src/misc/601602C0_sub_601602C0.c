/* sub_601602C0
 * address: 0x601602C0   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601602C0(int result, int a2)
{
  int v3; // r3
  int v4; // r1

  v3 = FIELD_U32(a2, 2164);
  v4 = a2 + 2160;
  if ( v3 || FIELD_U32(a2, 2168) || FIELD_U32(result, 268) == v4 )
    return (*(int (__fastcall **)(int, int))(FIELD_U32(result, 264) + 4))(result + 264, v4);
  return result;
}

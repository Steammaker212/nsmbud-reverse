/* sub_608C5EAC
 * address: 0x608C5EAC   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5EAC(_DWORD *a1)
{
  int result; // r0
  int *v3; // r4
  int v4; // t1

  sub_608C5D2C((int)a1);
  sub_608CF21C(*a1, 3);
  result = sub_608CF170(*a1, 20, 4);
  if ( result )
  {
    FIELD_U8(result, 18) = 0;
    FIELD_U8(result, 17) = 0;
    FIELD_U8(result, 19) = 0;
    *(_DWORD *)result = result;
    FIELD_U32(result, 4) = result;
    FIELD_U32(result, 8) = result + 8;
    FIELD_U32(result, 12) = result + 8;
    FIELD_U8(result, 16) = 1;
    v4 = a1[1];
    v3 = a1 + 1;
    *(_DWORD *)result = v4;
    FIELD_U32(result, 4) = v3;
    *(_DWORD *)(*v3 + 4) = result;
    *v3 = result;
  }
  return result;
}

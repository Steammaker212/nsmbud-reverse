/* sub_60160210
 * address: 0x60160210   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60160210(int result, int a2)
{
  if ( !FIELD_U32(a2, 2152) && !FIELD_U32(a2, 2156) && FIELD_U32(result, 256) != a2 + 2148 )
    return (*(int (__fastcall **)(int))(FIELD_U32(result, 252) + 8))(result + 252);
  return result;
}

/* sub_608C7C40
 * address: 0x608C7C40   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C7C40(int result, int a2, char a3, float a4)
{
  FIELD_F32(result, 292) = a4;
  FIELD_U32(result, 300) = a2;
  FIELD_U8(result, 179) = a3;
  FIELD_U32(result, 296) = 0;
  return result;
}

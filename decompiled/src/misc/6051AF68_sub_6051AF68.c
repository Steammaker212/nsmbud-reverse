/* sub_6051AF68
 * address: 0x6051AF68   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6051AF68(int result)
{
  int *v1; // r2
  int *v2; // r3
  int v3; // lr
  int v4; // r3

  FIELD_U16(result, 62512) = 257;
  v1 = &dword_60B3B95C;
  v2 = &dword_60B3B960;
  if ( !FIELD_U8(result, 62514) )
  {
    v2 = (int *)(dword_60CC62E4 + 120);
    v1 = (int *)(dword_60CC62E4 + 116);
  }
  v3 = *v2;
  v4 = FIELD_U32(result, 62168);
  FIELD_U32(v4, 24) = *v1;
  FIELD_U32(v4, 28) = v3;
  FIELD_U32(v4, 32) = 0;
  FIELD_U8(v4, 64) |= 0x10u;
  FIELD_U8(result, 62515) = 0;
  return result;
}

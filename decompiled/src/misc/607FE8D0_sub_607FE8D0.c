/* sub_607FE8D0
 * address: 0x607FE8D0   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607FE8D0(int result, int a2, float a3, float a4, float a5)
{
  bool v5; // nf
  int v6; // r2

  FIELD_U32(result, 32) = a2;
  v5 = a2 < 0;
  FIELD_F32(result, 40) = a3;
  FIELD_F32(result, 44) = a4;
  FIELD_F32(result, 48) = a5;
  LOWORD(v6) = 9214;
  if ( a2 < 0 )
    a2 = 0;
  HIWORD(v6) = -13964;
  if ( v5 )
    FIELD_U32(result, 32) = a2;
  FIELD_U32(result, 36) = a2;
  FIELD_U32(result, 12) = 0;
  FIELD_U32(result, 16) = v6;
  FIELD_U32(result, 20) = v6;
  FIELD_U32(result, 24) = 0;
  FIELD_U32(result, 28) = 0;
  return result;
}

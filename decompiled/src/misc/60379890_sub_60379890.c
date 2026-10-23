/* sub_60379890
 * address: 0x60379890   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60379890(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // lr
  int result; // r0

  v3 = FIELD_U32(a1, 16);
  v4 = FIELD_U32(a1, 20);
  FIELD_U32(v3, 16) = *(_DWORD *)a2;
  FIELD_U32(v3, 20) = FIELD_U32(a2, 4);
  FIELD_U32(v4, 16) = *(_DWORD *)a3;
  FIELD_U32(v4, 20) = FIELD_U32(a3, 4);
  FIELD_U8(v3, 24) = 0;
  FIELD_U8(v4, 24) = 0;
  if ( FIELD_U8(a2, 8) )
    FIELD_U8(v3, 24) = 1;
  result = FIELD_U8(a3, 8);
  if ( FIELD_U8(a3, 8) )
  {
    FIELD_U8(v4, 24) = 1;
    return 1;
  }
  return result;
}

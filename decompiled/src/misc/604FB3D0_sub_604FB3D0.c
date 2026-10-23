/* sub_604FB3D0
 * address: 0x604FB3D0   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604FB3D0(int a1)
{
  unsigned int v1; // r1
  int result; // r0

  v1 = FIELD_U32(a1, 40088);
  if ( v1 >= 9 )
  {
    v1 = 0;
    FIELD_U32(a1, 40088) = 0;
  }
  FIELD_U32(a1, 36536) = dword_60B035D8[v1];
  FIELD_U8(a1, 36551) = 0;
  FIELD_U8(a1, 36548) = 1;
  FIELD_U32(a1, 37588) = 0x7FFFF;
  *(_BYTE *)(FIELD_U32(a1, 37760) + 64) |= 1u;
  result = FIELD_U32(a1, 37764);
  FIELD_U8(result, 64) |= 1u;
  return result;
}

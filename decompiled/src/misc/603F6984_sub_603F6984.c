/* sub_603F6984
 * address: 0x603F6984   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F6984(
        int result,
        unsigned int a2,
        char a3,
        char a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        _BYTE *a10)
{
  int v10; // r12

  v10 = result;
  *(_DWORD *)result = a2;
  if ( a2 < 2 )
    v10 = result + a2;
  FIELD_U8(v10, 12) = a3;
  FIELD_U8(v10, 14) = a4;
  FIELD_U32(result, 8) = a5;
  FIELD_U8(result, 4) = a6;
  FIELD_U8(result, 5) = a7;
  FIELD_U8(result, 6) = a8;
  FIELD_U8(result, 7) = a9;
  FIELD_U8(result, 16) = *a10;
  FIELD_U8(result, 17) = a10[1];
  FIELD_U8(result, 18) = a10[2];
  return result;
}

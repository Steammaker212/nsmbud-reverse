/* sub_6037D9DC
 * address: 0x6037D9DC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6037D9DC(int result)
{
  int v1; // r1

  FIELD_U8(result, 6673) = 1;
  v1 = FIELD_U32(result, 6664);
  FIELD_U32(result, 6664) = v1 - 1;
  if ( v1 <= 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)result + 192))(result, &dword_60C9685C);
  return result;
}

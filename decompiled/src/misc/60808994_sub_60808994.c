/* sub_60808994
 * address: 0x60808994   size: 16   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808994(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 88);
  if ( result )
    return sub_6080EF84();
  return result;
}

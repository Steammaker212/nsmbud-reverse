/* sub_604D2F10
 * address: 0x604D2F10   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604D2F10(int a1)
{
  int v1; // r2

  v1 = FIELD_U32(a1, 52620);
  if ( v1 == 12 )
    v1 = 0;
  return (unsigned __int8)sub_6040135C(dword_60C99E44, FIELD_U32(a1, 40), v1);
}

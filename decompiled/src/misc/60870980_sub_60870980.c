/* sub_60870980
 * address: 0x60870980   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870980(int a1, void (__fastcall *a2)(int *, int, int), int a3)
{
  int v6; // r4
  int v7; // r5
  int v8; // r7

  v6 = FIELD_U16(a1, 108);
  if ( !FIELD_U16(a1, 108) )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    v8 |= sub_6086F57C(FIELD_U32(a1, 64) + v7, a2, a3);
    v7 += 184;
    --v6;
  }
  while ( v6 );
  return v8;
}

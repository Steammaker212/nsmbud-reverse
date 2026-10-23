/* sub_6053A830
 * address: 0x6053A830   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6053A830(int a1)
{
  int v1; // r2
  int v2; // r1

  v1 = 2;
  v2 = FIELD_U32(a1, 16708);
  if ( v2 == 2 )
    v1 = 1;
  if ( v2 == 1 )
    v1 = 0;
  FIELD_U32(a1, 83556) = v1;
  return sub_605325C0(4012 * (__int16)v1 + a1 + 56);
}

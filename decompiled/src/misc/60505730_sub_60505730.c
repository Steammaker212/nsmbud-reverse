/* sub_60505730
 * address: 0x60505730   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60505730(int a1, float a2)
{
  float v4; // s0
  float v5; // s0

  v4 = sub_604745C0(a1, 0);
  if ( FIELD_U8(a1, 3904) )
    v5 = (float)(1.0 - a2) * v4;
  else
    v5 = v4 * a2;
  sub_6047455C(a1, 0, v5);
  return sub_6047459C(a1, 0);
}

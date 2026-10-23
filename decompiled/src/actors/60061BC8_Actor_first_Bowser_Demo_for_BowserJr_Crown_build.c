/* Actor_first_Bowser_Demo_for_BowserJr_Crown_build
 * address: 0x60061BC8   size: 88   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_first_Bowser_Demo_for_BowserJr_Crown_build(int a1)
{
  int v2; // r5

  v2 = operator_new(0x1E58u);
  sub_600D0154(v2, a1);
  *(_DWORD *)v2 = off_60BC606C;
  FIELD_U32(v2, 7656) = 0;
  FIELD_U8(v2, 7708) = 0;
  memset((void *)(v2 + 7712), 0, 56);
  return v2;
}

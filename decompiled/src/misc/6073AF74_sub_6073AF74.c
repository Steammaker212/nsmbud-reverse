/* sub_6073AF74
 * address: 0x6073AF74   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6073AF74(int a1)
{
  int *v1; // r1

  v1 = dword_6073AF90;
  if ( (FIELD_U32(a1, 20) & 0xF) == 1 )
    v1 = &dword_6073AF90[1];
  return *(float *)v1;
}

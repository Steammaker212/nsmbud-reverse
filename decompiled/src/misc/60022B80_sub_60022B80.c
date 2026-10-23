/* sub_60022B80
 * address: 0x60022B80   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60022B80(_BYTE *a1)
{
  int *v1; // r1

  v1 = dword_60022B98;
  if ( (*a1 & 1) != 0 )
    v1 = &dword_60022B98[1];
  return *(float *)v1;
}

/* sub_60911400
 * address: 0x60911400   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60911400(_DWORD *a1)
{
  unsigned int v1; // r0
  unsigned int v2; // r0

  v1 = ((*a1 >> 1) & 0x55555555) + (*a1 & 0x55555555);
  v2 = (((((v1 >> 2) & 0x33333333) + (v1 & 0x33333333)) >> 4) & 0x7070707)
     + ((((v1 >> 2) & 0x33333333) + (v1 & 0x33333333)) & 0x7070707);
  return ((((v2 >> 8) & 0xF000F) + (v2 & 0xF000F)) & 0x1F) + ((((v2 >> 8) & 0xF000F) + (v2 & 0xF000F)) >> 16);
}

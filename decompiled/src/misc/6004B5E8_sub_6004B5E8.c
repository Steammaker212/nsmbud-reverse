/* sub_6004B5E8
 * address: 0x6004B5E8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6004B5E8(_DWORD *a1)
{
  int v1; // r4

  v1 = byte_60AFE3F4[a1[20]];
  return (*(int (**)(void))(*a1 + 756))() * v1;
}

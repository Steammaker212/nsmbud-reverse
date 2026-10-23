/* sub_608C2600
 * address: 0x608C2600   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608C2600(int a1, int a2, unsigned int a3, int a4)
{
  FIELD_U32(a1, 4) = a4;
  FIELD_U32(a1, 8) = 0;
  FIELD_U32(a1, 404) = 0;
  FIELD_U32(a1, 408) = 0;
  FIELD_U8(a1, 412) = 0;
  FIELD_U32(a1, 396) = a2;
  FIELD_U32(a1, 400) = a3 >> 2;
  FIELD_U32(a1, 376) = 0;
  FIELD_U32(a1, 380) = 0;
  FIELD_U32(a1, 388) = 0;
  if ( !FIELD_U8(a1, 188) )
  {
    nn__os__InitializeMessageQueue(a1 + 12, a1 + 60, 32);
    FIELD_U8(a1, 188) = 1;
  }
  if ( !FIELD_U8(a1, 372) )
  {
    nn__os__InitializeMessageQueue(a1 + 192, a1 + 240, 33);
    FIELD_U8(a1, 372) = 1;
  }
  __asm { ORR             PC, R0, R1,LSL R12 }
}

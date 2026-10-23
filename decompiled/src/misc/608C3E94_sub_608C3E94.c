/* sub_608C3E94
 * address: 0x608C3E94   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608C3E94(int a1, int a2, int a3, char a4, int a5, char a6)
{
  int (*v6)(); // r3

  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 600) = 0;
  FIELD_U8(a1, 604) = a4;
  v6 = nullsub_279;
  if ( a5 )
    v6 = sub_608C3F08;
  FIELD_U32(a1, 608) = v6;
  FIELD_U8(a1, 612) = a6;
  __asm { ORR             PC, R3, R12,LSL R12 }
}

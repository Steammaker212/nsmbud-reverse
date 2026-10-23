/* sub_608C8750
 * address: 0x608C8750   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C8750(int a1, int a2)
{
  int v3; // r4
  int result; // r0
  int v5; // r0
  int v6; // r1

  v3 = a1 + 32;
  FIELD_U32(a1, 160) = a2;
  result = nn__audio__IsVoiceValid(a1 + 32);
  if ( result == 1 )
  {
    v5 = FIELD_U32(a1, 160);
    v6 = 255 - v5;
    if ( v5 == 255 )
      v6 = 0;
    return nn__audio__SetVoicePriority(v3, v6);
  }
  return result;
}

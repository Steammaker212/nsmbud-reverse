/* sub_608C8884
 * address: 0x608C8884   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C8884(int result, int a2)
{
  int v2; // r4
  bool v3; // zf
  char *v4; // r0

  v2 = result;
  FIELD_U32(result, 164) = a2;
  if ( a2 == 1 )
  {
    result = FIELD_U8(result, 37);
    if ( !FIELD_U8(v2, 37) )
      return result;
    v4 = (char *)sub_608065A0();
    nn__audio__ReleaseVoiceSlot(v4 + 12, v2 + 32);
    result = 0;
    goto LABEL_9;
  }
  v3 = a2 == 0;
  if ( !a2 )
  {
    result = FIELD_U8(result, 37);
    v3 = result == 0;
  }
  if ( v3 )
  {
    ((void (__fastcall *)(int))loc_608C878C)(v2);
    result = 1;
LABEL_9:
    FIELD_U8(v2, 37) = result;
  }
  return result;
}

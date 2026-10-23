/* sub_608B547C
 * address: 0x608B547C   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B547C(int a1)
{
  int result; // r0
  bool v3; // zf
  int v4; // r5
  int v5; // r6
  char *v6; // r0
  unsigned int CircularBufferSink; // r6
  char *v8; // r0

  result = FIELD_U32(a1, 1536);
  if ( result )
  {
    result = FIELD_U32(a1, 1512);
    v3 = result == 1;
    if ( result == 1 )
    {
      result = FIELD_U8(a1, 1524);
      v3 = result == 0;
    }
    if ( v3 )
    {
      v4 = FIELD_U32(a1, 1528);
      v5 = FIELD_U32(a1, 1532);
      v6 = (char *)sub_608065A0();
      nn__os__LockMutex(v6 + 1408);
      CircularBufferSink = nn__audio__ReadCircularBufferSink(a1 + 1508, v4, v5);
      v8 = (char *)sub_608065A0();
      result = nn__os__UnlockMutex(v8 + 1408);
      if ( CircularBufferSink )
        return sub_608D2AA4(FIELD_U32(a1, 1536), v4, CircularBufferSink >> 1);
    }
  }
  return result;
}

/* sub_608C2D24
 * address: 0x608C2D24   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C2D24(int a1)
{
  int v2; // r1
  char v3; // lr
  int result; // r0
  int v5; // r1
  int v6; // [sp+4h] [bp-Ch] BYREF

  v2 = nn__os__TryReceiveMessageQueue(&v6, a1 + 12);
  result = 0;
  if ( v2 == 1 )
  {
    while ( (a1 + 384) | ((((a1 + 384) | (1619799384 << v3)) - 1) << v3) )
      ;
    v5 = v6;
    if ( FIELD_U32(v6, 4) != -1 )
    {
      (*(void (__fastcall **)(int))(a1 + 4))(v6);
      v5 = v6;
    }
    nn__os__SendMessageQueue(a1 + 192, v5);
    return 1;
  }
  return result;
}

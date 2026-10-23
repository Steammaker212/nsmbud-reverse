/* sub_60912EC0
 * address: 0x60912EC0   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60912EC0(int a1, int a2)
{
  int v2; // r1
  int result; // r0
  int v4; // [sp+0h] [bp-10h] BYREF
  int v5; // [sp+4h] [bp-Ch] BYREF

  if ( a2 )
  {
    v2 = nn__os__TryReceiveMessageQueue(&v4, a1);
    result = v4;
    if ( !v2 )
      return 0;
  }
  else
  {
    nn__os__ReceiveMessageQueue(&v5, a1);
    return v5;
  }
  return result;
}

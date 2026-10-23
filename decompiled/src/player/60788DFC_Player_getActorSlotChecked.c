/* Player_getActorSlotChecked
 * address: 0x60788DFC   size: 56   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Player_getActorSlotChecked(int a1, unsigned int a2)
{
  int result; // r0
  int v4; // r1
  int v5; // r4

  result = 0;
  if ( a2 >= 4 )
    a2 = 0;
  v4 = a1 + 4 * a2;
  v5 = FIELD_U32(v4, 32);
  if ( v5 )
  {
    result = sub_607C7184(FIELD_U32(v4, 32));
    if ( !result )
      return v5;
  }
  return result;
}

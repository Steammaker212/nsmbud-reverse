/* sub_602E527C
 * address: 0x602E527C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E527C(int a1, int a2)
{
  int v2; // r12

  v2 = 0;
  if ( a1 + 188 == a2 )
  {
    Enemy__collisionPenguinSlide(a1);
    return 1;
  }
  return v2;
}

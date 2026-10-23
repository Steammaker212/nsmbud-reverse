/* moveValueTo
 * address: 0x60832424   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall moveValueTo(int *pVal, int *pTarget, int *pAmount)
{
  int v3; // r12
  int v4; // r3
  int speedVal; // r2
  int v6; // r1
  bool done; // lr

  v3 = *pVal;
  v4 = *pTarget;
  speedVal = *pAmount;
  v6 = *pTarget - *pVal;
  if ( v6 <= speedVal )
  {
    done = 0;
    if ( v6 < -speedVal )
      v4 = v3 - speedVal;
    else
      done = 1;
  }
  else
  {
    v4 = v3 + speedVal;
    done = 0;
  }
  *pVal = v4;
  return done;
}

/* sub_6083246C
 * address: 0x6083246C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6083246C(int *val, int *target, signed int *speed)
{
  int target_; // r3
  int left; // r1
  int speed_; // r2
  int v7; // lr
  int v8; // r1

  target_ = *target;
  left = *target - *val;
  if ( !left )
    return 1;
  speed_ = *speed;
  v7 = left - speed_;
  if ( speed_ < 1 )
  {
    if ( left < 0 )
    {
      v8 = 1;
      if ( v7 > 0 )
        goto LABEL_10;
    }
  }
  else if ( left >= 1 )
  {
    v8 = 1;
    if ( v7 < 0 )
      goto LABEL_10;
  }
  target_ = *val + speed_;
  v8 = 0;
LABEL_10:
  *val = target_;
  return v8;
}

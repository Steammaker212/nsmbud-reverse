/* sub_604485B4
 * address: 0x604485B4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int sub_604485B4()
{
  unsigned int result; // r0

  sub_609588DC(&unk_60C9CD78, 14);
  sub_60000288();
  result = (sub_609593C0(&unk_60C9CD78) + 3) & 0xFFFFFFFC;
  dword_60C9CEE8 = result;
  return result;
}

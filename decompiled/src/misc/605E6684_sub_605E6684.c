/* sub_605E6684
 * address: 0x605E6684   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_605E6684()
{
  dword_60CB1B28 = ++CurrentStateID;
  dword_60CB1B2C = 304;
  dword_60CB1B30 = 1;
  dword_60CB1B34 = 308;
  dword_60CB1B38 = 1;
  dword_60CB1B3C = 312;
  dword_60CB1B40 = 1;
  dword_60CB1B24 = (int)&off_60C0B3E4;
  dword_60CB1B44 = (int)&NullState;
  return &dword_60CB1B24;
}

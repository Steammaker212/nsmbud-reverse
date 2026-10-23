/* sub_606037A8
 * address: 0x606037A8   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_606037A8()
{
  dword_60CB28B0 = ++CurrentStateID;
  dword_60CB28B4 = 196;
  dword_60CB28B8 = 1;
  dword_60CB28BC = 200;
  dword_60CB28C0 = 1;
  dword_60CB28C4 = 204;
  dword_60CB28C8 = 1;
  dword_60CB28AC = (int)&off_60C0ECE8;
  dword_60CB28CC = (int)&NullState;
  return &dword_60CB28AC;
}

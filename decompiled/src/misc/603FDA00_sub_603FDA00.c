/* sub_603FDA00
 * address: 0x603FDA00   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_603FDA00()
{
  dword_60C99DFC = ++CurrentStateID;
  dword_60C99DF8 = (int)&off_60BF96D0;
  dword_60C99E00 = (int)sub_603FD9CC;
  dword_60C99E04 = 0;
  dword_60C99E08 = (int)nullsub_3667;
  dword_60C99E0C = 0;
  dword_60C99E10 = (int)nullsub_3668;
  dword_60C99E14 = 0;
  return &dword_60C99DF8;
}

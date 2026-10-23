/* sub_6020B014
 * address: 0x6020B014   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_6020B014()
{
  dword_60C8CA6C = 0;
  dword_60C8CA70 = 0;
  dword_60C8CA74 = 0;
  dword_60C8CA7C = ++CurrentStateID;
  dword_60C8CA80 = 148;
  dword_60C8CA84 = 1;
  dword_60C8CA88 = 152;
  dword_60C8CA8C = 1;
  dword_60C8CA90 = 156;
  dword_60C8CA94 = 1;
  dword_60C8CA78 = (int)&off_60BD8BAC;
  dword_60C8CA98 = (int)&NullState;
  return &dword_60C8CA78;
}

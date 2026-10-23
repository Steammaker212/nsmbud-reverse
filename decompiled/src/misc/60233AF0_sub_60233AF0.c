/* sub_60233AF0
 * address: 0x60233AF0   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60233AF0()
{
  dword_60C8D920 = (int)&sead__SafeStringBase__vtable;
  dword_60C8D924 = (int)"DV_MII_SUITYU_";
  byte_60C8D928 = 1;
  dword_60C8D92C = (int)&sead__SafeStringBase__vtable;
  dword_60C8D930 = (int)"DV_MII_";
  byte_60C8D934 = 0;
  sub_60000288();
  dword_60C8D938 = (int)&sead__SafeStringBase__vtable;
  dword_60C8D93C = (int)"MiiMdl_cheer";
  return &dword_60C8D938;
}

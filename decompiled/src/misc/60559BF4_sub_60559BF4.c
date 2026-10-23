/* sub_60559BF4
 * address: 0x60559BF4   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *sub_60559BF4()
{
  dword_60CAD910 = ++CurrentStateID;
  dword_60CAD90C = (int)&off_60C00E14;
  dword_60CAD914 = (int)nullsub_4583;
  dword_60CAD918 = 0;
  dword_60CAD91C = (int)sub_605597FC;
  dword_60CAD920 = 0;
  dword_60CAD924 = (int)nullsub_4584;
  dword_60CAD928 = 0;
  dword_60CAD92C = (int)&sead__SafeStringBase__vtable;
  dword_60CAD930 = (int)"In";
  dword_60CAD934 = (int)&sead__SafeStringBase__vtable;
  dword_60CAD938 = (int)"Count";
  dword_60CAD93C = (int)&sead__SafeStringBase__vtable;
  dword_60CAD940 = (int)"Out";
  return &dword_60CAD93C;
}

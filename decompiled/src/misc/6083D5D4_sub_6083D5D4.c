/* sub_6083D5D4
 * address: 0x6083D5D4   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

nn__util__BinaryFileHeader *__fastcall sub_6083D5D4(nn__util__BinaryFileHeader *a1)
{
  nn__util__RelocationTable *RelocationTable; // r0

  if ( !nn__util__BinaryFileHeader__IsRelocated_const(a1) )
  {
    RelocationTable = (nn__util__RelocationTable *)nn__util__BinaryFileHeader__GetRelocationTable(a1);
    nn__util__RelocationTable__Relocate(RelocationTable);
  }
  return a1;
}

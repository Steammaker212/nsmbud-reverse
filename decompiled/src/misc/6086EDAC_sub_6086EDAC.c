/* sub_6086EDAC
 * address: 0x6086EDAC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

nn__util__BinaryFileHeader *__fastcall sub_6086EDAC(nn__util__BinaryFileHeader *this)
{
  nn__util__RelocationTable *RelocationTable; // r0

  if ( this )
  {
    if ( !nn__util__BinaryFileHeader__IsRelocated_const(this) )
    {
      RelocationTable = (nn__util__RelocationTable *)nn__util__BinaryFileHeader__GetRelocationTable(this);
      nn__util__RelocationTable__Relocate(RelocationTable);
    }
    nn__util__BinaryFileHeader__IsEndianReverse_const(this);
  }
  return this;
}

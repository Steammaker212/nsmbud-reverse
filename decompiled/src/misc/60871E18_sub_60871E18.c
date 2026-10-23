/* sub_60871E18
 * address: 0x60871E18   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

nn__util__BinaryFileHeader *__fastcall sub_60871E18(nn__util__BinaryFileHeader *a1)
{
  nn__util__RelocationTable *RelocationTable; // r0
  int v3; // r6
  int v4; // r7
  int v5; // r4
  nn__util__BinaryFileHeader *v6; // r5
  nn__util__RelocationTable *v7; // r0

  if ( !nn__util__BinaryFileHeader__IsRelocated_const(a1) )
  {
    RelocationTable = (nn__util__RelocationTable *)nn__util__BinaryFileHeader__GetRelocationTable(a1);
    nn__util__RelocationTable__Relocate(RelocationTable);
  }
  v3 = *((_DWORD *)a1 + 8);
  v4 = FIELD_U16(v3, 64);
  if ( FIELD_U16(v3, 64) )
  {
    v5 = 152;
    do
    {
      v6 = *(nn__util__BinaryFileHeader **)(FIELD_U32(v3, 16) + v5);
      if ( !nn__util__BinaryFileHeader__IsRelocated_const(v6) )
      {
        v7 = (nn__util__RelocationTable *)nn__util__BinaryFileHeader__GetRelocationTable(v6);
        nn__util__RelocationTable__Relocate(v7);
      }
      v5 += 232;
      --v4;
    }
    while ( v4 );
  }
  nn__util__BinaryFileHeader__IsEndianReverse_const(a1);
  return a1;
}

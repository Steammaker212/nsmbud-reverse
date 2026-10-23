/* nn__util__BinaryFileHeader__IsSignatureValid_const
 * address: 0x609ADF64   size: 12   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// attributes: thunk
int __fastcall nn__util__BinaryFileHeader__IsSignatureValid_const(nn__util__BinaryFileHeader *this, int a2, __int64 a3)
{
  return nn__util__BinaryFileHeader__IsSignatureValid(this, a2, a3, HIDWORD(a3));
}

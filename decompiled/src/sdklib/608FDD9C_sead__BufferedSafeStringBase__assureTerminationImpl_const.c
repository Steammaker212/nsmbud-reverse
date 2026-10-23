/* sead__BufferedSafeStringBase__assureTerminationImpl_const
 * address: 0x608FDD9C   size: 24   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__BufferedSafeStringBase__assureTerminationImpl_const(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 4) + FIELD_U32(a1, 8);
  *(_BYTE *)(result - 1) = 0;
  return result;
}

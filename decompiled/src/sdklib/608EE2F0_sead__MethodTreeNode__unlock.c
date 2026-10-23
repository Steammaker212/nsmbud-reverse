/* sead__MethodTreeNode__unlock
 * address: 0x608EE2F0   size: 16   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__MethodTreeNode__unlock(int a1)
{
  int result; // r0

  result = FIELD_U32(a1, 60);
  if ( result )
    return sead__CriticalSection__unlock(result);
  return result;
}

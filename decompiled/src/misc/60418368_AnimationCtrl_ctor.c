/* AnimationCtrl_ctor
 * address: 0x60418368   size: 36   group: misc
 * sym: # AnimationCtrl_ctor as UNKNOWN
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall AnimationCtrl_ctor(int result)
{
  *(_DWORD *)result = 0;
  FIELD_U32(result, 4) = 0x3F800000;
  FIELD_U32(result, 8) = 0;
  FIELD_U32(result, 0xC) = 0x3F800000;
  FIELD_U32(result, 0x10) = 0;
  FIELD_U32(result, 20) = 0x3F800000;
  FIELD_U32(result, 24) = 3;
  return result;
}

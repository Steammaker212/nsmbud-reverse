/* ChallengeResultScene_ctor_helper_helper_3F625C
 * address: 0x603F625C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int ChallengeResultScene_ctor_helper_helper_3F625C()
{
  int result; // r0

  result = sub_603FDA80();
  *(_DWORD *)result = &off_60BF94AC;
  FIELD_U32(result, 420) = 0;
  FIELD_U8(result, 424) = 0;
  return result;
}

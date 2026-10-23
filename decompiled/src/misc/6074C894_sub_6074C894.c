/* sub_6074C894
 * address: 0x6074C894   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074C894(Actor *a1)
{
  StateMethodExecuter *result; // r0
  bool v3; // zf

  result = (StateMethodExecuter *)Actor__getProfileId(a1);
  if ( result == (StateMethodExecuter *)845 )
    return sub_60749064((int)a1);
  v3 = result == (StateMethodExecuter *)843;
  if ( result != (StateMethodExecuter *)843 )
    v3 = result == (StateMethodExecuter *)841;
  if ( v3 )
    return sub_60749064((int)a1);
  return result;
}

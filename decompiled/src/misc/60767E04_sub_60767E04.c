/* sub_60767E04
 * address: 0x60767E04   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60767E04(_DWORD *a1, int a2, int a3)
{
  StateMethodExecuter *result; // r0

  if ( !dword_60C99DD4 || (result = *(StateMethodExecuter **)(dword_60C99DD4 + 764), result != (StateMethodExecuter *)3) )
  {
    a1[40] = sub_60773F3C(a1, a1[20]);
    a1[2432] = a3;
    return sub_60766314((int)a1, (StateBase *)&dword_60CBF358, 0);
  }
  return result;
}

/* sub_60237610
 * address: 0x60237610   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237610(EffectData *a1, int a2, __int64 *a3, char a4)
{
  EffectData_init(a1);
  if ( EffectData_setEffectId(a1, a2) != 1 )
    return 0;
  if ( !a3 )
    a3 = (__int64 *)&qword_60B3B8CC;
  return sub_60236A80((int)a1, a3, a4);
}

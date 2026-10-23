/* sub_60584408
 * address: 0x60584408   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60584408(int a1, unsigned int a2, int a3)
{
  int *result; // r0

  if ( FIELD_U8(LevelInfo_instance, 17) == 40 )
  {
    result = (int *)(dword_60C99DD4 + 1382);
    ++FIELD_U16(dword_60C99DD4, 1382);
  }
  else
  {
    SE_SYS_100COIN_ONE_UP_ref(dword_60C99DD4, a2, 1);
    result = sub_603FFC8C((int *)(dword_60C99DD4 + 852), 1);
    if ( a3 == 1 )
      return (int *)sub_603FBA2C(dword_60C99DD4, 100, a2);
  }
  return result;
}

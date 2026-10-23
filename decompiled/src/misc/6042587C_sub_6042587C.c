/* sub_6042587C
 * address: 0x6042587C   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042587C(int a1)
{
  *(_DWORD *)a1 = off_60BFA3A4;
  sub_60924350(a1 + 17144);
  sub_6095A0BC(a1 + 6896);
  sub_60954610(a1 + 6828);
  sub_60954610(a1 + 6760);
  if ( FIELD_U8(a1, 192) )
    dword_60C9BBD4 = 0;
  return sead__CalculateTask__dtor((_DWORD *)a1);
}

/* sub_6074C83C
 * address: 0x6074C83C   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6074C83C(int a1, int a2, unsigned int a3)
{
  int v3; // r0
  _DWORD *result; // r0
  int v5; // t1

  if ( a3 >= 2 )
    a3 = 0;
  v3 = a1 + 4 * a3;
  v5 = FIELD_U32(v3, 656);
  result = (_DWORD *)(v3 + 656);
  if ( !v5 )
    *result = a2;
  return result;
}

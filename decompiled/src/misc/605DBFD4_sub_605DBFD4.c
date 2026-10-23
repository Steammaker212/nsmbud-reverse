/* sub_605DBFD4
 * address: 0x605DBFD4   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605DBFD4(_BYTE *a1, int a2)
{
  char v3; // r0

  v3 = FIELD_U8(a2, 84);
  a1[6336] = v3;
  a1[84] = v3;
  if ( (a1[6265] & 0x20) != 0 )
    sub_605E0870(a1, &dword_60CB18A0, 0);
  return sub_605D79D0((int)a1, (StateBase *)&dword_60CB1828, 0);
}

/* sub_607A9608
 * address: 0x607A9608   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607A9608(int a1)
{
  int v1; // r1
  int v2; // r2
  StateBase *v3; // r1

  v1 = FIELD_U32(a1, 1228);
  FIELD_U32(a1, 1228) = v1 | 4;
  if ( (v1 & 0x4000000) != 0 )
  {
    v2 = 0;
    v3 = (StateBase *)&unk_60CC4A0C;
  }
  else if ( (FIELD_U8(a1, 1204) & 0x80) != 0 )
  {
    v2 = 1;
    v3 = (StateBase *)&dword_60CC4ACC;
  }
  else
  {
    v2 = 5;
    v3 = (StateBase *)&unk_60CC49CC;
  }
  return sub_60766314(a1, v3, v2);
}
